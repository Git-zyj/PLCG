/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((10187056270010339174 ? 1275847686 : 1275847686)));
    var_17 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (((-2675906248059465395 ? (arr_3 [i_2] [i_1 - 4] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_0]))));
                    var_19 = (min(var_19, (((3019119609 ? (arr_8 [i_1 + 2] [i_1 - 3] [i_2]) : ((min(37714, -5207580684609221320))))))));
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
