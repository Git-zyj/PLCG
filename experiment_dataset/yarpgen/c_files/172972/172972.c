/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((13464539666939645332 || (~var_10)))) % var_9));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((var_2 && (((((((arr_0 [i_0] [i_0]) + var_8))) ? (((arr_0 [24] [24]) ^ (arr_1 [i_0]))) : (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_3] = (--123);
                        var_14 = ((var_4 ? ((((arr_9 [i_1] [i_2] [7] [7]) <= 250))) : (((arr_9 [i_1] [i_1] [24] [24]) ? (arr_5 [i_0] [i_3]) : 60831))));
                        var_15 = (min(var_15, ((((arr_6 [i_0] [10] [i_2]) ? (((arr_2 [i_3]) | (arr_4 [i_0] [i_2]))) : ((((max(5, 13))) ? (((arr_2 [i_2]) ^ 6638)) : ((max(8211, 5806934088084683384))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [0] [i_4] = -var_4;
                                var_16 = max((min(var_4, (arr_23 [i_6 + 1] [i_6 - 1] [4] [i_7] [i_4]))), ((~(arr_23 [i_6 + 1] [i_6 + 1] [i_7] [i_7] [i_4]))));
                                var_17 = ((((((4109239249 ? 3074399425201520272 : (arr_14 [i_4] [23])))) ? (arr_15 [i_4] [i_4] [i_5] [i_6]) : (!3074399425201520261))));
                                var_18 = (min(var_18, var_7));
                            }
                        }
                    }
                    arr_25 [i_4] [20] [14] = ((!(((arr_17 [i_4]) <= 452022454))));
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
