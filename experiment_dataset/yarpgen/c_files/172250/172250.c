/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((min(61, 32760))) ? var_0 : ((min((min(var_7, var_9)), ((min(var_9, 32760)))))))))));
    var_14 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0 + 1] [i_1] [i_0 + 1]);
                var_16 = (arr_2 [i_0] [i_1]);
                var_17 = 7305;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (arr_8 [i_0] [i_0] [22]);
                                var_19 = (min(var_19, ((((((((arr_12 [i_0 - 2] [i_4] [10] [i_0 - 1] [i_4]) == (arr_12 [i_1] [i_0] [i_2] [i_0 - 1] [12]))))) == (arr_12 [i_0] [i_0] [20] [i_0 - 2] [i_0]))))));
                                var_20 = (((var_3 == -357) ? var_12 : (~-var_12)));
                            }
                        }
                    }
                }
                var_21 ^= (arr_11 [i_0] [12] [i_0] [i_1] [0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
