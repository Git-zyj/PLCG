/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (min(((var_9 - (arr_2 [i_3 - 1]))), (min((arr_2 [i_3 + 1]), (arr_2 [i_3 - 1])))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_13 [i_0] [i_4] [7] [i_3 - 2] [i_0] [i_1] = -1;
                                var_12 = (arr_10 [10] [10] [10] [10]);
                                var_13 &= ((min((arr_5 [i_0] [i_3 + 1] [i_2] [i_2]), -4620)));
                                var_14 += ((min((arr_8 [i_3 - 2] [i_3 - 1] [4] [i_3 + 1]), 10)));
                            }
                            for (int i_5 = 3; i_5 < 9;i_5 += 1)
                            {
                                var_15 = ((((((min(var_6, 126))))) ^ (arr_2 [6])));
                                arr_16 [i_0] [3] = var_3;
                            }
                            for (int i_6 = 2; i_6 < 9;i_6 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_2] = min(121, (!137));
                                var_16 = 124;
                                arr_20 [10] = (min((4096 >= 2910536411), 130));
                            }
                            for (int i_7 = 4; i_7 < 8;i_7 += 1)
                            {
                                var_17 = (min(((((arr_21 [5] [i_2] [i_3 + 1]) ? 117 : var_8))), (-2535863536771692046 && 111)));
                                var_18 = min((((4189992341 < (min(49, 1151320392))))), var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
