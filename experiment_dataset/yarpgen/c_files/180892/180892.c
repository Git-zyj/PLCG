/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [13] [i_2] = ((((min((35 + -7), ((var_2 ? (arr_0 [10]) : 65535))))) % (((((~(arr_5 [i_0])))) ? var_14 : (((min(var_11, var_10))))))));
                    var_17 = var_13;
                }
                var_18 = (((1413510075 <= 63) * ((var_15 ? var_10 : (arr_0 [i_0 + 2])))));
                var_19 = ((!(((20773 ? -14840 : 0)))));
                var_20 &= ((var_15 ? (arr_1 [i_0] [i_0]) : ((min((arr_0 [i_0 - 3]), (arr_4 [i_0 + 2] [i_0 + 1]))))));
                var_21 = (min(((min(((min(79, 32757))), ((-69 ? -61 : -32))))), (min((arr_6 [9] [i_1] [i_0]), (255 + -1995098440)))));
            }
        }
    }
    var_22 = (~((var_3 ? ((var_10 ? var_10 : var_8)) : 15)));
    var_23 = (min(var_23, ((max(var_11, ((var_13 ? var_13 : var_15)))))));
    var_24 = var_0;
    #pragma endscop
}
