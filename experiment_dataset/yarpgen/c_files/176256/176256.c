/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_10 = (max((max((arr_2 [i_1] [i_0]), ((~(arr_2 [i_0 - 1] [i_1]))))), (arr_2 [i_0] [i_0])));
                var_11 = 3;
                var_12 = (((((var_6 ^ (arr_2 [i_0 + 1] [i_0 - 1])))) == (~-11627438559671250967)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_13 = ((!((min(65463, (arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1]))))));
                                var_14 = ((+(((!((min((arr_4 [i_4]), (arr_6 [i_4] [i_4])))))))));
                            }
                        }
                    }
                }
                arr_17 [i_2] [i_3] = (~18184171323573902691);
            }
        }
    }
    #pragma endscop
}
