/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((~(arr_2 [i_0] [i_1])))) : (arr_11 [i_0] [i_1] [i_4] [i_1] [i_4] [i_1 + 3])))) ? var_1 : var_0));
                                var_14 = (((((arr_8 [i_0] [i_1] [i_2] [i_1 + 3]) ^ (arr_8 [i_4] [i_1] [i_2] [i_1 + 2]))) & (max(var_9, (arr_8 [i_0] [i_0] [i_0] [i_1 + 1])))));
                                var_15 = (min(var_15, ((((((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((var_2 || (arr_3 [19] [i_3])))) : ((-13327 ? -13314 : 126)))) != ((~(max((arr_7 [i_0] [i_0] [i_3] [i_3]), var_7)))))))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_0] [i_0] [i_0] &= (arr_8 [i_0] [i_0] [i_2] [i_1]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_16 = (max(var_16, (arr_4 [1])));
        arr_15 [i_5] [i_5] = ((-3915 ? 17115584257758546828 : 83));
        var_17 = ((((((arr_6 [i_5] [i_5] [i_5]) ? (arr_1 [i_5] [i_5]) : (arr_5 [i_5] [8] [i_5])))) ? ((((((arr_3 [i_5] [i_5]) ? (arr_2 [i_5] [i_5]) : (arr_1 [i_5] [i_5]))) | (arr_7 [i_5] [i_5] [17] [i_5])))) : ((((60625 ? 407552215 : 2390014176)) * -78))));
    }
    var_18 = var_2;
    #pragma endscop
}
