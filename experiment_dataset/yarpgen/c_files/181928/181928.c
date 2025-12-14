/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 *= (arr_4 [22]);
                var_21 = ((((max((arr_5 [i_1 - 1] [i_1]), var_13)))) != (min(4723011258472689684, 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 = 1;
                            var_23 = (max((((min(var_7, var_14)))), (min(10009644634580568132, 55637))));
                            var_24 = 1;
                        }
                    }
                }
                var_25 = (max(var_25, (((-4457643032259895636 > (min(10479005967397310317, (arr_10 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
