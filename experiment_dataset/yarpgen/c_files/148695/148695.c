/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(var_12, var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= ((((((((arr_1 [i_1] [i_1]) - (arr_0 [i_0] [i_1 + 2])))) ? ((((arr_1 [i_1 + 1] [i_0]) ? 25925 : 0))) : var_6)) - (((((max(var_10, var_6))) ? var_14 : -var_5)))));
                arr_6 [i_1] = ((((((max(var_14, var_7)) - var_12))) - (((var_0 - 0) - ((~(arr_5 [i_1] [i_1])))))));
                var_20 = (max(var_20, ((!((max(0, (var_8 - var_12))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_21 = (((var_15 - (arr_5 [i_1 + 1] [i_1]))) - (((arr_5 [i_1 - 1] [i_1]) ? (arr_5 [i_1 - 1] [i_1]) : (arr_5 [i_1 - 1] [i_1]))));
                    var_22 = (((1534915175 - 7) ? (!var_9) : (2209494964 - 0)));
                    var_23 = (!var_9);
                    arr_9 [i_1] = var_1;
                }
            }
        }
    }
    var_24 = ((min(var_3, 60757)) + var_0);
    #pragma endscop
}
