/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (var_5 + var_11);
    var_13 = max(var_9, -var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((((var_8 && (arr_7 [i_2] [i_1]))) ? (!0) : (arr_6 [i_2] [i_1] [i_2] [i_2])));
                    var_14 = (arr_7 [i_1] [i_0]);
                    var_15 = ((!(~2)));
                }
            }
        }
        arr_9 [0] = (arr_7 [i_0] [i_0]);
        var_16 += (-26 ? (arr_4 [i_0]) : -7);
    }
    var_17 = (min(var_17, (~2507725046845403663)));
    #pragma endscop
}
