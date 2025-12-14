/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (min((~var_12), (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 |= ((!(!var_8)));
            arr_5 [i_0] = ((max((var_19 || var_8), (arr_4 [i_0] [i_1 - 1]))));
            var_21 = ((-(((var_17 != (max(var_15, 1677841944)))))));
            var_22 = (((((~(~var_17)))) ? (min(9223372036854775807, 18446744073709551615)) : (max((arr_4 [i_1 - 1] [i_1 - 1]), var_4))));
        }
        arr_6 [i_0] = (((((min(1, -4)))) <= (((arr_0 [i_0]) | 93))));
        arr_7 [i_0] = (((arr_4 [i_0] [i_0]) ? ((((arr_3 [i_0]) >= var_17))) : (((!(arr_3 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_23 |= 127;
                var_24 = ((!(max((!var_18), (-112 && 4034418350)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_4 + 1] = (max(1125279443, (arr_21 [i_6] [i_5] [i_4 + 1])));
                    var_25 = (max(var_25, (!3169687849)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_33 [13] [i_5] [i_5] [i_5] [i_5] [i_5] = max(((((-127 - 1) >= 1542167870))), (max(var_15, (arr_32 [i_4] [i_4] [i_4 - 1] [i_7] [i_7] [i_7] [i_4]))));
                                arr_34 [i_4 + 2] [i_5] [i_6] [i_6] [i_8] = (max((max(((((arr_14 [13]) >= var_3))), var_1)), ((((-(arr_18 [i_4 - 1] [i_4 + 2])))))));
                                var_26 = ((((((10321049405044030286 && var_18) ? (0 || 2305807824841605120) : (arr_25 [i_4 - 1] [i_4])))) | var_12));
                            }
                        }
                    }
                    var_27 *= ((((max((((arr_17 [i_4] [i_5]) ? var_1 : var_10)), ((((arr_14 [17]) <= var_1)))))) ? (((max(124, (arr_10 [i_5]))))) : var_10));
                }
            }
        }
    }
    var_28 = (min(var_28, (min((min(-746829451, var_18)), var_17))));
    #pragma endscop
}
