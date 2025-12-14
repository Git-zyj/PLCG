/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((max(9223372036854775807, -8481809801079141791)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_19 &= var_4;
            var_20 &= (arr_6 [2]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 |= ((-(max(8481809801079141779, (arr_5 [i_0])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0] = 9223372036854775807;
                            arr_20 [i_0] [i_0] [i_0] [i_3] [i_5] &= max((arr_0 [i_0]), (min((arr_18 [i_5 - 2] [i_5 - 2] [i_3] [i_3] [i_5]), (arr_18 [i_5 - 2] [i_5 - 2] [i_3] [i_3] [i_5 - 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
