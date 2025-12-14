/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((var_14 <= (max(var_0, var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((arr_1 [i_0] [10]) << (((arr_1 [i_0] [0]) - 1137550969)))))));
                arr_4 [i_0] [i_0] = var_10;
                arr_5 [i_0] [i_0] [i_0] = ((((min(5734645330942967511, ((max((arr_3 [2] [i_1] [i_1]), var_10)))))) == (((var_18 * 0) ? (((arr_0 [i_0] [i_1]) ? 1699788966011470770 : 1)) : ((max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
