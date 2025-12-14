/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((((var_13 ? var_14 : (-2147483647 - 1)))) ? ((max(var_13, var_4))) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((((max((max(var_5, var_5)), -var_13))) ? var_15 : ((((!(arr_0 [i_0] [i_1 + 3])))))));
                arr_4 [i_0] [13] = -1270708771;
                var_18 = (min(var_11, ((((arr_3 [12]) * (arr_2 [i_0] [i_0] [i_1 - 1]))))));
            }
        }
    }
    var_19 ^= ((-(max(var_0, -127))));
    var_20 = ((~(!var_10)));
    var_21 = var_15;
    #pragma endscop
}
