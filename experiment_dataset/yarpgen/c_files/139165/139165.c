/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = var_9;
                var_12 = (min(var_12, ((((arr_6 [i_1]) < (arr_0 [i_0]))))));
                var_13 = 43;
                arr_7 [i_0] [i_0] [i_1] = (max(var_5, ((((~50) == ((24312 ? var_0 : var_1)))))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_11 [i_0] [i_2] [i_0] [i_0] = ((arr_1 [i_2 - 1]) == (arr_0 [i_2 + 1]));
                    var_14 = (((min((arr_3 [i_0]), (arr_0 [i_2 - 1]))) ? (-127 - 1) : (((15 ? 1387660578 : 3043175126)))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((((((arr_10 [i_0] [i_2 + 2] [i_0] [i_0]) * (var_9 == var_3)))) ? var_6 : 1387660578));
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = var_7;
    var_17 ^= var_8;
    var_18 = var_6;
    #pragma endscop
}
