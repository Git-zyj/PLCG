/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 2147483647;
    var_16 = 1980056089;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_17 *= -2;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [0] [23] [14] [i_2] [i_4] = 13913337431640785238;
                            arr_15 [i_0] [i_2] = 132;
                            arr_16 [1] [i_2] [i_2] [i_3] [1] = 1;
                            var_18 = -94;
                        }
                        arr_17 [i_0] [i_3] [20] [i_2] = -18;
                        arr_18 [i_2] [i_2] [i_3] = 0;
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_2] [i_0] = (-1177536334 <= 1);
                        var_19 = (max(var_19, 2));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [5] [i_2] = 62;
                            arr_27 [i_7] [i_6] [18] [i_2] = 31823;
                            arr_28 [i_2] = ((0 & -1) || (-32767 - 1));
                            arr_29 [i_0] [11] [i_2] [i_2] [i_7] = 18;
                            var_20 *= -48;
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            var_21 *= -23;
                            arr_32 [i_0] [i_2] [1] [i_0] [i_0] [i_0] = 139;
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_22 = (max(var_22, 107));
                            var_23 = (max(var_23, (((((((-32767 - 1) == 65535))) - -79)))));
                        }
                        var_24 = ((65529 + (0 - 130)));
                        arr_36 [i_2] [i_1] [i_2] = 87;
                        arr_37 [i_2] [i_2] [i_2] = 253;
                    }
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_25 = ((((((17639696795520663483 << 1) || (18446744073709551593 && -9)))) + (24 | 32756)));
                    arr_40 [12] [i_1] [5] = -32757;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_26 = (max(var_26, 65532));
                    var_27 = -95;
                }

                for (int i_12 = 4; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_28 = (((-15 + 2147483647) >> ((((-1707972033 % (91 ^ 50))) + 63))));
                    var_29 = -1911945804;
                }
                for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_30 = (1 + 2);
                    var_31 = (((1 - -9) == 6156179890440280753));
                }
                var_32 = (-59 > 9471929907839164169);

                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    arr_50 [14] [i_1] [i_14] [13] = 1;
                    var_33 = ((6 + (((4294967295 && (1581243590 / 24))))));
                }
                arr_51 [4] [1] [i_1] = (1 || 8974814165870387447);
            }
        }
    }
    #pragma endscop
}
