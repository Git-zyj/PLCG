/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-22533 ? (-2147483647 - 1) : -22520));
    var_20 = ((+((((max((-32767 - 1), var_15))) ? (~var_14) : (min(22533, var_17))))));
    var_21 = (min(var_21, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (max(((((max(32757, 0)) / ((18446744056529682432 ? -12929 : 18871))))), (min(var_9, var_15))));
                var_23 = (min(var_23, (((-var_17 ? (((((7369418315973638520 ? -22537 : 100))) ? (var_17 + 16119) : var_0)) : (arr_2 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_12 [4] [i_2] [1] [i_3] [i_1] = (min(16114, ((var_14 ? (((22519 ? var_10 : var_4))) : (22540 % var_6)))));
                            var_24 = arr_11 [i_0] [i_0] [i_0] [i_1] [1] [i_0];
                        }
                    }
                }
                arr_13 [1] [i_1] [i_0] = ((((min((arr_9 [i_0] [i_0] [i_0] [0]), var_3))) ? -1 : var_10));
            }
        }
    }
    var_25 = (var_5 != var_18);
    #pragma endscop
}
