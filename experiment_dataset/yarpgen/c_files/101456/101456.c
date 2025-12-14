/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [10] [i_0] [i_2] [i_1] |= 24;
                            arr_13 [i_3] [i_2] = (((((arr_7 [i_0] [i_0]) ? (2147483641 != var_17) : (arr_7 [i_2] [i_2]))) == (((!(arr_7 [i_0] [i_1]))))));
                            var_19 = 50;
                            var_20 -= (arr_9 [4]);
                            var_21 = (((!var_8) >= (((arr_5 [0] [i_2] [13]) << (((arr_5 [i_3] [i_1] [i_1]) - 1408743795))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_5] [i_0] [i_0] [i_0] [i_4] = ((19 ? ((((arr_11 [i_4 + 1] [i_1] [i_0] [i_0] [i_0]) != ((((24 < (arr_2 [1])))))))) : (arr_8 [3])));
                            arr_20 [i_4] [i_4] [i_4] [i_5] = var_4;
                            var_22 = (((-32767 - 1) ? 0 : (((0 >= -1) % var_12))));
                            var_23 = ((2147483622 + (arr_3 [i_5])));
                        }
                    }
                }
                var_24 = -9;
                arr_21 [i_0] [i_1] [i_0] = ((((((-2147483647 - 1) + (2147483647 >= 0)))) <= (((~var_17) * (!32746)))));
            }
        }
    }
    var_25 = var_9;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_26 = ((((((2147483647 >= (arr_27 [i_6] [i_7] [i_6]))) ? 32767 : (arr_16 [i_6] [i_6]))) > (((((arr_14 [i_6] [i_6] [i_7] [i_7]) > (arr_7 [i_6] [8])))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_37 [i_7] [4] [i_6] = (~32750);
                                var_27 = 17;
                            }
                        }
                    }
                }
                var_28 = var_9;
            }
        }
    }
    #pragma endscop
}
