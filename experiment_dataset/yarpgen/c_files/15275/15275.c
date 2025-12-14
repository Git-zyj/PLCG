/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = 576459652791795712;
                arr_5 [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_13 = (min(var_13, ((~((1441648530394482205 + (((max(var_10, 65535))))))))));
    #pragma endscop
}
