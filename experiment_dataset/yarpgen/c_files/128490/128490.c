/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 398933544;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((((((arr_7 [i_2] [i_2 - 3] [i_2] [i_2 + 3]) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? 398933544 : (arr_4 [i_0] [i_1] [i_2 + 3])))))) ? (((+(((arr_5 [i_2]) ? var_8 : 7))))) : (((arr_5 [i_1]) ? (((arr_1 [i_1]) ? 24714 : (arr_8 [i_2 + 3] [i_1] [i_1] [10]))) : ((((arr_4 [i_0] [i_0 - 1] [i_0]) ? -2138917767 : (arr_3 [i_1] [19]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_0]);
                                var_15 = ((((((min((arr_6 [i_0]), (arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_4 [i_3 - 1] [i_2] [i_0])))) ? (((((arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 4] [16] [1] [i_4] [i_4]) > (arr_15 [i_0 - 1] [i_1] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 3] [i_2]))))) : ((~(max(var_5, (arr_8 [12] [i_2] [i_1] [i_0]))))));
                                arr_16 [i_4] [i_1] [5] [i_2 + 3] [i_0] [i_1] [i_0] = ((-((((-24706 ? 1 : (arr_14 [i_0 - 1] [i_1] [i_1] [i_2] [i_2 + 4] [i_3] [i_4]))) * ((var_1 ? (arr_3 [i_0] [i_4]) : (arr_7 [i_0 - 1] [1] [1] [i_4])))))));
                                var_16 = ((+((max((arr_5 [i_0 - 1]), (arr_5 [i_2 + 4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
