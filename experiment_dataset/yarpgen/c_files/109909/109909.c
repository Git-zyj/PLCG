/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (max(1733639074, ((max(54109, 17905)))));
                var_15 = (max(var_15, ((min((max((arr_5 [i_1 - 1] [i_1 - 1]), (max((arr_5 [i_0] [i_1]), var_1)))), var_12)))));
            }
        }
    }
    var_16 = -1763888598996819718;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, (((((((((arr_9 [i_2] [i_3] [i_4]) ? (arr_7 [i_4]) : (arr_15 [i_3] [i_3] [i_3] [i_3]))) / (arr_5 [i_3 - 1] [i_3 + 2])))) ? ((-(min(1733639074, 54109)))) : (min((54110 <= -1733639075), var_2)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((var_14 + 2147483647) << (((var_14 + 1776034709) - 5))))) > (min((arr_21 [i_3] [i_3 + 2] [i_4] [i_5] [i_6]), 124)))))));
                                var_19 = (((((!(arr_5 [i_2] [i_2]))))) & ((((~var_1) == ((max(var_8, var_12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, 0));
    #pragma endscop
}
