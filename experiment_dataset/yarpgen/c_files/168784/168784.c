/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-172 ? 5713448128314170813 : var_4));
    var_13 = var_11;
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (max(var_16, ((min(var_5, (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [1] = arr_5 [i_1];
        arr_7 [5] = -174;
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_17 = (max(var_17, ((((-(arr_9 [i_2] [i_2])))))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_14 [10] [i_2] [i_3] = (~(arr_10 [i_3]));
            arr_15 [i_2] [i_3] [17] = ((~(min(((var_4 ? (arr_0 [i_3]) : -2255377943672767980)), (!var_10)))));
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_21 [i_2] [i_2] [15] = 1;

                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_18 = (-(arr_20 [i_5] [i_5] [i_6 + 1]));
                    arr_24 [i_6] [i_4] [1] [i_4] = 3677677227564328888;
                }
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_19 = ((~(((arr_11 [i_2 - 2] [i_2 + 2]) ? (((-4 ? 213 : 48))) : var_7))));
                arr_27 [4] [4] [13] = (!var_9);
                var_20 = ((((((var_9 ? -30552 : 11))) ? (((1736861214 ? 235 : 34720))) : (max(32765, var_2)))));
                var_21 = (min(var_21, ((min(1, 875939590)))));
            }
            arr_28 [i_2] [i_2] [i_4] = ((var_5 >> ((((-var_7 ? (arr_11 [i_2 - 4] [i_2 + 1]) : (arr_10 [i_2 + 1]))) - 21630))));
        }
        arr_29 [i_2] = (max(((((arr_8 [i_2]) || (((var_3 ? 24824 : var_4)))))), ((~(~var_8)))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_34 [i_8] = ((((((arr_10 [i_8]) ? (-1139676871 & 1) : ((~(arr_22 [2] [i_8] [1] [i_8] [11] [11])))))) ? 65535 : (817021546 >> 1)));
        arr_35 [i_8] [i_8] = ((((var_8 << (((arr_13 [3] [i_8] [i_8]) - 100))))) / ((~(arr_26 [i_8] [i_8]))));
        arr_36 [i_8] [i_8] = (~(((~7097076911128549632) ? -8645355832077695645 : (arr_26 [i_8] [i_8]))));
    }
    #pragma endscop
}
