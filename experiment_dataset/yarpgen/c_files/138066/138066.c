/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 ^= 12;
                var_14 = ((-(min(65535, ((62 ? 31525197391593472 : -30))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((arr_4 [i_1]) ? (~75) : (arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 2]))))));
                    arr_8 [i_1] [i_1 + 1] [i_2] = (arr_2 [i_2] [i_1 - 1]);
                }
                var_16 = (max(var_16, var_6));
            }
        }
    }
    var_17 = (((((~(!var_12)))) ? -85 : 1));
    #pragma endscop
}
