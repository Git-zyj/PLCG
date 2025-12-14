/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_0, (min(((max(1, 3700))), (min(var_14, 6171340208689645119)))));
    var_16 = (var_3 ? ((~(min(-4335114103196054099, 0)))) : (!var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = (((-127 - 1) ? (arr_3 [20]) : var_9));
        arr_4 [i_0] = (~var_3);
        arr_5 [i_0 + 2] = 103;
        arr_6 [i_0] = ((var_9 ? var_9 : var_11));
        var_18 = var_7;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_15 [i_1] [i_1] = (min(4192054864072267212, var_12));
            arr_16 [i_1] [0] [9] = (+-2708610397);
            arr_17 [i_1] [12] = ((var_8 != ((var_0 / (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
            arr_18 [i_1 + 1] [i_2] [17] = ((-(max(5831330936281825745, (arr_8 [i_1 + 1] [i_1 + 2])))));
        }
        var_19 = var_5;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_26 [i_5] [i_4] = (127 - var_1);

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_20 = (((-127 - 1) / (var_8 | -2345701467476381479)));
                            arr_30 [6] [18] [i_1] [18] [i_5] [11] = (((max((min(1, (arr_7 [i_3] [i_4 + 2])), (arr_28 [i_4 - 2] [5] [i_4 - 1] [i_1 - 1] [i_6]))))));
                            arr_31 [i_5] [14] [i_5] [1] = (!var_14);
                            var_21 = ((!(arr_8 [i_4 + 1] [i_4 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_35 [i_1] [i_5] [i_5] [8] [11] [9] = 246290604621824;
                            var_22 = ((((max(var_6, -1476656643))) <= 5831330936281825749));
                            arr_36 [i_1 - 1] [i_1 - 1] [8] [i_1 - 1] [i_5] [i_1 - 1] [i_7] = (-(min((37768 != var_12), (arr_21 [i_1 + 1] [i_4 + 2] [17] [17]))));
                            arr_37 [i_1 + 2] [i_1 + 1] [4] [11] [i_1 + 2] [i_7] [i_5] = ((((max((arr_3 [i_1 + 2]), -1))) ? (max((min(4819416825805433944, 2928696170698242926)), ((min(48, -2))))) : (((246290604621824 ? var_9 : var_0)))));
                        }
                        arr_38 [i_5] [i_4] [i_5] [1] [i_1 + 1] = ((~((-(arr_0 [i_4])))));
                    }
                }
            }
        }
        arr_39 [i_1] [17] = (arr_8 [i_1 - 1] [i_1 - 1]);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_43 [i_8] [i_8] = (var_5 * ((((max(var_3, 10949544063097561220)) == (var_14 <= var_12)))));
        arr_44 [i_8] = ((((arr_12 [i_8] [i_8]) ? (arr_40 [i_8]) : 4258706777326545279)));
        var_23 = ((var_2 ? (var_13 & -16) : (((arr_19 [i_8] [i_8] [i_8]) >> 1))));
    }
    var_24 = (min(((min((min(20, 1)), (-5831330936281825760 >= -21)))), (max((889673350945722591 == -115), 18446744073709551613))));
    #pragma endscop
}
