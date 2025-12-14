/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 11162;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [12] = (((((4294967295 ? 11191 : 6))) && (((3280937303 << (-11184 + 11213))))));
                var_16 = (((((max(-11192, 140)))) ? (((((((arr_2 [15]) ? 30 : -3503816254015188472))) ? ((0 ? (arr_0 [i_0] [i_0]) : 4294967292)) : (((var_5 ? 116 : -120)))))) : 3503816254015188472));
                arr_5 [16] = (((arr_1 [i_1] [21]) >> (max(((2326 ? -2147483645 : (-9223372036854775807 - 1))), (2334 || 255)))));
            }
        }
    }
    var_17 = (max(var_17, (((3813604251 ? ((4 ? (min(var_13, -11187)) : var_0)) : (~var_12))))));
    #pragma endscop
}
