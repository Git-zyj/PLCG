/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_19 || ((((var_9 >= var_8) % (1 * var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 *= (((((((-2001692755 ? (arr_1 [i_0] [i_0]) : -55))) ? ((((arr_4 [i_0] [14]) + var_11))) : var_17))) && ((!(arr_0 [i_1 + 1]))));
                    arr_9 [i_1] [14] [i_2] = (((((-((var_9 ? var_17 : -2001692753))))) ? (((2001692749 ? (~var_12) : (var_14 < -2260)))) : (max((min(var_2, (arr_8 [i_0] [i_0]))), var_8))));
                }
            }
        }
    }
    #pragma endscop
}
