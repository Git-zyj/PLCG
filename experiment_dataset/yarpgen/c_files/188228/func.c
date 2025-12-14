/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188228
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((var_2), ((unsigned short)93))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (var_15)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) var_13);
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 - 1]);
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((unsigned int) arr_4 [i_1] [i_0 - 1] [i_2])) : (((arr_3 [i_0] [i_2]) >> (((-2753913686208673932LL) + (2753913686208673940LL)))))))) ? (((/* implicit */int) (signed char)103)) : ((-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
                    var_20 = var_15;
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2753913686208673933LL)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-1189)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_2])) : (arr_5 [i_0] [i_1] [(unsigned char)0] [i_1]))), (((/* implicit */int) ((((/* implicit */long long int) var_11)) != (-2753913686208673927LL))))))) : (arr_3 [i_0 + 2] [i_2]))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    arr_12 [i_0] = (-(arr_3 [i_0 + 1] [i_0 + 2]));
                    var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
                }
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)93), (((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_1] [i_0 + 2]))))) * (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
