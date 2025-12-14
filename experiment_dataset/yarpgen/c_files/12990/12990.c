/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(1227106324, ((~(arr_2 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (!((min((arr_6 [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 2]), (arr_2 [7] [i_2 - 2] [i_2 + 1])))));
                                var_17 = arr_3 [4];
                                arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [1] = (((arr_7 [i_0 + 1] [i_3 - 1] [2] [i_3 + 1] [8] [i_0 + 1]) != ((((arr_6 [i_1] [i_2 - 1] [i_2 - 1] [i_3]) ? (arr_6 [i_0] [i_2 + 1] [i_2] [i_2]) : (arr_6 [3] [i_2 - 1] [12] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (~var_3);
    #pragma endscop
}
