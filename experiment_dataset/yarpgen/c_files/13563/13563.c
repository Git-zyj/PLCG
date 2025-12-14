/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min(((((arr_1 [i_0]) && (arr_1 [19])))), (arr_1 [i_0]));
        var_20 *= (max(((((((arr_0 [i_0] [3]) ^ (arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), var_5));
        var_21 = ((min(10974569758539887803, ((var_10 ? 10974569758539887793 : 2921261554)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((-(((!((((arr_6 [i_0] [i_0]) % var_11))))))));
                    var_22 = (min(var_22, ((min((((!((((arr_5 [i_2] [i_0] [i_0] [i_0]) ? (arr_4 [15]) : (arr_1 [i_0]))))))), ((((-(arr_5 [i_0] [i_0] [i_2] [i_0]))) * var_15)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [10] [10] [i_1] [i_4 + 1] [i_4] = (arr_5 [i_0] [i_1] [i_2] [i_4]);
                                arr_14 [i_1] = (min((((arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) ? 16128 : (arr_9 [i_4] [i_1] [i_2] [i_1 - 2] [i_1] [i_0]))), 8188));
                                var_23 = (min(var_23, (arr_6 [i_3 - 1] [i_1 - 3])));
                                var_24 = (((((-2147483647 - 1) ? 114 : 2930351883))) ? (arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_4 - 1]) : (min((arr_5 [i_0] [i_1] [i_1 - 2] [i_3]), (arr_11 [i_0] [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_4] [10]))));
                                var_25 = (max(var_25, ((min(((((((arr_0 [i_3] [i_3 + 2]) ^ 1364615412))) | 2930351883)), (arr_5 [i_0] [i_0] [i_1 - 2] [i_3 + 1]))))));
                            }
                        }
                    }
                    arr_15 [i_1] [19] [i_1 + 1] = (((arr_9 [i_1 - 2] [i_1] [i_1 - 2] [i_2] [6] [i_2]) ? (max(2930351884, -5463)) : (((arr_9 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 2]) ? 197228472 : var_9))));
                    arr_16 [i_1] [1] = ((((((((arr_4 [i_0]) ? (arr_11 [5] [i_1 + 2] [i_2] [i_2] [7] [i_2] [i_0]) : (arr_4 [i_0])))) ? (((1364615412 << (-109 + 117)))) : (arr_12 [i_1 - 2] [i_1] [i_1] [i_2]))) - (1373705741 - var_15)));
                }
            }
        }
    }
    var_26 |= ((var_17 ? var_15 : (((var_12 ^ var_12) ? (min(2930351883, -8913)) : (~var_12)))));
    var_27 = (min(var_27, var_10));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_28 = (min(var_28, (!var_0)));
        var_29 ^= (min(((((arr_4 [i_5]) && var_15))), 82));
    }
    #pragma endscop
}
