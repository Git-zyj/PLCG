/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = 50;
                arr_7 [i_1] [1] [i_1] = ((((((arr_5 [i_0] [i_1 - 1] [i_1]) % ((min(54, 150)))))) ? var_13 : (((!(~var_12))))));
            }
        }
    }
    var_14 = (min(var_14, ((min(50, 150)))));
    var_15 = 111;
    var_16 = 5635526531020255883;
    var_17 = (((((~((109 >> (105 - 84)))))) ? var_1 : var_4));
    #pragma endscop
}
