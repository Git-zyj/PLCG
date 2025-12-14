/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(((-12 ? 31157 : -4232002050201608228)), var_12)) - 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((31157 ? -31157 : -31156));
                var_15 = 31157;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] = (arr_9 [i_0] [i_3]);
                            var_16 = (min(var_16, ((((arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1]) * ((-31144 ? (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 1]) : -31135)))))));
                        }
                    }
                }
                arr_11 [i_0] [i_0 + 2] = (((((((31157 ? 22516 : 31144))))) >= (((((var_6 ? 31152 : 2170738334281287839))) ? (((arr_3 [i_0 - 1]) ? var_6 : var_9)) : (((var_10 - (arr_3 [i_0]))))))));
                var_17 = (max(var_17, (((((((arr_1 [i_0] [i_1]) % ((max(-31144, -23802)))))) ? (arr_1 [i_1] [1]) : (!var_2))))));
            }
        }
    }
    #pragma endscop
}
