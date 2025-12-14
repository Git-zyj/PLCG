/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((784709860 ^ 11652289599901988010), ((max(var_2, 1258025958576500433))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (min(((((((arr_0 [i_0]) ? (arr_2 [i_0]) : 1))) ? var_6 : (max((arr_2 [i_0]), (arr_0 [i_0]))))), (((((max(27998, (arr_0 [i_0])))) ? (((arr_2 [i_0]) ? (arr_1 [i_0]) : -1)) : (((arr_2 [14]) ? (arr_1 [i_0]) : var_1)))))));

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_18 = min((37561 && 511), (min(var_7, var_10)));
                arr_9 [i_0] [i_0] = ((((min(-24793, ((27998 ? 0 : 0))))) ? ((((min((arr_3 [i_0] [i_1] [i_2]), (arr_2 [i_1])))) ? (max(var_9, var_9)) : (arr_7 [i_2] [i_1] [i_0 - 1] [i_0 - 1]))) : (((30643 ? 1520448338 : 852810897)))));
                var_19 = (1 & 22972);
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [i_0] [i_0] = 63;
                arr_14 [9] [i_1] [10] [i_0] = ((var_7 >= ((var_11 ? var_0 : var_3))));
                arr_15 [i_0] = 193;
            }
            var_20 = (((((190 ? -1461386781 : 63))) ? ((4294967295 ? 4294967295 : (min((arr_2 [i_0 + 2]), var_11)))) : (((341486544 ? 1 : 1)))));
            var_21 = (max(18, ((((0 ? 20 : 67108736))))));
            var_22 = ((min((min(4294967295, 9223372036854775807)), (4294967295 != 0))));
        }
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            var_23 = ((((((804456350 ? 0 : -7731)) * var_1)) + (((((((var_6 ? var_6 : var_2))) != (((arr_6 [i_4]) ? var_15 : (arr_16 [i_0 + 1] [i_0])))))))));
            var_24 = (max((((arr_5 [i_0 - 1] [i_4 - 3] [i_0]) ? -1072108034258862624 : var_10)), (((7702 ? (arr_7 [i_4] [i_4] [1] [i_0]) : (arr_6 [5]))))));
            var_25 = (((((arr_11 [i_0] [i_4] [i_4 - 1] [i_0 + 2]) ? ((var_10 ? 4134546218659118381 : 18)) : (arr_5 [11] [11] [i_0])))) ? (min((min(var_2, (arr_10 [0] [5] [5]))), ((4294967286 ? 1 : var_7)))) : (min((min((-2147483647 - 1), (arr_1 [i_0]))), (min((arr_7 [i_0] [i_0] [i_0] [i_4 - 2]), -1548945650)))));
            arr_18 [i_0] = min(0, -1);
        }
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_26 = (((((arr_2 [i_5 - 1]) ? 255 : (min(var_7, var_15)))) * ((((arr_3 [1] [i_5 + 2] [i_5]) >> var_2)))));
        var_27 = (max(((max(((-1 ? var_11 : var_15)), (((var_11 ? var_8 : (arr_10 [10] [1] [10]))))))), ((((max(1, 1035447732))) ? ((min(var_1, (arr_6 [i_5])))) : ((112 ? -7561331183617756921 : var_3))))));
        var_28 = (min(0, 1));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 6;i_6 += 1)
    {
        var_29 = var_3;
        arr_23 [6] = (var_11 == var_7);
        arr_24 [i_6] [i_6] = (((arr_7 [i_6 + 3] [i_6] [i_6] [5]) ? ((var_7 ? var_8 : var_0)) : 1));
        arr_25 [i_6] = ((var_13 != (arr_16 [i_6 - 4] [4])));
    }
    var_30 = ((((max(1, 1)) ? (((1 ? 1 : 1))) : (max(3201037598751876969, 4294967295)))));
    var_31 = (255 ? -2147483643 : ((((max(1, 48))) >> ((((1 ? 2787543866 : 1)) - 2787543856)))));
    #pragma endscop
}
