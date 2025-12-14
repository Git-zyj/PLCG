/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_9;
    var_11 *= ((-((~(~var_4)))));
    var_12 = ((var_7 / ((((min(var_5, -115))) ? 8191 : ((min(var_6, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = (min((!var_7), (max((1308708902679790112 < 1308708902679790101), (4077160063913252259 && 238)))));
                                arr_13 [i_0] [6] = (max(((1 ? 18446744073709551615 : 444618610)), (~444618610)));
                                var_13 = (max(255, ((min(((!(arr_8 [i_4] [i_2] [i_1] [6]))), ((!(arr_10 [i_0] [i_1] [i_2] [8]))))))));
                                var_14 = (((!1660452055) * ((1660452055 ? 20 : (arr_7 [i_4 + 2] [i_2] [i_2] [i_3])))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [i_2] = (arr_3 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
