/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ^ ((((var_6 && var_2) >= var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((min(58549, (arr_1 [i_0]))))) ? (min(0, (arr_1 [i_1 - 1]))) : ((((((min(30, 125))) >= ((max(var_2, 1)))))))));
                arr_4 [i_1 - 1] [i_1] = 2047;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 += (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1]);
                                arr_12 [i_0] [i_1] = ((+(max((arr_1 [i_0]), (arr_3 [i_0])))));
                                arr_13 [i_4] [i_1] [2] [i_1] [i_0] = (max((arr_2 [i_1] [i_0] [i_2]), ((((((max(var_1, (-32767 - 1))))) >= 6713747429210503710)))));
                                var_19 = (max(var_19, 2855400122));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
