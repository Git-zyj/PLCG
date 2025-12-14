/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max((min(1278055986, -21623)), (17 == var_1))), ((((var_14 ? var_14 : 17)) / (~var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_1 - 1] [i_0] = (max(var_6, (arr_1 [i_0 - 1])));
                    var_16 = ((1 << ((max(1, 17)))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_17 = ((((((max(1, -18))) | ((max((arr_5 [i_1] [i_3] [i_4 + 2]), (arr_13 [i_0] [6] [i_0] [6] [i_4] [i_5] [i_5])))))) ^ ((max(17, 0)))));
                                var_18 = ((min(((max((arr_9 [i_0] [i_1] [i_0] [i_4 - 1] [i_1]), 21623))), (((arr_8 [i_0] [i_0] [8]) ? 1 : (arr_4 [i_0]))))));
                            }
                        }
                    }
                }
                var_19 = ((~(((-32767 - 1) ? (arr_7 [i_1 - 1] [i_0 - 1] [i_0 - 1]) : 1548161025331128789))));
            }
        }
    }
    #pragma endscop
}
