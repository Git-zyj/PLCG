/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((~(arr_2 [0] [i_1] [i_0])));
                var_20 = (((((((var_3 ? (arr_4 [i_0] [i_1 - 1]) : var_17))) && ((max((arr_1 [i_1 + 1] [i_0]), var_6))))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : var_1));
                var_21 -= ((!((min(-1743650968, (arr_1 [i_1 - 1] [i_1 + 1]))))));
            }
        }
    }
    var_22 = ((-(((var_0 & var_8) ? (((min(var_4, var_14)))) : ((-1743650971 ? var_18 : 1743650971))))));
    var_23 = ((((((max(var_11, 63))) ? (var_2 >= var_11) : (var_2 || var_11))) * (!13572)));
    #pragma endscop
}
