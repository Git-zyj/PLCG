/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (179 ? (((~(arr_4 [i_1] [i_0])))) : (((((107 & (arr_2 [i_0])))) ? (((((arr_1 [i_0]) <= 127)))) : var_9)));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_15 = var_2;
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_0] = ((1984 ? 1984 : 67));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_12 [14] = var_10;
                    var_16 = (((((((3408546326 ? (arr_2 [i_3]) : 96))) && (arr_2 [i_0]))) ? ((~(725885236103150284 != var_7))) : (((-2070876958 < (arr_4 [i_0] [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 = ((((!(arr_1 [i_0])))));
                    var_18 = (((arr_7 [13] [i_1] [i_1]) ? (!35) : var_1));
                }
                arr_15 [i_0] [i_0] = 1;
                arr_16 [i_0] = ((~((99 ? 0 : -429))));
            }
        }
    }
    #pragma endscop
}
