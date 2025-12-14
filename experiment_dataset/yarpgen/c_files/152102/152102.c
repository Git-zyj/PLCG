/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((~(min((var_2 / var_12), (min(14075367680756943680, var_0))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 += (((arr_1 [13]) ? -33 : var_12));
        arr_2 [i_0] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) / (arr_0 [i_0]))) : ((((arr_0 [i_0]) > (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] |= (((arr_0 [i_0]) ? ((4371376392952607936 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((arr_0 [i_0]) > (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = ((var_15 ? 1313405750 : var_3));
        arr_8 [i_1] [i_1] = (((33 | 0) ? (arr_7 [i_1]) : 14075367680756943680));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_22 &= ((var_17 ? var_15 : (arr_7 [i_2])));
        var_23 = (((arr_1 [i_2]) * (((arr_0 [i_2]) ? 72057594037927808 : var_5))));
    }
    var_24 = ((2981561546 ? (((178 - ((10040 ? 0 : var_2))))) : ((var_12 ? (var_8 / var_16) : (((min(-33, -83))))))));
    var_25 = ((((max(14075367680756943680, 15633148))) ? var_8 : (max(14075367680756943680, 0))));
    #pragma endscop
}
