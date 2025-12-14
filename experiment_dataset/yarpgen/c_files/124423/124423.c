/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = var_2;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_16 = ((255 ? 242 : 1924));
            var_17 = (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -1)), ((((min(var_0, 58795809))) ? ((-(arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) : ((var_7 ? -1899 : (arr_1 [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 = (min(var_18, ((((arr_8 [i_2]) ? ((-(arr_2 [i_2]))) : -1)))));
            var_19 = (i_0 % 2 == 0) ? (((((max((min(1268520762, (arr_0 [i_0] [i_2]))), (arr_0 [i_0] [i_2])))) ? ((255 << (((max((arr_0 [i_0] [i_2]), var_0)) - 32399)))) : ((((217 ? 1 : 690204890))))))) : (((((max((min(1268520762, (arr_0 [i_0] [i_2]))), (arr_0 [i_0] [i_2])))) ? ((255 << (((((max((arr_0 [i_0] [i_2]), var_0)) - 32399)) + 29186)))) : ((((217 ? 1 : 690204890)))))));
            var_20 -= (((-((max(60, (arr_0 [i_2] [i_2])))))));
        }
        var_21 = (min(var_21, 247));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((((max(var_5, (arr_9 [i_3] [10]))) ^ (min(47, 690204890)))));
        var_22 = (~-18);
        var_23 = (max(-1, 1));
        var_24 = (((((5872 ? (arr_10 [i_3]) : var_12)))) ? ((min((!-5874), -1223))) : ((((((var_5 ? var_7 : 63))) && (((var_7 ? 1642014598 : var_12)))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 = (min(var_25, ((((((min((arr_4 [i_4] [i_4] [i_4]), var_5)) + 2147483647)) >> (((min(var_6, (arr_6 [i_4] [i_4] [i_4]))) + 1800331491)))))));
        var_26 ^= (+(((var_9 / var_10) & -248)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 = (max(var_27, 31864));
        arr_18 [i_5] = ((!(((var_5 << (var_11 - 1021262911))))));
        var_28 |= 1;
    }
    var_29 = (max(var_29, -1));
    var_30 ^= var_8;
    #pragma endscop
}
