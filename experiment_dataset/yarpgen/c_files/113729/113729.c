/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((2575951088 * ((((((-(arr_6 [0] [8])))) ? (~-82) : 82)))));
                var_20 = ((((((max((arr_4 [i_1]), 1314243482922892616))) ? (max(1314243482922892616, (arr_4 [i_0]))) : (((min(-12777, 0)))))) >> ((((~(arr_5 [i_0] [i_0] [1]))) - 18192498777810154411))));
            }
        }
    }
    var_21 = min(var_13, var_1);
    var_22 = var_1;
    var_23 = (min((min(var_15, (max(var_4, 1719016198)))), (36 | var_18)));
    #pragma endscop
}
