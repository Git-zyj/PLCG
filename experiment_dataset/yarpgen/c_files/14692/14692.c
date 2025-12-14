/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((-1046721019 ? var_7 : var_14))), var_1));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = var_6;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_18 = (((arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 2]) ? var_15 : ((4294967295 ? 3228 : 1962695441))));
            arr_6 [i_0] [i_0] [i_0] |= (arr_0 [i_0] [3]);
            var_19 = ((!(arr_2 [i_0 - 1] [i_1] [i_1])));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] = (((arr_1 [i_0 - 2]) ? (min((arr_1 [i_0 + 1]), -1046721010)) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1]))))));
                var_20 = -18185;
                var_21 |= (min(var_0, (arr_0 [i_0 - 2] [i_0])));
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
            {
                var_22 = ((var_13 ? (max(var_14, (arr_11 [i_0 - 2] [i_2 - 1] [i_4 - 2]))) : (max(var_13, 7462))));
                var_23 |= min(var_13, (arr_8 [i_4 - 2] [i_0 - 2]));
                arr_17 [i_0] [i_2] [i_4] |= (arr_2 [i_0 - 1] [8] [i_4]);
                var_24 |= (max(1778268122, ((((arr_10 [i_0]) || (((var_14 ? (arr_12 [i_0 - 1] [i_2 - 1]) : 2074858334))))))));
            }
            for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
            {
                var_25 = (min(var_25, ((min((arr_1 [i_0]), (arr_7 [6] [i_2] [i_5]))))));
                var_26 |= arr_18 [i_0] [i_0] [i_5];
            }
            var_27 = (min((24537 | 8388607), var_2));
            arr_21 [i_0] [i_2] |= ((!((min((arr_4 [i_2 - 1] [i_2 - 1]), 248)))));
            var_28 |= (((((((!(arr_0 [i_0] [0]))) ? (min((arr_11 [i_0] [i_0] [i_2 - 1]), 2074858334)) : ((((arr_0 [i_0] [i_2 - 1]) == var_12)))))) || var_14));
        }
    }
    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        var_29 = ((((min(((var_14 ? var_13 : 44659)), (min(2516699173, 16383))))) ? (max(((((arr_22 [i_6] [i_6 - 3]) == -26531))), (min(var_12, 25)))) : 126));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_30 = var_2;
                    var_31 = (arr_28 [i_7]);
                }
            }
        }
        var_32 |= ((56 ? -1046721024 : 0));
    }
    for (int i_9 = 3; i_9 < 20;i_9 += 1)
    {
        var_33 = min((((!((min((arr_31 [i_9 - 1]), -7)))))), (((-1235133137 ? (arr_29 [i_9] [i_9]) : 621856031))));
        arr_32 [i_9 - 1] = (min(((-(arr_30 [i_9 + 1] [i_9]))), (arr_31 [i_9 - 3])));
        var_34 = (max(var_34, (((!((((arr_30 [i_9 + 2] [i_9 + 2]) ? var_10 : 255))))))));
    }
    var_35 |= var_2;
    var_36 |= ((((71 ? var_11 : var_6)) ^ var_6));
    #pragma endscop
}
