/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178367
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
    var_16 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])))) : (((/* implicit */int) var_5))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [(signed char)5] = ((/* implicit */unsigned char) var_2);
                                var_18 *= ((/* implicit */signed char) (short)10645);
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                                var_19 = ((/* implicit */long long int) arr_12 [i_3] [i_1] [i_1]);
                            }
                            var_20 = ((/* implicit */long long int) (unsigned char)154);
                            var_21 = ((/* implicit */unsigned char) var_3);
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2] [i_3])), (max((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1])), (-1150160571)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) 524288LL);
            }
        } 
    } 
}
