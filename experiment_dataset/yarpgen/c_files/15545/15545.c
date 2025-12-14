/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = ((((max(99, 16105890826307089123))) ? ((((arr_3 [i_2 - 1] [i_2 - 1] [i_2]) << (((arr_3 [i_2 + 1] [i_2 + 1] [15]) - 185))))) : ((-93 ? (arr_3 [i_2 + 1] [i_2 - 1] [i_2]) : var_5))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((-1 >= (arr_8 [i_0] [i_3] [i_2] [i_3] [i_0] [i_3])))) != var_8));
                            arr_11 [i_3] [10] [i_2] [i_1] [i_0] [i_0] = ((var_7 ? (arr_6 [i_0]) : 99));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [12] = ((14604 ? (arr_9 [i_5] [i_1] [i_5 + 1] [i_4 + 1]) : (~var_10)));
                            arr_20 [17] [i_1] [i_4] [16] = (arr_17 [i_5 + 2] [i_5 - 2] [11] [i_5] [i_5 + 1]);
                            var_20 = ((-1 ? ((var_13 ? (arr_2 [i_4 - 1] [i_4 + 1] [i_5 + 2]) : (arr_2 [i_4 + 1] [i_4 + 1] [i_5 - 2]))) : (min((arr_2 [i_4 - 1] [i_4 - 1] [i_5 + 1]), (arr_2 [i_4 - 1] [i_4 + 1] [i_5 + 1])))));
                            arr_21 [i_0] [i_0] [i_4] [i_5] = var_11;
                        }
                    }
                }
            }
        }
    }
    var_21 |= var_11;
    var_22 = var_7;
    var_23 = (var_10 >= var_16);
    #pragma endscop
}
