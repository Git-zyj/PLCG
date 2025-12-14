/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0] [20])));
        var_14 = ((((!(arr_1 [i_0] [i_0]))) ? (((var_2 || (!2487781002)))) : ((1807186292 ? 38 : 61955))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (min(var_2, ((2487781002 ? -42 : -1755837858))));
        var_15 = ((-(((arr_4 [i_1]) - 884172778))));
        arr_7 [6] = ((162 | (((~(arr_2 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = ((max(-43, (((arr_4 [i_2]) ? -1755837845 : 57136)))) * var_8);
        var_17 = var_4;
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_13 [i_3] = (((arr_8 [i_3 + 1]) && -5804719506130919898));
        var_18 = (min(var_18, ((((var_9 ^ 18511) || (((107 ? 1040167172 : -1755837845))))))));
        var_19 &= (arr_12 [4] [i_3]);
    }
    var_20 = (((-1755837832 != 1807186299) != var_1));
    var_21 = (((((58 ? 1974419416 : var_5)))) ^ ((-(58708 - var_4))));
    #pragma endscop
}
