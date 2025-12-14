/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((3291 ? (!42463) : 42463));
                arr_4 [i_0] [i_0] [i_0] = (min(((((max((arr_2 [i_0] [i_0] [i_1]), var_10))) ? ((var_8 ^ (arr_0 [i_0] [i_0]))) : ((~(arr_0 [i_0] [i_0]))))), ((((((arr_0 [i_0] [i_0]) | 215))) ? ((var_4 / (arr_3 [i_1 - 1] [i_0] [i_0]))) : ((((arr_0 [i_0] [i_0]) && 60)))))));
            }
        }
    }
    var_14 = 42463;
    var_15 = var_8;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 = var_9;
        arr_7 [i_2] = (!var_11);
    }
    #pragma endscop
}
