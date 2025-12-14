/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = 54611;
                arr_6 [i_0] [i_0] = (!((((var_1 & (arr_1 [i_1]))) != ((~(arr_1 [4]))))));
                var_14 = ((((min(25901, 228))) ? (((((var_6 ? 99 : -94))) ? (~var_7) : 2047)) : ((((~var_5) | ((min(65532, var_10))))))));
            }
        }
    }
    var_15 = (((((min(var_8, var_6))) >> (var_0 - 14897373729726174613))));
    #pragma endscop
}
