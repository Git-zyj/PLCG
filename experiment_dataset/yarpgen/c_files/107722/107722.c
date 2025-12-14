/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((max(((max(-30258, -97))), var_4)) + var_2))));
    var_15 += ((((8552465059935122970 && (~1845368481))) ? ((140737488355327 ? 13648648270070382369 : 30263)) : -var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_16 = (-30255 ? 82 : 14456900171353693113);
            var_17 = -6600118025390611048;
            var_18 = ((((var_3 ? var_1 : 2720469062)) == var_6));
        }
        for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = var_13;
            arr_8 [i_0] [i_2] [i_0] = 1250536555329560838;
            var_19 = var_6;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_20 = (((arr_11 [i_0] [i_3] [i_3]) ? (arr_5 [i_0] [i_0]) : var_8));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_14 [12] [3] [i_3] = ((((((arr_4 [i_0] [i_0]) + -73))) ? (var_13 ^ 1250536555329560844) : (((((arr_1 [i_0]) == (arr_6 [1])))))));
                var_21 = (max(var_21, (arr_0 [1])));
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 += (((1 % 1) << (((arr_15 [i_0] [i_5]) - 29))));
            arr_17 [i_0] [i_0] [i_5] = var_2;
            arr_18 [i_5] [i_5] [i_5] = var_6;
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 = (3016732140 | 19832);
            arr_22 [i_6] [i_6] [i_6] = (1064462105255474307 + var_3);
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_24 *= (var_2 < (arr_3 [i_7 + 1] [i_7] [i_7 + 1]));
            var_25 = (min(var_25, (((!(arr_20 [i_0]))))));
        }
        var_26 = ((var_7 ? 1089564120 : (-10481 + var_13)));
    }
    var_27 = ((-30267 * (((!(((var_9 ? var_3 : -54))))))));
    #pragma endscop
}
