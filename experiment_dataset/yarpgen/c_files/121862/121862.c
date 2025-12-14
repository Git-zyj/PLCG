/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max((max((arr_1 [i_0 - 1]), var_9)), (((arr_1 [i_0 - 1]) ? -319291027 : (arr_1 [i_0 - 1])))));
                var_18 = (((min((arr_3 [i_0]), (arr_3 [i_0]))) | (max((arr_3 [i_0]), (arr_3 [i_0])))));
                var_19 = ((-84600051 ? 7 : (min(3987647739096570020, var_0))));
                var_20 = (min(var_20, ((((!(arr_3 [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_3] = (((((arr_5 [i_2] [i_2 - 2]) >> (((arr_5 [i_2] [i_2 + 1]) - 8620372161042297929)))) + 2071194607154176244));
                var_21 = (max(var_21, (arr_10 [i_3] [i_2] [i_2])));
                var_22 -= ((+(((((arr_6 [i_2] [i_3] [i_3]) && 1040384)) ? 15730138706261102372 : (((min(var_9, -29703))))))));
                arr_13 [i_3] [i_2] [i_3] = (arr_0 [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_20 [9] [9] = (-32767 - 1);
                arr_21 [i_5] = ((31897 >= 0) ? (max((arr_18 [i_4] [i_5]), (((arr_9 [i_4] [i_5] [i_4]) ? (arr_3 [i_4]) : -124)))) : ((min(((min(-1867344605, 16826))), 0))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6] [i_5] [i_6] = -67100672;
                            var_23 ^= 548366874607137735;
                            arr_29 [i_6] [i_6] [i_5] [i_6] = 33638;
                        }
                    }
                }
            }
        }
    }
    var_24 = 94;
    #pragma endscop
}
