/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(((((-1 ? 127 : -2873693285902236514)) >= (((min(var_0, var_0)))))))));
                arr_7 [i_0] = ((~((~(805306368 ^ 1829196075)))));
                var_12 = 1829196084;
                arr_8 [8] [8] [i_0] = (min((-1829196076 % -1829196073), ((min(var_1, var_2)))));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
