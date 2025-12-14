/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((arr_3 [i_0 + 1]) < ((((arr_3 [i_0 + 1]) && (arr_3 [i_0 - 1]))))));
                var_21 = (min(var_21, ((max((max(((1 ? 2305843009213693951 : 4532260198112344089)), -var_8)), (((-(-9223372036854775807 - 1)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 = ((~(max(((2305843009213693970 % (arr_6 [i_2]))), (arr_7 [i_2 - 2] [i_2] [i_3 - 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3 + 1] [i_2] [i_5] [i_5] = ((~((max(var_17, (((!(arr_12 [i_2])))))))));
                                var_23 = (max(var_23, (arr_9 [i_4])));
                                var_24 = (max(var_24, ((min(((max((arr_4 [i_6 - 1] [i_4]), (arr_4 [i_6 - 1] [i_4])))), (min(((max(var_19, var_19))), var_0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
