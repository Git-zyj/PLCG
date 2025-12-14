/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((137438953471 ? 18446743936270598138 : ((min(3146127175450192674, -19736))))) <= ((((max(var_6, 3109135051349506811)) % -3146127175450192667)))));
    var_18 = 262815196223424203;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 ^= ((-3109135051349506802 ? ((228 ? (arr_0 [i_0] [10]) : (arr_2 [i_0]))) : -7));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [0] [i_1] [i_1] = var_9;
            var_20 = (max(var_20, (arr_0 [i_1] [i_0 - 2])));
            arr_8 [i_1] = (arr_4 [i_1]);
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_0] = 1;
            arr_14 [i_0] = ((~(((arr_10 [4]) ? -3146127175450192674 : -8425402661360045022))));
        }
        var_21 = var_9;
        arr_15 [1] [0] = var_2;
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_18 [i_3 - 2] = ((((max(((max(-26905, (arr_16 [i_3] [i_3])))), (min(7328081310212060359, (arr_16 [i_3 - 1] [i_3 - 1])))))) ? (((((var_16 ^ (arr_17 [i_3]))) & (arr_16 [i_3] [i_3])))) : (((arr_16 [i_3] [i_3 - 2]) + 18446743936270598144))));
        var_22 = (max(var_22, (arr_16 [10] [i_3])));
        var_23 -= (((((((-3146127175450192674 ? -2170330956833551684 : -8425402661360045022))) ? (min(5135312471207796442, 226)) : -775524073)) >= (((min(101, var_2))))));
        arr_19 [i_3] = var_4;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 = 3182765758280667734;
        var_25 = var_2;
        arr_22 [7] = ((-(min((!3182765758280667742), 916376027))));
    }
    var_26 = ((-5123817016883478483 << ((((max(var_6, 30))) - 49))));
    #pragma endscop
}
