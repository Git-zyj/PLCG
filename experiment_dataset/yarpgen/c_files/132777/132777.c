/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (min(var_18, (min(20, var_0))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (!65515);
                    var_22 = (max(var_22, -20));
                    arr_8 [i_0] [i_0] [i_0] [i_2 - 1] = ((arr_0 [i_0 - 1]) >> var_3);
                }
            }
        }
        var_23 = arr_2 [i_0] [i_0] [i_0];

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_24 *= 254;
            arr_12 [i_0 - 1] [i_0] [i_0] = (var_5 ? var_14 : var_1);
            var_25 = (var_6 ? (arr_11 [i_0] [i_0] [13]) : var_2);
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_26 |= var_8;
        var_27 = min(((((65516 & var_1) || (((3002330419 ? 11 : var_7)))))), ((-(~419295010))));
    }
    #pragma endscop
}
