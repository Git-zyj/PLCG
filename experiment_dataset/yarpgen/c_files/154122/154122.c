/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (arr_6 [i_2] [i_2 + 1] [i_1] [i_0]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [12] [i_1] = (!(-1659775545 % var_7));
                        var_13 = 0;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_14 &= var_8;
                            var_15 = (max(var_15, (((var_7 << (4294967288 - 4294967261))))));
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = (((+(((arr_10 [i_0] [i_1] [i_2] [1] [i_2]) ? 239 : 4294967295)))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = var_12;
                        arr_19 [i_0] [i_2] [i_0] [i_2] [i_5] = var_9;
                    }
                    var_16 |= ((((max((((var_9 ? -1120461346 : var_9))), 5878233895411608207))) | (max(((11 ? var_6 : 5264689454546499561)), ((max((arr_1 [15] [15]), var_10)))))));
                }
            }
        }
    }
    var_17 = ((~(~var_9)));
    #pragma endscop
}
