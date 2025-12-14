/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_11;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = 19430;
        arr_2 [i_0] [16] = (((1830711908 ? ((1830711908 ? 2147483647 : (arr_0 [i_0] [i_0]))) : (176871974 > 865935849))) << (((~var_4) - 13778390992620853582)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_9 [i_0 - 1] [i_0] [i_1] [i_2] [i_1] [1] = ((((-((min((arr_1 [i_0] [i_0]), (arr_8 [i_1])))))) - var_10));
                        var_18 = (((-var_4 ? ((var_14 ? 996016914 : var_8)) : -996016915)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
