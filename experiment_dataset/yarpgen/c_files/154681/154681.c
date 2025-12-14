/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((max(var_12, var_12)))), (max(var_3, -143738469))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 += ((((((arr_3 [i_0] [i_0]) ? var_6 : (((arr_3 [i_1] [i_0]) ? var_3 : (arr_0 [i_0])))))) ^ (((arr_3 [i_1] [i_1]) << (((arr_3 [i_0] [0]) - 5239740565416308365))))));
                var_18 = (max((!-3), (((((var_2 ? 3 : (arr_0 [i_1])))) ? (max(-1273350108, var_8)) : -99))));
            }
        }
    }
    var_19 = (((max((max(-1238326628, 1)), (~var_6))) >> (var_11 - 1517496151)));
    #pragma endscop
}
