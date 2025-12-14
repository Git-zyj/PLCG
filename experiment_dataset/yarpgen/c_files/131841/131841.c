/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = (min((arr_2 [i_0]), (((13195893722820887974 + (arr_2 [i_0]))))));
                    var_18 ^= (arr_0 [i_1]);
                    arr_7 [i_1] [i_1] [i_0] = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(var_6, ((var_16 | (arr_5 [i_0] [i_1]))))))));
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = (min(1, ((-(arr_4 [i_2 + 1] [i_4 - 2] [i_1] [i_2 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = max((((var_12 == ((max(-3, -1)))))), (!var_10));
    #pragma endscop
}
