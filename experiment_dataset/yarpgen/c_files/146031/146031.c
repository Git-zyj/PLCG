/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_0));
    var_15 = ((((max(982095640, 1))) / (max((var_12 * var_6), 35))));
    var_16 = (max((((!((min(871819308, 12471494680439971818)))))), (((var_11 && var_7) << (var_4 - 30872)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (-(min(((((arr_1 [i_1 + 1] [i_0]) || (arr_2 [i_1] [i_1] [i_1])))), (arr_0 [i_0]))));
                var_17 = (min(var_17, 1702400411));
                var_18 = var_8;
            }
        }
    }
    #pragma endscop
}
