/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 3529950158));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = -170272532;
                                arr_14 [i_2] = (1382755292449954453 != 75);
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_2] = var_4;
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_16 = ((~(!var_12)));
                                var_17 = (arr_24 [i_0] [i_1] [i_5 + 2] [i_1] [i_0]);
                            }
                        }
                    }
                    var_18 = (((arr_8 [i_5 + 2] [i_5] [i_5]) / (arr_8 [i_5 + 2] [i_1] [i_5 - 2])));
                }
                var_19 = var_11;
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
