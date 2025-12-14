/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((-var_8 | (max(var_9, var_9))))) ? 1069446490254483680 : var_5));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (((1069446490254483680 ? ((min((min(30557, 4294967285)), 2678787025))) : -6432036497384016957)))));
        var_20 = (max(var_20, (((~(--6372579337541539128))))));
        var_21 += 7638;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_4] [i_4] [i_4] [i_4] |= (min(((-1069446490254483680 ? -1069446490254483669 : 1069446490254483667)), (arr_7 [i_2] [i_2] [10] [i_2 - 2])));
                        var_22 = (min(var_22, (((-((var_9 ? (arr_13 [i_4] [i_2 + 1] [i_2 - 1] [i_4]) : (arr_13 [i_4] [i_4] [i_2 - 1] [i_4]))))))));
                        var_23 -= var_17;
                        var_24 += (arr_13 [i_4] [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                        var_25 += ((((((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? -1069446490254483669 : var_14));
                    }
                }
            }
        }
        var_26 = (max(var_26, var_8));
        var_27 ^= 15;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_28 = (min(var_28, 1073074574));
                    arr_20 [0] [i_5] [i_5] |= ((22101 ? (-32756 / -1069446490254483666) : 1));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_29 = (max(var_29, (arr_7 [i_7] [i_8] [i_8] [3])));
                    var_30 = (min(var_30, ((max(-1069446490254483670, 36532)))));
                    var_31 -= (arr_4 [8] [i_9]);
                }
            }
        }
        var_32 -= (((!-101) ? (((((arr_25 [i_7] [i_7] [i_7]) && (arr_28 [i_7] [i_7] [i_7]))))) : (max((arr_23 [2] [2] [i_7]), (arr_17 [i_7])))));
        var_33 = (max(var_33, (((min(1, (26793 * var_15)))))));
        var_34 -= 296477712;
    }
    var_35 += ((var_9 | ((max(var_5, ((0 ? var_0 : var_6)))))));
    var_36 -= -61;
    var_37 |= (28983 != 64985);
    #pragma endscop
}
