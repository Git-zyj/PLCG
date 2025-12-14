/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [3] = ((~(((arr_1 [i_0]) ? (arr_0 [i_0]) : 500565709))));
        var_12 = (((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 31211))) ? -var_3 : 0)));
        var_13 = ((~(((arr_2 [i_0]) ? (((arr_1 [i_0]) * var_3)) : (var_3 < 249286429)))));
        var_14 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? (arr_2 [i_0]) : (min(var_7, (arr_2 [i_0])))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_15 = (((((((4294967292 ? (arr_2 [i_0]) : var_2))) == var_7)) ? (((4045680878 ? (arr_2 [i_1 - 2]) : (arr_2 [i_1 - 1])))) : ((4095 ? 831346632032038866 : 33554431))));
            var_16 = (((((!(arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1])))) == (!-var_4)));
            arr_6 [i_0] = (min(17241060110073547606, 714404924));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = ((((-(arr_1 [i_2])))));
            arr_9 [i_0] = (min(((-(arr_7 [i_0]))), ((max((arr_4 [i_0] [i_0]), (max((arr_7 [i_2]), 5)))))));
            var_18 += ((~(((arr_7 [i_0]) ? (arr_7 [i_0]) : var_11))));
            arr_10 [i_2] [i_0] [i_0] = (((arr_1 [i_0]) ? (max(((min((arr_0 [i_0]), var_2))), -var_1)) : 1));
            var_19 = (max(var_19, (arr_1 [i_0])));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_20 = (min(var_20, (((((arr_2 [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : 1))))));
            var_21 ^= (((arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (((arr_4 [i_3 + 1] [i_3 - 1]) ? (((4294967284 ? 22 : var_8))) : -var_0)) : (((max((arr_1 [i_0]), (arr_1 [i_3 + 1])))))));
        }
    }
    var_22 &= 29;
    #pragma endscop
}
