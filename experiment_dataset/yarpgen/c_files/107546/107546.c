/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((max((min(12916806010224420274, -32)), (var_5 & 237))) > ((min((arr_4 [i_0] [i_1]), (arr_2 [i_1] [i_0]))))));
                arr_8 [i_0] = (((-(max(42671, (arr_1 [i_0]))))));
                var_18 &= (!(((arr_1 [i_0]) < (arr_1 [i_1]))));
                arr_9 [i_0] = (((((((arr_0 [i_1] [i_1]) || var_9)))) != (max(var_6, var_3))));
            }
        }
    }
    var_19 = var_15;
    var_20 = (((!10764721293343229016) ? ((0 ? var_5 : (2926705950 || 79))) : var_15));
    var_21 = ((((min((((-13 ? var_4 : var_9))), ((var_0 ? 5529938063485131341 : var_0))))) ? 2874545568801298222 : (((((var_12 ? 23 : var_13))) - (var_10 + var_17)))));
    #pragma endscop
}
