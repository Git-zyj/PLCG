/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 % (-127 - 1));
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 -= ((((((min(4610560118520545280, (arr_0 [8])))) ? (arr_0 [14]) : var_5)) / (((arr_0 [0]) ? (arr_0 [14]) : var_4))));
        var_16 = 63;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 &= (max(-5, (max(8602146784575017904, ((0 ? -19 : 0))))));
            var_18 |= (~572998644);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = (var_2 + var_10);
            var_20 = (min(var_20, (((-(arr_0 [i_2]))))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_21 = (max(var_21, -3996725110965656600));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_22 += ((((((arr_13 [10] [i_4] [i_2] [8] [i_4] [i_4] [i_5]) ? var_10 : var_6))) && (((var_8 ? (arr_7 [i_0] [12] [i_3]) : 70368727400448)))));
                        var_23 &= (arr_8 [i_0] [3]);
                        var_24 = (((282323959 ? var_12 : var_1)));
                    }
                    var_25 = ((92 ? (arr_12 [i_0] [i_0]) : var_0));
                    var_26 = -6288066538322376918;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_16 [i_0] = ((arr_11 [i_3] [i_0] [i_0] [i_0]) ? 0 : (arr_15 [i_0]));
                    var_27 = (((((!(arr_7 [i_2] [i_3] [i_6])))) - 38));
                    arr_17 [15] [15] [15] [i_3] [i_3] [i_0] = ((!(arr_14 [i_0] [i_0] [i_0 + 2] [i_0])));
                }
                var_28 = (1364701788159319363 - 1542163580061887103);
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_29 += ((var_12 || (~200)));
                arr_20 [i_0] = ((1 <= (arr_4 [i_0] [i_2] [i_7])));
                var_30 = (var_5 ? var_5 : ((1073741820 ? 0 : var_4)));
            }
        }
        var_31 = (arr_8 [i_0] [i_0]);
    }
    var_32 = var_12;
    #pragma endscop
}
