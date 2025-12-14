/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!2050391677) ? 66 : var_16);
    var_21 = (-32767 - 1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [3] = ((938328084 ? 32767 : ((var_11 ? (((-11571 + 2147483647) << (((arr_0 [5] [1]) - 13459960142443209012)))) : (arr_1 [i_0])))));
        arr_3 [0] [0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                var_22 = (max(var_22, (arr_5 [i_3])));
                arr_12 [2] [i_1] [6] [5] = ((!((min(((((arr_7 [i_1]) / 111))), ((113 ? 88 : (arr_9 [i_1] [6] [i_1]))))))));
                var_23 = ((-114 ? ((-126 ? (!var_5) : ((min((arr_11 [i_1] [9] [i_3] [i_1]), (arr_5 [i_1])))))) : (arr_1 [3])));
            }
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                var_24 = ((~(min(117, (!-114)))));
                var_25 = -28263;
                var_26 = ((((min(1390527021, (((255 ? (arr_7 [i_1]) : (arr_8 [i_4]))))))) ? ((((~244) ? (8 > 708868568) : ((min((arr_4 [i_4]), 238)))))) : (((-(arr_5 [i_4]))))));

                for (int i_5 = 1; i_5 < 6;i_5 += 1)
                {
                    var_27 ^= ((((-124 || ((min(18446744073709551600, -31)))))));
                    arr_19 [i_1] [4] [i_4] [4] [i_1] = (min((min((arr_11 [i_1] [6] [i_1] [6]), (arr_9 [9] [i_4] [i_1]))), 32756));
                }
                arr_20 [8] [i_1] [i_4] [5] = (min((min(18446744073709551605, (min((arr_10 [i_1] [i_2] [i_4]), var_19)))), 18446744073709551615));
            }
            var_28 = (min(var_28, var_15));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_29 = (((min(((-19757 ? 2147483647 : 8126464)), (arr_13 [i_1] [i_1] [i_1]))) >= 2));
            var_30 |= ((98 ? ((596553613 ? 12100320429228474516 : (arr_10 [2] [2] [2]))) : 708868574));
        }
        arr_24 [i_1] [i_1] = 18629;
        arr_25 [i_1] = (((((min(0, (arr_13 [i_1] [i_1] [i_1])))) ? (arr_13 [i_1] [i_1] [i_1]) : ((18446744073709551615 ? 2904440272 : (arr_13 [i_1] [i_1] [1]))))));
    }
    #pragma endscop
}
