/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = max(5772294452061769819, ((5070537021198177722 >> (((~4503599627368448) - 18442240474082183113)))));
                    var_17 *= (max(var_8, -10092));
                    var_18 ^= var_0;
                    var_19 = ((~((((((-(arr_1 [1])))) || (((-(arr_1 [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
