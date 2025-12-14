/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = (arr_6 [i_0] [i_1] [i_0] [i_3]);
                                arr_13 [1] [i_0] [8] [i_3] [i_0] = 30;
                                arr_14 [i_0] [i_4] = (((((((30 % 30) < ((var_1 ? (arr_9 [i_0] [i_3] [5] [i_1 - 2] [i_0] [4]) : (arr_9 [i_0] [2] [14] [14] [i_4] [14]))))))) ^ ((var_4 ? ((1 ? 35917 : var_1)) : (min(126, (arr_8 [i_3] [i_0] [i_0] [i_3] [i_0] [i_3])))))));
                                var_11 += ((1 || ((((var_9 + 108) ? ((var_0 ? (arr_11 [i_4] [i_3] [i_1] [i_1]) : var_6)) : 1)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0] = (((((((((arr_12 [i_0] [i_0] [i_0]) ? var_1 : 1))) ? (!var_2) : (min(1120308819, 0))))) ? ((((var_3 & -2) != var_1))) : (arr_12 [11] [11] [i_0])));
                        var_12 += (((((arr_4 [i_1 + 1] [4] [4] [i_1 - 2]) ? (((arr_17 [i_0] [i_1 + 1] [i_2] [i_2] [i_1 + 1]) ? (arr_16 [1]) : var_2)) : ((((var_7 < (arr_9 [i_5] [i_1] [i_5] [i_1] [1] [i_2]))))))) * (((9943054232529925869 ? 1 : 65535)))));
                    }
                    var_13 = (min((arr_8 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] [i_1 - 1]), (((-(129 || 28))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_14 = (min(var_14, var_5));
                var_15 = ((4795193078270579048 ? 14958246527148594788 : 57));
                arr_24 [i_6] |= ((128 ? 255 : 9943054232529925869));
                var_16 ^= var_3;
            }
        }
    }
    #pragma endscop
}
