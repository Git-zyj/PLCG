/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (((max(var_2, ((var_0 ? var_10 : 97)))) & (((-(var_8 >= var_2))))));
    var_16 = var_10;
    var_17 = -29646;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (~1);
                var_19 = ((var_7 ? -var_6 : 143));
                var_20 = (((((~(arr_3 [i_0 - 1])))) ? (((arr_3 [i_0 - 1]) | (arr_3 [i_0 + 1]))) : ((-(arr_3 [i_0 - 1])))));
                arr_7 [i_0] = (112 <= -172);
            }
        }
    }
    #pragma endscop
}
