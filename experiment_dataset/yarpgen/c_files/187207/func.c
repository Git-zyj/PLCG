/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187207
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) ? (min((((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) * (((/* implicit */int) (short)6056)))), (((((/* implicit */_Bool) 2756798793396133439LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)64)))))) : (((/* implicit */int) (short)3181))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((short) arr_0 [i_1 - 1]));
                    var_12 = ((/* implicit */int) arr_3 [i_0]);
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-13139)) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2])))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)113))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_13 [i_3] [i_1 + 1] [i_0] [i_0] = var_5;
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_8))));
                    var_14 *= ((/* implicit */_Bool) var_2);
                }
                var_15 *= ((/* implicit */unsigned long long int) (unsigned char)93);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_5);
}
