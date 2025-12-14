/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 -= 0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_3] [10] [i_2] [i_1] [i_3] = (3 + 1);
                        var_17 *= var_2;
                        var_18 = (arr_7 [i_0] [i_1 - 1] [4] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = 18815;
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_4] = 32767;
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 += arr_11 [17] [i_1] [i_2] [i_5] [i_5];
                            arr_19 [i_6] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(((!(arr_15 [i_5] [i_5] [i_5] [i_5 + 1]))))));
                        }
                        var_21 ^= var_2;
                    }
                }
            }
        }
    }
    var_22 = (max(-28564, var_9));
    #pragma endscop
}
