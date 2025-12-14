/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 ^= (max(((9 * (((arr_0 [i_0] [i_0]) ? 255 : var_19)))), ((+(((arr_3 [18] [i_1]) % var_15))))));
                var_21 = (min(var_21, ((((((~(arr_0 [i_0] [i_1])))) || ((min(var_12, 255))))))));
            }
        }
    }
    var_22 ^= 1;
    #pragma endscop
}
