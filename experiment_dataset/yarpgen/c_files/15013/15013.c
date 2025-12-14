/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (max((!1), (max(18446744073709551597, 18446744073709551597))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 &= -8494749677824233571;
                var_15 = (min(var_15, var_12));
            }
        }
    }
    var_16 += (max(((-(max(var_7, var_6)))), ((max((7589938899441055921 < 0), (max(var_1, var_8)))))));
    var_17 &= ((((max(2737641786649814841, 1751536780)) / (((15709102287059736777 ? 1 : -105))))));
    #pragma endscop
}
