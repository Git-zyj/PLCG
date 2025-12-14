/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-18223 ? 0 : 1)) >> (1 >> var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] = (var_5 * -5);

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_4] [i_3] [i_3] = (arr_9 [i_0] [i_0] [i_2] [i_3]);
                            arr_17 [i_0] [i_4] [13] [i_4] [i_4] = 0;
                            var_13 -= (!var_11);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_14 = (max(var_14, 65535));
                            var_15 = (min(var_15, (((var_10 != (1 || 246))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_16 = 32767;
                        var_17 -= (((((((((arr_19 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6]) - (arr_3 [i_0])))) ? ((1 ? 1 : 1)) : (((var_0 && (arr_0 [i_1] [i_1]))))))) ? var_11 : (((((((arr_8 [i_0] [i_1] [i_2] [i_6]) || var_11))) <= ((0 ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_6]) : var_4)))))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = ((!(((99 ? -6535622465801499829 : -6535622465801499829)))));
                            arr_25 [i_1] [i_2] [i_0] &= ((!(((1 - ((var_3 ? 616466641 : 3516232893)))))));
                            arr_26 [i_0] [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] = ((1 ? (((min((arr_9 [i_6] [i_6] [i_6] [i_6]), var_1)) % (arr_12 [16] [i_1] [i_6] [i_2] [i_6] [i_7]))) : (arr_13 [i_1] [i_7])));
                            var_19 = (max(var_19, 22865));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_20 &= 1;
                            arr_31 [i_0] [i_0] [i_6] [i_6] [i_2] = ((!((((-6535622465801499829 ? var_7 : (arr_2 [i_1])))))));
                            arr_32 [i_6] [i_6] = -38;
                            arr_33 [4] [i_0] [i_0] [i_2] [i_0] [22] [i_0] &= (min((((var_9 - 0) / var_7)), ((max((((arr_8 [i_1] [i_2] [i_1] [i_8]) / 38)), (!var_2))))));
                            var_21 += (~var_10);
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_22 |= (((arr_8 [i_0] [i_1] [i_2] [i_9]) * ((min((arr_19 [i_9 - 1] [21] [i_9 - 3] [i_9 - 1] [i_9] [i_9 - 1]), (arr_27 [10] [1] [10] [i_6] [i_0]))))));
                            arr_36 [i_0] [i_6] [6] [i_6] [i_9 - 3] = (((((((arr_10 [i_1] [3] [10]) && 0)) ? var_9 : (~var_7)))) && 192);
                            arr_37 [i_6] [i_1] [i_1] [i_2] [i_2] [1] = (~var_11);
                            var_23 = (((((((min((arr_3 [i_6]), (arr_35 [i_0] [i_1] [i_2] [10] [10] [i_9 - 1]))) == ((((arr_3 [i_2]) != (-2147483647 - 1)))))))) ^ (+-5321447153210153731)));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_24 = (min(var_24, var_3));
                            var_25 &= (min((101 / 1), ((min((arr_19 [i_10] [i_1] [1] [i_1] [i_1] [i_0]), (arr_19 [i_0] [i_1] [i_1] [i_0] [i_6] [0]))))));
                            arr_41 [i_0] [i_6] [i_2] [i_1] [i_10] = var_1;
                            arr_42 [i_6] [i_6] [i_10] = ((min((163 % -10), (arr_29 [i_0] [i_10] [i_6] [i_6] [i_2] [i_0]))) >= (((55 ? 27074 : (arr_20 [i_0] [i_1] [i_2] [i_2] [i_2])))));
                            var_26 = ((((!(arr_38 [i_0] [i_0] [i_0]))) ? (((arr_38 [i_0] [i_2] [i_6]) | var_9)) : (((((arr_14 [i_0] [i_1] [i_1] [i_2] [1] [i_6]) % (arr_21 [i_0] [i_1] [i_6] [i_10])))))));
                        }
                    }
                    var_27 -= 6535622465801499815;
                }
                var_28 *= (((min((((arr_34 [i_0] [i_0] [i_0]) >> 1)), ((min(1, var_0)))))) || ((min(var_5, (!var_10)))));
            }
        }
    }
    #pragma endscop
}
