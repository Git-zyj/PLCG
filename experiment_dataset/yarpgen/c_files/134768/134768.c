/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((0 & ((((-32767 - 1) != 2)))))) ? var_6 : ((((max(-12026, 9223372036854775807))) ? (~9223372036854775800) : var_1))));
    var_15 = ((max(((var_10 >> (9223372036854775807 - 9223372036854775777))), -81)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 &= var_2;
        var_17 *= -12006;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] = ((~(12024 + 1)));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_18 = (((((!((min(var_12, 17457995838318013607)))))) >= ((((max(var_8, 8011))) ? 38835 : ((-(arr_0 [i_2] [i_4])))))));
                            var_19 = (arr_7 [i_0] [i_0] [i_3] [i_4]);
                            arr_13 [i_0] [i_0] [i_2] [12] [i_0] [i_0] = (min(var_1, var_8));
                            var_20 = (min(var_20, var_13));
                            arr_14 [i_0] [i_0] [i_0] = -12762053891644543616;
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_21 = 1773220897372397312;
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_5] = -12019;
                            var_22 = var_7;
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0] = ((!(~var_0)));
                            var_23 = (!var_4);
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = (((arr_16 [i_6] [i_3] [i_2] [i_1] [i_1] [i_0]) ? (arr_6 [i_2] [i_1] [i_2] [i_3]) : 162));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = var_4;
                            var_24 = ((-var_2 ? (min((arr_6 [i_0] [i_2] [i_2] [i_7]), -18446744073709551615)) : (((min((!34381), ((!(arr_5 [i_0] [i_7])))))))));
                            arr_27 [i_3] [i_0] [i_2] [i_3] [i_7] [i_2] = ((16383 ? ((((!(arr_16 [i_7] [i_3] [i_2] [i_1] [i_1] [i_0]))))) : (max((!65520), (max(var_5, 5684690182065008000))))));
                            arr_28 [1] [i_1] [i_0] [i_3] [i_3] [i_7] = max((((!(-1911550152337764728 >= 0)))), ((max(38835, 5684690182065007991))));
                            var_25 = (min(var_25, (max(((((~32290) ? (10 > 1537695112) : (arr_3 [i_0] [i_0] [3])))), (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (((arr_3 [i_0] [14] [i_0]) / 16673523176337154292))))))));
                        }
                        arr_29 [i_0] = (max((max(18446744073709551615, var_9)), ((max((((16383 ? var_2 : 190))), var_12)))));
                    }
                }
            }
            var_26 ^= (arr_16 [i_0] [i_0] [i_0] [i_1] [1] [5]);
        }
    }
    #pragma endscop
}
