/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 |= (max(((min((arr_3 [i_0] [i_1]), 801156724))), ((var_13 >> (((arr_5 [i_0] [11] [i_1]) - 846779854))))));
                var_17 = (min(((-1 ? 68719476735 : -11848)), ((((arr_1 [i_1]) - (arr_1 [i_0]))))));
            }
        }
    }
    var_18 = (min(801156724, 2816072906));
    #pragma endscop
}
