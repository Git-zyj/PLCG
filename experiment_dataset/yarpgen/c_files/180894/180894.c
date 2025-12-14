/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((-(var_0 + var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = min(((((arr_2 [i_2 - 1]) ^ var_5))), (((((arr_5 [i_0] [10] [5]) % (arr_3 [i_0] [i_0]))) | var_7)));
                    arr_8 [i_0] |= (max((((arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2]) | 3422823936294559054)), ((((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]) || (arr_6 [i_2 + 1] [i_2] [i_2 - 2]))))));
                    arr_9 [0] [i_1] [i_0] = (((((min(3422823936294559054, -3422823936294559075)))) ? ((((((var_0 ? 24576 : (arr_1 [i_1])))) ? ((51403 ? var_0 : var_4)) : 24552))) : var_9));
                    var_12 = ((17 ? var_0 : (arr_0 [i_0])));
                    arr_10 [i_0] = ((var_9 ? 3422823936294559054 : (((arr_4 [i_2 - 1] [i_2 - 1] [5]) ? 3709502936 : (arr_6 [i_2 - 1] [i_2] [i_2 - 2])))));
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_13 = (min(var_13, ((((((var_1 ? (arr_11 [i_1]) : (arr_11 [i_0])))) ? (max((((var_6 < (arr_11 [i_0])))), ((var_0 / (arr_1 [i_3]))))) : (((((-(arr_11 [i_0]))) & var_8))))))));
                    var_14 = 3726844456417233213;
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_1] &= (min(((((arr_14 [i_0]) % (arr_14 [i_0])))), (arr_6 [i_0] [i_1] [9])));
                    arr_19 [i_4] [i_0] [i_0] = (min((min((arr_3 [i_0] [i_0]), 24568)), var_0));
                    arr_20 [i_0] [i_1] = ((~(arr_16 [i_0] [i_0] [i_4])));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_15 = (((arr_16 [i_0] [i_0] [i_0]) || var_6));
                            var_16 = (arr_23 [i_0] [i_1] [i_6]);
                            var_17 = (min(var_17, 13986915881027834927));
                        }
                    }
                }
                var_18 = (((max(((((arr_12 [i_1] [i_1] [i_0]) ? var_0 : 40937))), (arr_0 [i_0])))) ? (arr_4 [i_1] [i_0] [i_0]) : 24590);
            }
        }
    }
    var_19 = 3726844456417233217;
    #pragma endscop
}
