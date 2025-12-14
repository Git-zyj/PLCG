/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((~(arr_0 [i_0])));
                var_16 = (8504159004781951374 ^ -34);
                var_17 = (max(var_17, ((min((min(8504159004781951374, var_0)), ((max(var_4, (((arr_2 [1]) ? (arr_3 [i_1 - 3] [i_1] [2]) : var_5))))))))));
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
