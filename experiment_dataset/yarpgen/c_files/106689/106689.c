/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (((arr_2 [i_0]) >> ((((var_1 ? 11628 : (arr_1 [i_0] [i_0]))) - 11599))));
        var_14 ^= (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : -8953387371755190277));
    }
    var_15 = (-11639 == 11628);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 = (arr_4 [i_3 - 2]);
                    var_17 = ((((max(4294967284, (arr_6 [i_3 - 2])))) || -34679));
                    var_18 = ((((((((var_7 % (arr_11 [i_1])))) ? (((arr_11 [i_2]) ? var_4 : var_2)) : ((var_8 ? var_4 : var_9))))) == (max((((arr_8 [i_1] [13]) ? var_1 : 11638)), (arr_8 [i_3 - 3] [i_3 - 2])))));
                    var_19 = (min((min((arr_8 [i_3 - 4] [i_3]), var_3)), (max(-11632, 1))));
                }
            }
        }
    }
    #pragma endscop
}
