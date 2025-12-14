/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max((arr_4 [i_0 - 1] [i_0 - 2] [i_0]), (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 3])));
                arr_7 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((((((arr_5 [i_0 + 1]) ^ (arr_5 [i_0 + 1])))) ? (arr_3 [i_0]) : (arr_6 [6]))))));
                            var_12 += ((((max(1023, 32767))) ? 8675 : 8063796181193885787));
                            arr_16 [i_0] |= ((((~(arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_2 - 1]))) < (arr_13 [i_0] [i_0 - 2] [i_0 - 1] [i_2 - 1])));
                        }
                    }
                }
                var_13 = (arr_8 [i_1] [i_0] [i_0]);
            }
        }
    }
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {
                var_15 -= (((arr_19 [i_5] [i_4]) ? (arr_17 [i_4]) : (((arr_19 [i_5 + 1] [i_5 - 1]) >> (var_1 - 3749774131)))));
                var_16 = var_5;
            }
        }
    }
    #pragma endscop
}
