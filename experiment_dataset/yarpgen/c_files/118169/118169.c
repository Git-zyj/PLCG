/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((18446744073709551615 <= 1) ? 3765418614 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = (((((((arr_8 [i_2] [i_1] [i_1]) != (arr_4 [1] [i_1] [i_0]))) || var_2)) ? 330900427 : ((((!(((13 + (arr_2 [i_2] [i_0]))))))))));
                    arr_11 [i_2] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_3] [i_2] [i_1] [i_4] [i_2] = var_9;
                                arr_18 [i_4] [i_2] [i_0] = (((arr_15 [i_4] [i_2] [i_3] [i_2] [i_3]) % (((!18446744073709551608) ? 1293975700 : 8444249301319680))));
                                arr_19 [7] [i_2] [i_0] = (-2035498585 ? (arr_2 [8] [i_3]) : 18438299824408231929);
                            }
                        }
                    }
                    var_11 = (max((((arr_5 [i_2] [13] [i_0]) * (-2147483647 - 1))), (arr_5 [7] [i_1] [i_2])));
                }
            }
        }
    }
    var_12 = (-1 ? (((-1396803385 ? 3840319672 : 92823695))) : (((((var_5 ? 25 : 1247176917))) ? (((var_5 ? 1130054640 : -1792059180))) : var_7)));
    var_13 = max(1, 14097143605524304401);
    #pragma endscop
}
