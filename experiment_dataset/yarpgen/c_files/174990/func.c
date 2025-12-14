/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174990
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */int) (short)30743)) % (((/* implicit */int) (short)-30745)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                var_12 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_6))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_8 [i_3]);
                arr_10 [i_2] = ((/* implicit */int) (((-(((/* implicit */int) arr_5 [i_2] [i_3])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_3])))))));
                var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))))), (max((((/* implicit */unsigned long long int) var_1)), (var_7)))));
                arr_11 [i_3 + 1] = ((/* implicit */_Bool) ((int) 7131577838773872191LL));
            }
        } 
    } 
}
