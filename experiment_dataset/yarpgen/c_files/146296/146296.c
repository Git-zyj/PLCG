/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = -64;
                                var_15 = ((((-(arr_6 [i_3] [i_3 - 1] [i_3 - 1] [i_3]))) % (arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3])));
                            }
                        }
                    }
                }
                var_16 = 1;
                var_17 = (arr_9 [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((-117 ? (arr_11 [i_7] [i_6] [i_7] [i_7]) : (arr_16 [i_7])))) / ((~(arr_12 [i_6] [i_6]))))))));
                    arr_19 [i_5] [i_6] [i_6] &= 3840;
                }
            }
        }
    }
    #pragma endscop
}
