/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(var_14, var_14));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 -= (-1581979201 ? var_7 : (((min((arr_9 [i_3] [i_0] [i_2 + 1] [i_0] [i_3]), var_7)))));
                        var_21 = ((-122 ? var_6 : (((((8379434737463025213 ? var_8 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) * ((var_15 ? (arr_3 [i_1]) : 11462561095551642005))))));
                    }
                }
            }
        }
        arr_10 [i_0] |= ((((min((arr_1 [i_0] [i_0]), var_7))) && ((min(-1581979197, -1581979201)))));
        arr_11 [i_0] = var_9;

        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_22 = ((((arr_1 [i_4 - 2] [i_4 - 1]) ? 7569935083297218843 : var_1)));
            var_23 = ((((min(var_12, ((min(var_16, var_4)))))) ? (min((arr_7 [i_0] [i_0]), ((min((arr_14 [i_0] [i_0] [i_0]), var_14))))) : (arr_5 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 1])));
            var_24 = (min(((((((8762852955566308766 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_9))) ? ((var_8 ? var_16 : var_8)) : (min((arr_12 [i_4]), var_8))))), ((var_17 ? ((((arr_3 [i_0]) ? (arr_14 [i_0] [i_0] [i_4 - 3]) : (arr_7 [i_0] [i_4])))) : ((var_9 ? var_4 : var_8))))));
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (i_5 % 2 == 0) ? (((var_14 ? ((-var_12 % (((min((arr_9 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]), 123)))))) : (((((23930 ? 41597 : 15)))))))) : (((var_14 ? ((-var_12 * (((min((arr_9 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]), 123)))))) : (((((23930 ? 41597 : 15))))))));

        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            var_25 += var_7;
            arr_21 [i_5] [i_5] [14] |= ((((!(arr_16 [2]))) ? ((min(848941505842181777, (arr_15 [i_6 + 1])))) : (((arr_2 [i_6]) ? 92 : ((var_1 ? var_12 : (arr_17 [i_5] [i_5 + 1])))))));
            arr_22 [i_6] [i_6] [i_5] = (min((min(((min(var_13, (arr_2 [i_5])))), var_4)), (min((arr_3 [i_5]), var_5))));
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_26 = (min(var_26, ((max(4603452771162820478, var_12)))));
            arr_26 [i_5] [i_5] = ((((min(var_7, var_15))) ? (arr_1 [i_5 - 2] [i_5]) : (min(var_9, var_11))));
            var_27 = (min(var_27, (arr_9 [i_5] [i_5] [i_7 + 1] [i_5 - 2] [1])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_28 = ((min(var_6, var_14)));
                            var_29 = (max(5298544791926816736, -1197232764));
                            arr_35 [i_5] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5] = var_1;
                        }
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_30 = (arr_0 [i_8] [i_8]);
                            var_31 = (max(var_31, -26468));
                            arr_38 [i_5] [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2] = 4574308613114341559;
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_32 ^= var_9;
                            var_33 = (min(var_1, (arr_6 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1] [i_12])));
                            arr_42 [i_5] = ((16064664668991049129 ? 7159348049952545259 : 4574308613114341561));
                            arr_43 [i_7 - 1] [i_5] [i_8] [i_9] [i_12 - 1] = (min(var_8, var_17));
                            var_34 = (max(var_34, ((min(var_0, var_17)))));
                        }
                        var_35 -= 16763279676141872161;
                        var_36 = (((min(var_16, (arr_19 [i_9 - 1])))) ? var_17 : (min((arr_28 [i_5]), (arr_28 [i_5]))));
                    }
                }
            }
        }
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {

            for (int i_14 = 4; i_14 < 15;i_14 += 1)
            {
                arr_51 [i_5] [i_5] = (min(((var_10 ? (((min(var_7, var_1)))) : ((var_15 ? var_6 : (arr_23 [i_5] [i_13 + 3] [i_14 - 4]))))), (arr_8 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 + 2] [i_5 - 1])));
                var_37 = (var_2 ? (min(var_7, var_18)) : (arr_6 [i_14 - 4] [i_14] [i_14 - 4] [i_14 + 1] [i_14 + 3]));
            }
            var_38 = var_16;
        }
        var_39 = (arr_3 [i_5]);
    }
    #pragma endscop
}
