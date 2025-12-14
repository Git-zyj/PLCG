/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? (((4161536 ? 0 : 2147483647))) : var_2));
    var_20 = ((((~(min(1, 5658598006304056570))))) ? ((~((min(var_4, var_13))))) : 1);

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_9, (min((arr_3 [i_0 - 1] [i_0]), (~255)))));
        arr_4 [i_0 + 1] [i_0] |= (((((~(((arr_1 [i_0 - 2] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))))) ? (max(var_0, (((arr_2 [i_0]) >> (var_14 - 3782712997155525378))))) : (51973 >= 51954)));
        var_22 = ((((((((~(arr_1 [1] [1])))) ? (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_12)) : (((min(1, var_9))))))) / ((var_1 ? var_14 : (arr_2 [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] [i_1] = (min(236, 65391));
        var_23 = (max((arr_3 [i_1 - 1] [i_1 + 1]), (((arr_0 [i_1 - 1]) ? ((126 ? (arr_2 [8]) : (arr_1 [i_1] [i_1]))) : var_18))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_24 = (((arr_0 [i_2]) ? (((arr_6 [i_1]) | (~1))) : ((((var_6 + 2147483647) << (((arr_0 [9]) ? var_16 : (arr_0 [i_1]))))))));
            arr_12 [5] [i_1] [i_1] = ((((min(6144, (~var_4))) + 2147483647)) >> (((~var_2) - 1314639831)));
            arr_13 [i_1] [1] [i_1] = ((!((((((arr_0 [i_1 + 1]) + 2147483647)) << (((((arr_0 [i_1 + 1]) + 18289)) - 16)))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_25 = ((((-27043 ? (min((arr_15 [i_1 - 1]), (arr_7 [i_1] [i_3]))) : var_3)) != (((((var_7 && var_17) && ((max((arr_11 [i_1]), var_13)))))))));
            var_26 = (max((arr_14 [i_1] [i_1]), (((((1 & (arr_0 [8])))) ? (((arr_0 [i_3]) ? -5658598006304056596 : (arr_2 [i_3]))) : (arr_1 [i_1 + 1] [i_3])))));
            arr_16 [i_1] [i_3] = (max(((((19 | (arr_7 [i_1] [i_1]))) / 919981415536570135)), (arr_10 [i_1 - 2] [i_1 - 2] [i_3])));
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            arr_21 [i_1] = ((~(arr_19 [i_4 - 3])));
            var_27 = ((~(((((arr_5 [i_1] [i_4]) > (arr_6 [i_1]))) ? (var_15 | var_7) : (max((arr_3 [i_1] [i_1]), -919981415536570136))))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_28 = (max(var_28, ((5658598006304056595 ? 919981415536570135 : 6144))));
                        var_29 += ((((!(arr_15 [i_1 - 1]))) || ((min((arr_15 [i_1 - 1]), (arr_15 [i_1 - 2]))))));
                        var_30 = ((!((min((arr_9 [i_1 - 2]), (max((arr_23 [i_1 - 1] [i_4 + 1] [i_5]), 36028797018963967)))))));
                    }
                }
            }
            arr_28 [i_1] = var_3;
            arr_29 [i_1] = (((max((~var_2), ((max(239, 6144))))) - (((max((arr_14 [i_1 - 2] [i_1]), (arr_14 [i_1 - 2] [i_1])))))));
        }
        var_31 = var_17;
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_33 [i_7 + 2] [i_7 + 2] = 1;
        var_32 &= (min((min((max(var_18, var_1)), (arr_31 [i_7 + 1]))), ((((((var_16 ? var_0 : (arr_31 [i_7])))) ? (arr_32 [i_7 + 4]) : ((-(arr_31 [i_7]))))))));
    }

    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        var_33 = (max(var_10, var_12));
        var_34 &= ((8329639652261718511 ? var_15 : (arr_32 [i_8])));
    }
    #pragma endscop
}
