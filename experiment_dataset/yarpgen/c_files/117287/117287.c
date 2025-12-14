/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -2017332945;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = -156;
                            var_12 *= (((max((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_2] [i_0 + 1] [i_2])))));
                            var_13 = (((((58237 & 17016475157061322377) | 1797802)) >= ((min(((~(arr_10 [i_0 + 2] [i_0] [i_2] [i_3 + 1]))), (-7 ^ 32))))));
                            var_14 = (max(var_14, (((((+(max((arr_10 [i_0 + 1] [i_1] [i_2] [i_3 - 1]), (arr_6 [i_1] [i_1] [i_1]))))) | ((((!(arr_3 [i_0 + 1] [i_0 + 1]))))))))));
                            arr_12 [i_0 + 2] [i_0 - 1] [i_0] [i_2] [i_3 + 3] = (((arr_1 [i_0 - 1]) ? (max((arr_4 [i_2] [i_0 + 1] [i_0]), 1)) : ((((41 >> (2147483635 - 2147483632)))))));
                        }
                    }
                }
                arr_13 [i_0 + 1] [i_0 + 2] [i_0] = (max(((1761515130 >> (63 - 57))), 2123680082));
                arr_14 [i_0 - 1] [i_1] [i_0] = (((arr_7 [i_0 + 1]) * (((((18013800031332472865 >= (arr_5 [i_0 - 1] [i_0 + 2] [i_1]))) && (arr_11 [i_1] [i_1] [i_1] [i_0 + 1]))))));
                var_15 += (((((arr_2 [i_1]) << (((arr_5 [i_1] [i_1] [i_0 + 1]) + 13286)))) == (max(366518257, (((-(arr_4 [i_0 - 1] [i_1] [i_1]))))))));
                var_16 &= ((!((max((((arr_1 [i_0 + 1]) & 184)), (arr_6 [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_17 = (((min(1, var_1)) * ((var_8 ? ((min(31096, -32760))) : (!var_9)))));
    #pragma endscop
}
