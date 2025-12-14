/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((0 ? 18 : -14)));
    var_13 = ((((max(var_11, -var_9))) ? 15 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 691643376;
                arr_5 [i_0] [i_1] &= (min((((((max(-10, -19))) - (3072 + -691643376)))), ((255 ? (var_6 == 1551427278025283776) : ((64 ? 0 : 0))))));
                arr_6 [i_0] [i_0] = ((((min(0, 1))) ? (((!(((1 ? 1551427278025283769 : var_7)))))) : ((-(arr_1 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
