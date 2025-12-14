/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (arr_2 [i_0]);
                            var_15 = (((arr_6 [12] [i_1] [i_2] [i_0]) | 629254664));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = 1;
                var_16 = (min(var_16, (arr_3 [i_1] [i_0] [i_0])));
                arr_11 [i_0] [i_0] = 1023;
            }
        }
    }
    var_17 &= ((108086391056891904 ? 38 : 27159));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_20 [i_5] [i_5] [i_5] = var_1;
                    arr_21 [i_5] = (min(-var_3, var_6));
                    var_18 = ((-(min((arr_13 [i_4 + 1] [0]), ((min(1, 176)))))));
                    var_19 = (arr_14 [i_6]);
                    var_20 = (1493482871 | 115);
                }
            }
        }
    }
    var_21 = 11803663638154242580;
    var_22 = var_5;
    #pragma endscop
}
