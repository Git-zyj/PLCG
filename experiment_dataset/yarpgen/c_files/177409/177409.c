/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (((((!(((907237197 ? var_8 : var_8))))))) + (~9010028678939011485));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] = var_8;
            var_12 = (max(907237213, 9223372036854775807));
        }
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_2] = (~(max(var_2, 114)));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] = ((-(0 >> 21)));
                        var_13 = ((var_2 ? ((((max(229, -1991056523811579399))) ? ((max(var_7, 4294967281))) : (~var_9))) : ((((var_8 ? var_6 : var_8))))));
                        var_14 = (min(var_14, 5988721376291579314));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_15 = (max(907237197, (max((min(9223372036854775807, 242)), var_10))));
                            var_16 ^= (8185458860748940464 | 18);
                            arr_22 [i_2] [i_2] [i_4] [i_6] [i_7] = var_5;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_17 = 4;
                            var_18 = var_5;
                            var_19 = (max(((32743 ? 32748 : var_4)), (907237183 <= var_8)));
                        }
                        arr_27 [i_6] = max((((-(-907237198 >= 54581)))), ((((max(var_3, 3))) ? (403691399 & 4202041349) : var_5)));
                        var_20 = (((min(23934, (~var_6))) & (9223372036854775807 == 3199177461)));
                        arr_28 [i_2] [i_4] [i_6] = 14;
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_21 ^= 3199177461;
                        arr_32 [i_9] [i_9] [i_4] [i_3] [i_2 + 2] = ((var_5 ? ((-1991056523811579391 ? 20 : 235)) : var_8));
                        arr_33 [i_2] = -5225;
                    }
                    for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_10] = (((max(54604, ((max(255, var_6))))) << ((((((min(23934, var_1))) ? 65513 : (max(255, 8754661537113862156)))) - 65511))));
                        arr_38 [i_2] [i_4] [i_4] [i_10] [i_3] [i_2] = (max(37011, ((3199177461 - ((max(23934, 1095789835)))))));
                        var_22 = -48993;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 7;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    arr_46 [i_2 - 1] [i_11] [i_12] = ((0 ? -1 : (!23934)));
                    var_23 = (max((((((var_7 ? var_7 : 166)) < 907237205))), (max(59757, ((var_3 ? var_9 : 5224))))));
                    arr_47 [i_11] = 13207273083172484695;
                    var_24 = var_3;
                    var_25 = (max((5239470990537066921 * 4294967290), (max(((min(var_5, 9))), ((211 ? 9007199254740991 : 255))))));
                }
            }
        }
        var_26 = 248;
        arr_48 [i_2] = 18446744073709551615;
    }
    var_27 = (max(-54581, (11 + 4294967289)));
    var_28 ^= var_3;
    var_29 = 110;
    #pragma endscop
}
