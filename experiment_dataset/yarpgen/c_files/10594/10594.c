/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((((min((arr_3 [i_2]), ((var_8 ? var_9 : var_11))))) ? 52764 : (((((arr_3 [i_0]) ? 152 : 243)) / (524287 != 27)))));
                    var_18 = (((arr_3 [i_2]) ^ (min((arr_1 [i_2] [i_0]), (arr_7 [i_0] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_19 = ((((((var_2 ? var_8 : var_1))) ? (((arr_13 [i_4 + 3] [i_3] [i_2] [i_1] [i_0]) ? var_7 : var_4)) : (max(var_6, 381931519)))) - (((((2497395569 ? (arr_13 [i_0] [i_1] [i_1] [i_3] [i_4]) : (arr_2 [i_1] [0])))) + (90 - 0))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_4] [i_1] = ((-4611686018427387904 ? 3449072557 : 1032192));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = (max((((var_5 == 14) ? (2497395578 - 1032183) : (~5))), -1032175));
                                arr_16 [i_4] [i_1] [i_1] [i_3] [i_3] = ((((((194 << (((arr_4 [i_0]) - 187)))) <= -1032191)) ? (((min(8864, 1)))) : ((var_5 ? 5430425007950096257 : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_4])))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] = 3294983871;
                            }
                        }
                    }
                    var_20 = (((arr_1 [i_0] [i_0]) ? (min(((var_12 ? 31 : -1032197)), (min(1032196, 85)))) : (max((max(-1032178, 0)), var_1))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_1] = ((~(((var_5 && 825849644) ? 147 : (arr_13 [i_0] [i_1] [i_0] [4] [i_5 - 4])))));
                                var_21 = (((((((arr_18 [i_2] [i_5 - 4] [i_1] [i_6]) != 1020)))) <= ((15 ? 147 : 2497395564))));
                                var_22 = ((((((~4192256) ? (max(4294967282, 0)) : ((3469117657 >> (-5 + 14)))))) <= ((805306368 + ((236 ? 2497395584 : 15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((max(-var_2, (240 + var_2))) - ((min(var_14, var_0)))));
    var_24 = (!(~10));
    #pragma endscop
}
