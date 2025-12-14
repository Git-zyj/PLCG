/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_9, ((max(4294967295, 65532)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = (((((((min((arr_3 [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_1] [i_2])))) && ((min(-36, 13)))))) ^ (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))));
                    var_20 = ((((min(-7, (arr_1 [i_0] [i_0]))))) + ((65525 ? 95051170 : 4294967295)));
                    arr_7 [i_0] [15] [i_2] [i_2] = (min(((6 ? 4294967291 : 4)), ((((arr_1 [i_0] [i_2]) ? (arr_1 [i_2] [i_0]) : -7)))));
                }
            }
        }
    }
    var_21 = var_18;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 = -76;
                                arr_22 [i_5] [4] [i_7] = ((var_11 / (arr_11 [i_3] [i_4] [i_3])));
                            }
                        }
                    }
                    var_23 = (((arr_16 [i_4 - 1] [i_4 + 1]) & (arr_11 [i_3] [i_4 - 1] [i_5])));
                }
                arr_23 [i_3] [i_4 - 1] = (((~(arr_9 [i_4 + 1]))));
            }
        }
    }
    #pragma endscop
}
