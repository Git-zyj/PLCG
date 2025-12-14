/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118062
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_13);
        var_17 += ((/* implicit */unsigned int) ((signed char) arr_1 [i_0]));
        var_18 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_3))))) ? (((unsigned long long int) 2288307293635131262LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)6])) || (((/* implicit */_Bool) var_6))))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned char) var_0);
        var_20 = ((/* implicit */signed char) min((var_20), (arr_4 [i_1])));
        arr_8 [i_1] = ((/* implicit */_Bool) var_3);
        arr_9 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
        var_21 += ((/* implicit */unsigned int) ((long long int) arr_6 [6U] [i_1]));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(arr_12 [i_3])))) != (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_2]))))), ((-(arr_13 [i_2] [i_2])))))));
                var_22 += ((/* implicit */unsigned short) min(((-(min((arr_13 [i_2] [12LL]), (arr_13 [i_2] [12U]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                var_23 = ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) || (((((/* implicit */unsigned long long int) 2288307293635131262LL)) != (var_16))));
            }
        } 
    } 
}
