/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168658
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
    var_17 *= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 + 1] |= ((/* implicit */int) var_8);
                var_18 ^= ((/* implicit */unsigned int) var_12);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_2] [i_1] [2U] [1] = ((/* implicit */int) var_15);
                        var_19 = ((/* implicit */int) var_12);
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            var_21 += ((/* implicit */int) var_7);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (var_6)));
                            arr_16 [i_5] [i_5] [i_2] [i_4] [i_5] = var_13;
                        }
                    }
                    var_23 |= var_4;
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) var_9);
                        var_25 &= ((/* implicit */int) var_13);
                        var_26 = ((/* implicit */unsigned char) var_7);
                        var_27 = ((/* implicit */unsigned short) min((var_27), (var_12)));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 4; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) var_3);
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_12))));
                        }
                        for (unsigned short i_9 = 3; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) var_14);
                            var_31 = ((/* implicit */unsigned char) var_15);
                        }
                        var_32 ^= ((/* implicit */unsigned int) var_15);
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_6))));
                    }
                }
            }
        } 
    } 
}
