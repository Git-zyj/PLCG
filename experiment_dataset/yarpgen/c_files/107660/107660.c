/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -1104335812;
    var_20 = ((var_17 >> (var_9 + 29952)));
    var_21 &= (var_1 > 6266809253194183369);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((((((~(arr_3 [i_0]))) << (((-1883301848 >= (arr_1 [i_0] [i_1])))))) * ((max((((arr_2 [i_0 + 1] [i_1 + 2]) | 72)), (-127 - 1)))))))));
                arr_4 [i_1] [i_1] [i_1] = (((min((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_1 + 2] [i_0 - 1]))) & (~-1883301848)));
            }
        }
    }
    #pragma endscop
}
