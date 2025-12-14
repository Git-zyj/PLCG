/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(4294967285, 2960388717))) ? var_7 : (2960388694 && 2960388717))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_13 = ((min((arr_0 [i_0 - 1]), var_3)));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_14 = (8939839027843856662 ^ 1);
                        arr_10 [i_1] [i_0] = (((~(arr_3 [i_3] [i_3] [i_3 + 3]))));
                    }
                }
            }
            var_15 = ((6310849159181387011 ? var_7 : ((((arr_6 [i_0] [i_1]) ? (((16384 ? 1 : 1))) : ((1 ? 3843383204 : var_2)))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_16 = ((var_6 ? (((((3311522080 <= 1) == ((1334578571 & (arr_12 [i_0] [i_0] [i_4]))))))) : (max(var_10, ((min(var_4, var_4)))))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((((1 * (!var_5)))) ? (((((2960388694 ? 1334578601 : var_4))) ? var_3 : ((2929548089 ? var_3 : var_3)))) : ((max(1, 2959540478))))))));
                            var_18 = ((-(((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 3]) ? (arr_16 [i_5 + 2] [i_5] [i_5] [i_5]) : 1))));
                            arr_23 [i_0] = var_0;
                            arr_24 [i_0] [i_6] [i_0] [i_6] [i_0] = (min(((var_2 - ((var_11 ? var_11 : (arr_12 [i_0] [i_0] [i_0]))))), (((((7518879654500769677 ? 2960388705 : 4294967278)) - ((1 ? 2959540478 : 60806)))))));
                        }
                    }
                }
            }
            var_19 = (min(var_19, ((-(min(1, 2960388710))))));
        }
        arr_25 [i_0] = 1223473573;
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        var_20 ^= 4279123317;
        arr_29 [i_8 + 1] [i_8 + 1] = (max(var_6, (((-32761 / 7518879654500769677) ? var_6 : -23))));
    }
    var_21 = ((var_3 ? var_9 : 27399));
    #pragma endscop
}
