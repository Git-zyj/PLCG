/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = (min(((max(0, 86))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((3911666362883651323 ? (((min(-73, (arr_3 [i_0]))))) : (-9084513060845373160 / 7279))))));
                arr_5 [i_0] [i_0] = -530254916;

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_23 = (max(var_23, ((max(((min(-2093824089, -8))), (((arr_1 [i_2]) >> (((-1596276430 ^ var_0) + 216531315)))))))));
                    arr_9 [6] [i_0] [i_0] [i_0] = (max((min(1059920839, 3411381942003909955)), (max(64428, 9084513060845373149))));
                    arr_10 [i_2 - 1] [i_2] [i_2] [i_0] = (min(1, var_17));
                    var_24 = ((max(2721, 110)));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_25 -= (-2731104333459235965 >= 3411381942003909956);
                    var_26 ^= (max((((arr_2 [4] [i_1] [i_0]) - (arr_2 [i_0] [i_1] [i_3]))), (min((arr_2 [i_3] [i_1] [i_0]), 530254910))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_27 = (arr_6 [i_0] [i_0] [i_1] [i_0]);
                        var_28 -= (((arr_8 [i_0] [i_1] [4] [i_5]) & 4735870757260570608));
                    }
                    var_29 = (((((-((((arr_4 [i_1] [i_4]) && var_17)))))) == (min((arr_15 [11] [i_1] [i_0] [i_0]), ((min(-94, -79)))))));
                    var_30 = (max(((~(15623888785962063854 ^ 2147483647))), ((((20747 - 80) ? 58242 : (!var_15))))));
                    arr_17 [i_0] [i_0] [i_4] = (!138);

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_6] = (min(((!((min(var_7, -98))))), ((((var_11 ? 161 : -104)) < ((-96 ? -906772239 : 65535))))));
                        var_31 ^= (3822849846514713248 / 114);
                        var_32 = (arr_3 [i_6]);
                        var_33 = (max(117, 7258));
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_34 -= (max((((((((arr_1 [i_0]) ? 0 : 2560706621))) < (min(96, 3411381942003909965))))), 249));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_8] [i_7] [i_1] [i_1] [i_0] = var_12;
                                var_35 = -29;
                            }
                        }
                    }
                    var_36 = (max(-782133387, 65535));
                }
                var_37 = ((var_8 ? var_13 : (min(65535, -11))));
            }
        }
    }
    #pragma endscop
}
