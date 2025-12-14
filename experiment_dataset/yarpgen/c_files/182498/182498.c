/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] = (((((49152 ? 1 : 1822934364))) ? (min(var_5, 1)) : (max(((-(arr_10 [i_0 - 2] [i_1] [i_2 - 1] [i_3] [1]))), (arr_3 [i_0 + 4] [i_1])))));
                                arr_15 [i_3] [i_3] [i_3] = (((((arr_10 [i_4] [i_3] [i_2] [i_1 + 1] [i_0]) + 2147483647)) >> (((!(arr_13 [i_2 - 1] [i_0 - 1]))))));
                                arr_16 [i_0] [i_3] [i_2] [10] [i_4] = ((((1 ? (arr_5 [i_4 - 3] [i_3] [i_1]) : (((arr_9 [i_2] [i_2] [11] [i_2] [i_3] [i_2]) | var_7)))) + ((((((var_5 - (arr_0 [i_1] [i_3])))) ? (arr_1 [i_1 - 1]) : ((27723 ? 1 : (arr_10 [i_4 - 1] [13] [12] [1] [i_0 - 3]))))))));
                                var_16 = (min((arr_2 [i_2 - 2] [i_1 + 1]), ((((arr_6 [i_2 + 1]) > 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (63050394783186944 / 51961);
                                var_18 = (min((arr_2 [1] [i_5]), (2395429946984674103 % 53555)));
                                var_19 -= (min((((arr_19 [i_6] [i_5] [i_2] [i_1] [1] [i_0]) ^ var_9)), (250 ^ 153)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 *= (max(var_0, var_2));
    var_21 = ((((((16755 >= var_3) && ((max((-9223372036854775807 - 1), 18383693678926364672)))))) << (var_2 - 62)));
    #pragma endscop
}
