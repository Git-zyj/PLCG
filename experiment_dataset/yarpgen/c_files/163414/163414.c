/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) > -var_14));
        arr_3 [i_0] = ((~(((arr_0 [i_0]) / ((-(arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = ((-(!1048560)));
        var_17 |= ((-(arr_5 [i_1] [i_1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_3] [16] = (arr_8 [8] [i_3]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4 - 3] [i_4 - 3] [i_6 + 1] [13] |= (arr_20 [i_4 - 2] [i_3] [i_4 - 2] [11] [i_6] [i_5 + 3]);
                                var_18 *= ((~((min((arr_8 [i_3 + 1] [i_5 + 3]), (arr_8 [i_3 + 1] [i_5 - 1]))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((((max(var_9, -1536709158))) ? ((2047 ? 253 : -2069570420)) : (!var_4))) * (arr_5 [3] [i_2])))));
                }
            }
        }
    }
    var_20 = (max(var_20, var_13));
    #pragma endscop
}
