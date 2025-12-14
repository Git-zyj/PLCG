/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_12 ? (((var_0 ? var_6 : var_7))) : var_18));
    var_21 -= (max((((var_1 & 10555639542389422256) ? var_0 : ((var_13 ? 10555639542389422256 : 1048544)))), (2058 % 2614882587920866628)));
    var_22 = (max(var_22, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (max(var_23, 56));
                var_24 = ((0 ? (((-(arr_0 [i_0 - 2])))) : 8558065944917648099));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_25 *= var_15;
                            arr_9 [1] [i_1] [i_2] [i_3] |= 1;

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_26 = (min(var_26, (((((arr_5 [i_0 - 2] [i_0 + 4] [i_2 - 1] [i_2 - 2]) && -315315003)) ? (((arr_4 [i_4]) ? (((arr_2 [i_1]) >> (1048544 - 1048538))) : ((4293918752 ? 2058 : 63477)))) : (arr_8 [i_0 + 3] [i_0 + 4] [i_2] [i_2] [i_2 - 2] [i_2 - 1])))));
                                arr_12 [i_0] [0] [i_2 - 3] [i_0] [i_4] |= -108;
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] |= (((((arr_2 [i_0 + 2]) >> (10319102203426372906 - 10319102203426372905))) << (((((max((arr_3 [i_0]), (arr_11 [i_1] [1] [1] [i_1] [i_1]))) << (((min((arr_8 [i_0] [i_0] [i_0] [i_0] [12] [i_0]), var_8)) - 2343001626256536470)))) - 3362664943))));
                var_27 |= 2073;
            }
        }
    }
    #pragma endscop
}
