/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = ((1 ? 9890 : 1));
                        var_15 = 251;
                        var_16 = ((2 ? (arr_5 [i_0] [i_0] [i_0]) : (+-3673)));
                    }
                }
            }
        }
        var_17 = (min(var_17, ((min(((min(27, 126))), ((1 ? ((15 ? 5394054109341813113 : 2573876990)) : (!1))))))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_18 = (min(var_18, var_6));
        arr_12 [i_4 - 1] [i_4 - 1] = ((!((max(((min(var_8, var_5))), var_6)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = (((((0 % var_0) < 254)) ? (((7 <= -4) * (var_1 <= var_12))) : (~var_13)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (((~65535) ? ((7 ? 40514 : 122)) : var_8));
                                var_21 = var_11;
                            }
                        }
                    }
                    arr_25 [i_5] [i_5] [i_5] = arr_20 [i_4 + 1] [i_4] [5] [i_5] [1] [1];
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_30 [i_5] [i_9] [i_9] [i_9] [i_9] = (((arr_8 [i_4 + 2] [i_10] [1] [i_10] [2]) ? ((232 ? 1569174215 : -12)) : ((-1 ? 126 : 1))));
                                var_22 = (max(var_22, ((((max((65535 | 14977190509388414201), (var_5 && 0))) * (!55))))));
                            }
                        }
                    }
                }
            }
        }
        var_23 ^= ((~((63217 ? 6241728803103487019 : (1 / -8666554593222442968)))));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_33 [i_11] = (((((1 ? (!var_10) : -var_9))) ? ((max((arr_23 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_23 [1] [1] [0] [i_11] [i_11] [i_11] [i_11])))) : (((-(arr_22 [1] [7] [i_11]))))));
        var_24 += (arr_5 [i_11] [7] [i_11]);
    }
    var_25 = ((-(((!((min(48674, 6448839534203291633))))))));
    var_26 &= ((((((max(4112872535, var_1)) <= (((min(var_5, var_7)))))))) <= (min(((-1 ? var_5 : 4611686018360279040)), ((min(var_2, var_1))))));
    #pragma endscop
}
