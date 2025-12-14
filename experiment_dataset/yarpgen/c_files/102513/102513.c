/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (18446744073709551610 != 16);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (max((((((arr_9 [i_0] [i_0]) < 250)) ? (arr_12 [0] [i_0] [i_2]) : (max(var_6, (arr_7 [i_1] [i_1] [i_4 + 1]))))), ((((arr_8 [i_0] [i_1]) == var_10)))));
                            }
                        }
                    }
                }
                var_14 &= ((((((~9223372036854775799) | (arr_7 [i_0] [i_0] [i_0])))) ? (((((239 ? (arr_9 [i_0] [i_1]) : (arr_9 [3] [3])))) ? (((max(384, 12980)))) : (arr_12 [i_1] [i_0] [i_0]))) : (min((arr_12 [i_0] [i_0] [i_1]), ((max((arr_8 [i_0] [i_1]), var_12)))))));
                arr_15 [i_1] [i_1] [12] = (((((!(~247)))) << (((!(~10))))));
            }
        }
    }
    var_15 = (~var_12);
    #pragma endscop
}
