/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(((-1597588458 ? 7627605484231807122 : -1)), (((var_5 ? 0 : ((-1 ? var_2 : var_1)))))));
    var_11 = (min(var_11, -7627605484231807120));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = -1432147491;
                var_13 = ((((min((((935019659 ? 37787 : -1))), ((1432147490 ? (arr_2 [i_0] [3]) : var_8))))) ? (((27758 >= (((arr_1 [i_0 + 2]) - 1))))) : 27748));
                var_14 -= var_1;
                arr_4 [i_0] = (((((arr_1 [i_0 + 1]) || 0)) || (((1 ? 100 : 1)))));
            }
        }
    }
    var_15 += (~-7627605484231807122);
    #pragma endscop
}
