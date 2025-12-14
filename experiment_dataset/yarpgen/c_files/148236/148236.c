/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(67108863, var_6)) * var_5))) ? (max(4227858432, 22682)) : ((((var_11 != ((var_2 ? 0 : var_5))))))));
    var_13 = (((((min(65535, var_6)) ? var_0 : (var_9 >= var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (1438492044 - 1438492044)));
                var_15 = (max(var_15, (((4227858433 ? 1438492051 : 159)))));
                arr_7 [i_1] = 22;
                arr_8 [i_1] [i_1] [5] = arr_5 [i_1] [i_0] [i_0];
            }
        }
    }
    #pragma endscop
}
