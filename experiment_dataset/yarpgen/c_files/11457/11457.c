/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 ? (((~((max(var_7, 1)))))) : (~var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 |= var_0;
                                var_12 = (((((1346293212044263079 | var_0) ? (((var_4 < (arr_5 [i_4 - 1] [i_2] [i_1])))) : 1)) % (arr_10 [i_0] [i_1] [i_2] [i_2])));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_1] [i_2] |= (!1);
                                arr_15 [i_0] [i_3] [i_0] [1] [i_0] [i_0] [1] = ((((((arr_13 [i_3] [i_1] [i_1] [i_3] [i_4 - 1] [i_4]) - (arr_13 [i_3] [i_3] [i_2] [i_2] [i_4 - 1] [i_3])))) ? (((!(arr_13 [i_3] [i_1] [i_2] [1] [i_4 - 1] [i_1])))) : ((max((arr_13 [i_3] [i_0] [i_4] [i_3] [i_4 - 1] [1]), (arr_13 [i_3] [i_1] [i_2] [i_3 - 1] [i_4 - 1] [i_2]))))));
                            }
                        }
                    }
                    var_13 = (min(((max(1, (arr_10 [i_0] [i_0] [i_1] [i_0])))), (1 | 1)));
                }
            }
        }
    }
    #pragma endscop
}
