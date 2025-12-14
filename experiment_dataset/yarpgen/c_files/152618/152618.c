/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((((min(var_8, var_9)) < (var_8 < 0))) || ((((~6457) ? var_1 : ((2074383705 ? var_11 : 4113133083)))))));
    var_18 = var_14;
    var_19 = (((((var_11 > (((var_11 ? 59079 : var_12)))))) >= (-2124728620 - 59069)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((max((((var_9 >= (arr_4 [i_0] [i_0])))), (max(438694783787673663, var_8))))) ? (max((!var_9), (max((arr_0 [i_1]), (arr_3 [8]))))) : (((((var_0 ? (arr_0 [i_0]) : var_12))) | (min(1, var_11)))))))));
                arr_6 [10] [10] |= ((~(arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
