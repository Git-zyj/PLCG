/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_2 ? ((var_11 ? (!var_10) : (!var_6))) : (((((var_5 ? -1 : 8445985976321433853))) ? (var_9 != var_4) : ((178 ? var_4 : 398910561))))));
    var_15 = ((((max((var_4 || 997598559), var_5))) ? ((((!(((var_2 ? var_13 : var_10))))))) : (3251669497 == 597893077)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [10] |= (!var_4);
        var_16 = (min(var_16, (((((var_5 ? (arr_0 [17]) : 10313820589968129922)) + (arr_1 [i_0]))))));
        var_17 = ((var_11 < (arr_1 [i_0 + 2])));
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((~((-(arr_0 [i_1]))))));
        var_18 ^= max(((max((((((arr_0 [i_1]) + 2147483647)) >> (((arr_0 [i_1]) + 670692536)))), (arr_0 [i_1])))), (arr_4 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 ^= (((((arr_7 [1] [i_2]) ? -524288 : (arr_8 [i_2] [i_2])))) ? (3685 < 6163) : ((var_9 << (2668968714208233651 - 2668968714208233648))));
        var_20 |= var_2;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_21 ^= (((((arr_5 [i_2] [i_3]) - 955270097)) / (((var_8 ? var_5 : (arr_9 [i_3]))))));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = 2040221186854436819;
                    var_22 = (1635008670 ? 3349039257 : (arr_14 [9] [0] [9]));
                }
            }
        }
    }
    var_23 = ((max(525639563, -8)));
    #pragma endscop
}
