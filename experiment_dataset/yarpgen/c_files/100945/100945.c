/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = ((!((max((1 / 81), 65535)))));
                    arr_9 [1] [i_2] [1] [1] = 65535;
                    var_18 = (~12654827717052204543);
                    arr_10 [i_0] [i_2] = 1;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_19 = 3091722024;
                        var_20 = (((0 ? 3617362255158996401 : (arr_11 [i_2] [i_3 - 1] [i_3 - 2] [i_3]))));
                        var_21 = 12654827717052204556;
                    }
                }
            }
        }
    }
    var_22 = 84;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_23 = (min(var_23, (((((((((-2932459250206404587 ? 102 : (arr_18 [1] [1]))) != (-32744 < 1))))) ^ (min(5791916356657347077, (!2138845336514095547))))))));
                var_24 = ((-(+-1)));
            }
        }
    }
    #pragma endscop
}
