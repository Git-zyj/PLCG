/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18243
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
    var_18 = ((/* implicit */long long int) 1792U);
    var_19 = ((/* implicit */unsigned char) ((min(((+(1941541722U))), (((/* implicit */unsigned int) var_3)))) != ((+(1792U)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_2]);
                    arr_7 [i_0] [i_1] [13LL] = ((/* implicit */unsigned long long int) 1941541736U);
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (1792U) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27295)))))))));
                    var_21 += 1941541722U;
                }
            } 
        } 
        var_22 = (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) 1941541724U);
            arr_11 [i_3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)29)), (arr_3 [i_0] [i_3] [(signed char)15])))) ? (((((/* implicit */_Bool) 497927597U)) ? (arr_3 [i_0] [i_3] [i_0]) : (9150387619838623558LL))) : ((-(arr_4 [i_3])))));
        }
        arr_12 [0U] = ((/* implicit */long long int) (+(2506378665U)));
    }
}
