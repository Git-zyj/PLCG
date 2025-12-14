/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [6] [1] = (arr_0 [i_0]);
        var_10 = (min((min(var_8, (var_3 | 21902))), (((((arr_0 [i_0]) ? 0 : (arr_1 [11])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_2] [i_1] = max(((((arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [1]) ^ (arr_15 [i_5 - 1] [0] [i_5] [i_5] [i_5])))), (min((arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [10] [i_5 - 1]), var_4)));
                                arr_20 [i_1] [i_2] [i_3] [i_3] [i_5] = (((26689 <= 0) / (-32752 ^ 0)));
                                arr_21 [i_1] [i_2] [i_2] [i_3] [i_4] [i_3] [i_5] = (((((var_3 ? 0 : -28942)))));
                                var_11 ^= var_7;
                            }
                        }
                    }
                    arr_22 [i_3] [i_2] [i_2] [i_3] = ((arr_9 [i_1] [i_1]) ? ((((((var_2 ? var_9 : 0))) && ((min(var_1, 9525)))))) : (arr_7 [i_1] [7]));
                }
            }
        }
        var_12 = (((((max(1, 32752))) ? (((var_5 >= (arr_9 [i_1] [i_1])))) : (((var_7 || (arr_7 [4] [i_1])))))));
        var_13 = (min((arr_13 [i_1] [i_1] [i_1] [6]), (min((-32752 == 26689), (((arr_10 [4] [i_1] [10] [i_1]) ? var_2 : (arr_3 [6])))))));
        arr_23 [i_1] [i_1] = ((-(arr_9 [i_1] [i_1])));
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        arr_28 [3] = var_7;
        var_14 = arr_27 [i_6];
    }
    var_15 = var_2;
    #pragma endscop
}
