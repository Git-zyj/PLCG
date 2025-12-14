/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 = (arr_0 [i_2]);
                                arr_12 [i_0] [11] [i_0] [i_0] [i_0] [i_0] [11] = (arr_6 [3] [3] [3]);
                                arr_13 [2] [i_1] [i_1] [7] [2] = (max(0, (arr_4 [i_0] [i_0] [9])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_5] [i_1] [i_0] = 1764040478;
                            arr_20 [i_0] [i_0] [0] [1] = (min(0, 4294967295));
                            var_11 = ((((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((496 ? (arr_3 [i_0]) : (arr_4 [i_0] [i_0] [i_0])))))) ? ((4325660475522947746 ? ((((!(arr_3 [0]))))) : 4325660475522947729)) : -4870412975800226658));
                        }
                    }
                }
                var_12 = (((((~(min(4870412975800226658, (-9223372036854775807 - 1)))))) ? -4870412975800226636 : -395358369432679578));
                var_13 -= (((arr_16 [i_0] [0] [1] [1]) ? (((arr_15 [i_0] [i_0] [i_0]) ? (arr_16 [9] [8] [i_0] [i_0]) : (arr_9 [0] [9] [i_0] [i_0] [i_0] [8]))) : (max((arr_4 [i_1] [i_1] [i_0]), (arr_18 [i_0] [i_0])))));
            }
        }
    }
    var_14 = (min(1, var_3));
    var_15 ^= var_7;
    #pragma endscop
}
