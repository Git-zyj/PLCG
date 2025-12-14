/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, -1241983109476773386));
    var_16 = (max(var_5, -0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = ((((~-1241983109476773406) % (-3601 - 17005))));
                    arr_8 [i_1] &= ((max(1, ((3047624224 >> (-19179 + 19196))))));
                }
            }
        }
    }
    var_17 = ((-19177 ? (min(-var_4, (var_4 >= var_14))) : (min(19178, 1))));
    var_18 = ((var_4 ? -19177 : (((((var_0 ? var_3 : 1))) ? var_14 : var_14))));
    #pragma endscop
}
