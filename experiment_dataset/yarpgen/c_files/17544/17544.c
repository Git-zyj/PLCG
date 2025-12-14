/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 -= 5323589306650957209;
                arr_4 [1] [1] = (min(-30050, var_7));
                var_21 ^= (min((min(var_15, 2147352576)), (arr_3 [8] [8])));
            }
        }
    }
    var_22 = var_19;
    #pragma endscop
}
