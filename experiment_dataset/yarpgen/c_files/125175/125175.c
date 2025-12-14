/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (((1 ? 205 : 50)));
                    var_18 = ((var_5 ? (((((((arr_3 [i_0]) ? 1 : (arr_8 [i_0] [i_0] [i_0] [i_1])))) ? -var_16 : var_14))) : (min((arr_4 [i_0] [0]), (min(var_8, var_7))))));
                    var_19 = 1;
                    var_20 = 2643039403;
                    arr_11 [i_0] [19] [i_0] [i_0] = (arr_0 [i_0]);
                }
            }
        }
        arr_12 [i_0] = (((((~(arr_6 [i_0])))) ? (arr_6 [i_0]) : var_3));
        var_21 = 112;
        arr_13 [i_0] [i_0] = 3221225472;
        arr_14 [24] |= ((((var_16 < (1 % 2))) ? (((-(3848966768 || 184)))) : var_8));
    }
    var_22 = 178;
    #pragma endscop
}
