/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = min((min(((min(42276, (arr_0 [i_0])))), (-1 * 3719502368320800564))), ((min(65535, (((var_3 || (arr_1 [i_1 + 3]))))))));
                arr_5 [i_1] = ((100 ? (min(-38, 14636768602559457900)) : 63488));
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (((((((237 ? 1 : var_14))) ? (((min(-4441, (arr_6 [i_2]))))) : (((arr_7 [i_2]) ^ var_13)))) & (((((4116188410092215951 >> (var_12 - 113)))) ? (arr_6 [i_2 + 2]) : (((arr_6 [i_2 + 2]) ? (arr_7 [i_2]) : 4116188410092215940))))));
        var_18 = (!var_4);
        var_19 = (((min((arr_6 [i_2 + 1]), (max(var_13, 10555076772681934612)))) <= (arr_7 [i_2])));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        var_20 = (arr_9 [i_3]);
        var_21 = ((~(((arr_10 [i_3 + 4] [i_3 - 2]) % ((max(var_15, var_4)))))));
        var_22 -= var_0;
        var_23 = 65534;
    }
    #pragma endscop
}
