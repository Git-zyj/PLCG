/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((~(arr_3 [i_1 + 1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [8] = 255;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] [i_0]) | (arr_13 [i_3] [i_3] [i_3] [i_1 - 1] [i_1] [i_1])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (((((arr_3 [i_0]) ? var_13 : 2715777667785939239))) ? var_2 : (arr_12 [i_0] [i_4] [i_4] [i_3]));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_18 = (max(var_18, (((-0 ? (arr_13 [i_0] [i_1] [i_1] [i_5 - 3] [i_5] [i_0]) : (arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1]))))));
                    var_19 = ((!(((1096307733 ? (arr_13 [i_0] [0] [i_1 + 1] [i_5] [i_5 - 3] [i_5]) : -22)))));
                    var_20 = ((((arr_12 [17] [i_1] [i_5 - 2] [i_5]) ? (arr_12 [i_5] [17] [i_5 - 2] [i_5]) : (arr_12 [18] [0] [i_5 - 1] [i_5]))));
                }
            }
        }
    }
    var_21 = ((max(var_9, var_12)));
    #pragma endscop
}
