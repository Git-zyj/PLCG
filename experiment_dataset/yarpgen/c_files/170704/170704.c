/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] = ((((max(1, 32704))) && (arr_5 [i_0] [i_1])));
                arr_7 [13] [i_0] = (max((((arr_2 [i_0]) ^ (arr_2 [i_0]))), (arr_0 [i_0] [i_1])));
                var_12 = (max(var_1, (((arr_1 [i_1]) | var_2))));
            }
        }
    }
    var_13 = ((2712691472 && (((-(min(3946924475048612028, 223)))))));
    var_14 = (((39744 / 9297847098978746225) ? var_3 : ((max(var_10, var_8)))));
    #pragma endscop
}
