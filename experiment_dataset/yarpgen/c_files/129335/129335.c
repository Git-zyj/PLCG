/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((+((var_6 ? (arr_0 [i_0] [i_0 - 3]) : var_0))));
        var_13 = 207;
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((min(var_7, (arr_1 [i_1] [i_1]))))));
        arr_8 [i_1] |= ((((max(((30 ? var_1 : 245)), var_7))) ? 243 : ((-(max(var_5, -8))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_15 += (arr_10 [0]);
        arr_11 [i_2] = (((((arr_7 [i_2] [i_2]) ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2]))) * ((231 ? 207 : 16719))));
        var_16 = ((-245 ? (arr_9 [i_2]) : (!25)));
        var_17 = (min(var_17, var_7));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_18 &= (arr_9 [2]);
        var_19 = -1;
        arr_14 [i_3] = ((48 ? var_5 : 0));
        var_20 = (min(var_20, ((((-2096556897 + 2147483647) >> (((max(-4, (arr_5 [i_3]))) - 4159438554467651697)))))));
    }
    var_21 = (max(var_2, (min(42, var_8))));
    var_22 = (min(var_22, (((((((((var_8 ? -1 : (-2147483647 - 1)))) ? var_5 : ((-18 ? 9223372036854775807 : 112))))) ? var_10 : var_8)))));
    #pragma endscop
}
