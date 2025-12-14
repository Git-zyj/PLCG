/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [1] [i_2] [5] [i_3] [16] = (0 < 15032385536);
                                arr_15 [i_0] [i_0] [i_1] [1] [i_2] [i_3] [i_4] &= (((arr_6 [i_1] [i_0] [i_1] [i_0]) ^ (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])));
                                var_16 = (min(var_16, ((((((arr_11 [i_0] [i_0] [i_4 + 1] [i_4 + 1] [2]) < var_14))) >> (((!(arr_11 [i_0] [1] [i_4 + 1] [12] [i_4]))))))));
                                var_17 = (((((((max(235, (arr_8 [i_0] [i_1] [i_2] [i_3])))) ? 18446744073709551603 : ((max((arr_3 [i_2] [i_2]), (-32767 - 1))))))) >= (min(var_8, (min(var_0, var_7))))));
                                arr_16 [i_2] = ((((16 - (max((arr_5 [i_3]), var_12)))) >= ((min((arr_11 [i_0] [i_0] [i_2] [i_4 + 1] [i_3]), 7575)))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] [i_2] = var_4;
                }
            }
        }
    }
    var_18 = (4294967295 % 120);
    #pragma endscop
}
