/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) != ((-12 ? -502838337 : var_5))));
        var_13 = (((~var_10) > (arr_1 [i_0 - 1])));
    }
    var_14 = (max(var_14, ((max(144, 7861684341465664261)))));
    var_15 = var_0;

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (((((0 ^ var_0) ? (arr_7 [i_1]) : -7861684341465664261)) ^ (arr_6 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [i_3] [i_2 - 1] = (max(var_0, (((43 ? 24576 : var_8)))));
                    var_17 = (min((var_9 - var_5), var_12));
                    arr_16 [1] [i_2 + 1] [i_1] = 2907603619;
                }
            }
        }
        var_18 = (((((11084669158629150943 ? 17465676668682337447 : -1288704380162715296))) ? ((~(arr_1 [i_1]))) : ((((arr_8 [i_1] [i_1]) == (arr_8 [i_1] [i_1]))))));
    }
    #pragma endscop
}
