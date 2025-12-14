/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_1 - 1]);
                var_11 = (max(var_11, ((min(43, (~0))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_11 [i_2] [15] = ((!(60095 <= 1381138497)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_17 [i_6] [i_2] [14] [i_5] [i_3] [i_2] [i_2] = ((+((+((2911761889549873005 >> (((arr_13 [i_2] [i_3] [i_3] [i_5] [i_6 - 1] [i_5]) - 492114665))))))));
                                var_12 -= (((((((((arr_16 [i_2] [1] [i_2] [i_2] [i_2]) ? (arr_7 [i_3] [5] [i_5]) : (-32767 - 1)))) ? (arr_16 [i_2] [i_3] [0] [i_5] [i_6]) : 1))) ? 3719463829 : (arr_12 [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    var_13 = (max(var_13, 3127372272));
                    arr_18 [i_2] = (((((((arr_6 [i_4]) > 5448)))) > (arr_14 [i_2])));
                    var_14 = (min((((84 ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 1])))), (~2196488126)));
                }
            }
        }
    }
    #pragma endscop
}
