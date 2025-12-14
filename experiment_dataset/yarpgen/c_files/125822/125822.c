/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = 7642470141091663425;
                var_18 &= ((!((((arr_1 [i_0] [10]) ^ ((((arr_0 [i_1]) ? var_14 : 268427264))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((var_13 ? (arr_1 [i_0] [i_4]) : (arr_7 [i_3] [i_4])));
                                var_20 += ((~(arr_8 [i_4 - 2] [i_0] [i_2] [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_19 [i_6] [17] = (arr_5 [i_5]);
                var_21 = (max(var_21, (((((max((arr_3 [i_5] [i_6]), (arr_3 [i_5] [i_6])))) ? ((var_9 ? (arr_7 [i_5] [14]) : (arr_7 [i_5] [i_5]))) : (((arr_7 [i_5] [i_6]) * (arr_3 [i_5] [i_6]))))))));
            }
        }
    }
    #pragma endscop
}
