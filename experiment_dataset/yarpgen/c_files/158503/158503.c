/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((-var_14 ? ((((!(arr_4 [i_1 - 1]))))) : (max((arr_4 [i_1 - 1]), (arr_1 [i_1 - 1])))));
                var_16 *= ((~(arr_2 [i_0] [i_1])));
                var_17 = var_14;
                var_18 = var_7;
                var_19 = (!(((var_12 << ((((arr_3 [6]) && var_10)))))));
            }
        }
    }
    var_20 = (((((max(((min(var_4, 33))), (max(50612, var_8)))))) == (max((17892312646487350748 / -8415423554867305154), var_12))));
    #pragma endscop
}
