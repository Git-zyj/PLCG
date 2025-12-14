/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = ((((((!32760) * var_0))) && var_7));
                                var_12 ^= ((((max((arr_12 [i_0 + 1] [i_2 + 1] [i_0 + 1]), (arr_12 [i_0 - 2] [i_2 - 2] [i_2])))) != (!var_7)));
                                var_13 = (min((((!(((56463 - (arr_11 [i_4] [i_3] [i_1] [i_0 - 4]))))))), ((5260763661463229348 << (((arr_8 [i_2 - 2] [i_2] [i_2] [i_0] [i_0] [i_0]) - 8530))))));
                            }
                        }
                    }
                    var_14 = (((!((max((arr_6 [i_0] [i_1] [17]), (arr_12 [i_0 - 3] [i_1] [i_2 - 2])))))));
                    arr_13 [i_0] [i_1] [i_0] = ((min((124 % var_6), (arr_2 [i_0]))) ^ ((+(((arr_4 [i_0 + 1] [11] [1]) % (arr_0 [i_1]))))));
                }
            }
        }
    }
    var_15 = min((((var_0 & (var_4 <= var_2)))), var_8);
    #pragma endscop
}
