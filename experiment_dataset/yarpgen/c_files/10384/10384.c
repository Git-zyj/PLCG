/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(var_7, ((max((arr_3 [i_0]), (arr_4 [i_0] [i_1] [i_0]))))));
                arr_7 [i_0] = ((((((((arr_2 [i_0] [i_1]) ? var_4 : 0))) ? ((1 ? -3740010669991480144 : (arr_6 [i_0] [i_1]))) : var_6))) ? ((0 ? -18443 : (max((arr_1 [i_0]), 12701843111072374337)))) : ((max((((arr_1 [i_0]) - 1)), (((arr_6 [11] [11]) ? var_4 : (arr_4 [i_0] [4] [i_0])))))));
                arr_8 [i_0] [i_0] = ((((min(var_6, (arr_4 [i_0] [i_0] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : 265951885));
            }
        }
    }
    var_13 = ((~((((min(1, 32162))) ? (var_11 >= var_1) : ((1 ? var_8 : 0))))));
    var_14 = (((min(((max(265951885, 0))), ((var_6 ? var_11 : 0)))) & var_9));
    var_15 = (1571602740 > 265951885);
    #pragma endscop
}
