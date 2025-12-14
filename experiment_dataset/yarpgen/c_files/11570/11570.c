/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 ^= ((!(arr_0 [i_3])));
                            var_11 ^= arr_9 [4] [9] [17] [15] [1] [10];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_12 ^= (((arr_12 [11]) - ((var_6 ? (!0) : (min((arr_10 [2] [11]), (arr_12 [16])))))));
                                var_13 = (arr_7 [0] [i_0] [19]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_14 = (arr_3 [12]);
                            arr_25 [3] [12] [i_0] [19] [18] = (-55 + 1);
                            var_15 = var_2;
                        }
                    }
                }
            }
        }
    }
    var_16 -= 1605778605;
    #pragma endscop
}
