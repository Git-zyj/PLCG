/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = -65512;
                var_15 = (((((-((min(64489, var_11)))))) ? 18 : var_5));
                arr_7 [i_0] [i_1] [17] &= (max((min(23, 65506)), 65527));
                arr_8 [i_0] [i_1] = var_3;
                arr_9 [i_0] [i_1] = 57344;
            }
        }
    }
    var_16 = (max(var_13, (((min(var_11, 32768))))));
    var_17 += (((((15151 || ((max(var_0, 0)))))) + (max(29967, (var_11 + var_1)))));
    var_18 |= (((~(var_10 >= 57343))));
    #pragma endscop
}
