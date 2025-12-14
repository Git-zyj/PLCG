/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((((var_14 << (var_13 + 16388))) <= (var_13 & var_15)))), ((~(min(var_8, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] = ((~((~(((arr_5 [i_0]) - (arr_12 [i_1] [i_3] [i_1] [i_3] [i_3])))))));
                                var_17 *= var_5;
                            }
                        }
                    }
                    var_18 = (max(var_18, ((min((2309086777 & 1985880518), (arr_13 [i_0] [i_2 - 1] [i_2 + 2] [i_1] [6]))))));
                }
            }
        }
    }
    #pragma endscop
}
