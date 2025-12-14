/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_0));
                var_15 = var_5;
                var_16 = (min(var_16, var_0));
                arr_5 [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_17 = var_10;
    var_18 = (max(var_18, (var_12 ^ var_8)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                var_19 = (+((((arr_7 [i_2] [i_2]) ? 6392029965620498754 : 26565))));
                var_20 = (((var_0 + 73) ? (arr_4 [i_3 - 1] [i_3] [6]) : (!1389152091)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_21 -= (((max(var_1, 15054))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_22 = ((min((arr_2 [i_4 + 1] [i_7 - 3]), -61)));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] = (max((((39831 > (123 - 8)))), ((((max(-62, -1440758198))) ? var_13 : (arr_24 [i_7] [i_7 - 3] [i_7] [6] [3] [6])))));
                                arr_27 [i_7] = (1969924282738097464 ? ((max((~-1364556583), ((var_3 ? var_9 : var_11))))) : ((4918369320269800643 ? var_9 : 4294967278)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((arr_22 [i_10] [i_9] [i_6] [i_5] [i_4]) ? (((((var_6 ? var_4 : var_2))))) : (min(((var_12 ? 206 : var_5)), (min(var_9, 16476819790971454164)))))))));
                                var_24 ^= ((-8853 + ((~(((arr_14 [6]) >> (-61 + 65)))))));
                            }
                        }
                    }
                    var_25 += (((((((arr_28 [i_4]) && (arr_18 [i_4] [8] [i_6]))))) ? 189 : var_12));
                }
            }
        }
    }
    #pragma endscop
}
