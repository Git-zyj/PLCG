/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (((max(65535, var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 += ((((((((~(arr_5 [i_0] [i_1] [i_0] [i_1])))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_2])))) ? ((((~var_9) ^ (arr_8 [i_0] [i_0] [i_2])))) : (max((arr_1 [i_2]), ((((arr_3 [i_2]) | (arr_8 [i_0] [i_1] [i_2]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((((max((arr_0 [i_0]), (arr_7 [i_0] [i_0] [3] [i_0])))) % 74));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_0] = ((+(((arr_12 [i_0] [i_3 + 1] [i_3 + 1] [i_3 - 1]) ? 0 : (arr_2 [i_3 - 1] [i_0])))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] = ((~((((arr_7 [i_0] [i_0] [i_3 + 1] [i_3 + 1]) || 1)))));
                                var_15 = (((((+(((arr_3 [i_0]) ? (arr_7 [i_0] [i_0] [i_2] [i_2]) : 6718))))) ? (arr_1 [i_0]) : (~1615654656)));
                                var_16 = (max(var_16, (((((arr_1 [i_2]) ? 192 : var_5)) + (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
                                var_17 = (min(var_17, ((max((!var_7), (-1 + 131820819183128964))))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_0] [i_0] [i_0] = (+((-1 ? (arr_4 [i_0] [i_1] [i_2]) : ((max(26542, (arr_5 [i_0] [i_0] [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
