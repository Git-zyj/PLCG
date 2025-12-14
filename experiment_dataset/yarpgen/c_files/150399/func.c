/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150399
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
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (short)32767)))))))) ? (((((/* implicit */_Bool) var_4)) ? (7U) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (7U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!((_Bool)1))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_1] [0ULL] [i_1] [i_1] = ((/* implicit */long long int) var_11);
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                }
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_3] = ((short) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0 - 3])), ((unsigned char)75)))) - (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_10 [i_0] [(short)11] [i_1] [i_3]))))));
                    arr_12 [i_3] [(signed char)8] [(signed char)8] [(signed char)8] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) ((820488859) == (((/* implicit */int) (signed char)-10))))))));
                    arr_13 [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0 - 3])) : (((/* implicit */int) arr_9 [i_1 + 1])))), (((/* implicit */int) arr_1 [i_0 - 1]))));
                    arr_14 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) (+(((((((/* implicit */int) (signed char)-6)) >= (((/* implicit */int) (_Bool)0)))) ? (((int) arr_7 [7U] [7] [i_3])) : (((/* implicit */int) var_8))))));
                }
                arr_15 [i_0] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) * (((/* implicit */int) (unsigned char)18))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [(short)8] [i_0])))));
            }
        } 
    } 
}
