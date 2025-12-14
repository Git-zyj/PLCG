/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = (((((-(((arr_2 [i_2] [i_2]) ? (arr_2 [i_0] [13]) : (arr_5 [17] [i_1] [i_2 + 3])))))) ? ((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? var_14 : 18399)) >> (((arr_1 [i_2 - 2] [0]) - 418343427))))) : (max(var_11, (1254054984969886973 ^ 48982)))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = -27823;
                }
            }
        }
    }
    var_15 = (24572 >= (max(var_4, (min(-27823, var_8)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] [17] = (arr_10 [i_3]);
                var_16 = ((24576 ? -var_12 : (max(27809, -57700))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (((arr_13 [i_3]) ? ((-(((arr_14 [i_3]) ? var_6 : var_3)))) : 27809));
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 1847957815;
                            arr_23 [i_3] [i_3] [22] = (((arr_17 [i_3] [i_5] [1]) ? (((((var_3 ^ -27823) || var_9)))) : (min(384, (arr_12 [i_3] [i_4])))));
                            var_18 = ((-466 ? (arr_21 [i_5 - 2] [i_5 + 2] [i_5] [24]) : 0));
                            arr_24 [20] [18] [i_5] [17] [17] = (arr_16 [i_3] [2] [0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                {
                    var_19 = ((~(arr_25 [i_7])));
                    arr_32 [i_9] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
