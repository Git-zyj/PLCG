/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (171601608 / 19);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (((var_13 ? (arr_2 [i_3 - 1] [i_1 - 2]) : var_4)))));
                        var_22 -= 15;
                        var_23 ^= (((((62280 ? 1091286392 : var_8))) ? ((-1291067795 ? 11735385089301856750 : 15)) : 1));
                        var_24 &= ((~(arr_1 [i_1])));
                    }
                }
            }
        }
        var_25 = (min(var_25, 16491));
        arr_12 [i_0 + 2] = ((((2785242793362936660 ? 171748488 : -6))) ? (((var_4 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_0] [i_0])))) : ((var_8 ? 2811423068 : var_3)));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_22 [i_5] = (((9223372036854775780 >= 134217727) % ((var_14 ? ((2811423068 ? var_1 : (arr_16 [i_5] [i_5]))) : ((19 << (((arr_18 [i_4] [i_5] [i_4]) + 105))))))));
                        var_26 = (min(var_26, ((((arr_13 [i_4]) ? (((arr_19 [16] [i_6] [i_7 + 4] [i_6] [16]) % (arr_18 [i_5 - 1] [16] [i_6 - 1]))) : ((6 ? (arr_16 [2] [i_7]) : ((15 ? -1 : var_12)))))))));
                        var_27 = (min(var_27, ((((~(arr_13 [i_5 + 3])))))));
                    }
                }
            }
        }
        var_28 -= (~var_4);
    }
    var_29 *= ((((((!1483544227) & var_12))) ? -27894 : (((!(6 % var_2))))));
    var_30 = (var_3 >= var_1);
    #pragma endscop
}
