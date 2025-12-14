/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 &= (max(((((3661578953 >= (arr_0 [12]))) ? (!2468018662) : -3661578951)), (((2705 ? 633388342 : 2133215562)))));
                arr_6 [i_0] = var_0;
            }
        }
    }
    var_20 = var_5;
    var_21 ^= var_17;
    #pragma endscop
}
