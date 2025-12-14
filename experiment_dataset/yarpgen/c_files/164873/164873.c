/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(-3725978440697057411, var_10));
    var_18 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min(((((arr_11 [i_0] [i_1] [i_2] [i_3] [2]) && (arr_11 [i_0] [i_0] [5] [4] [i_0])))), (arr_0 [i_2])));
                                arr_12 [i_0] = (-(max(var_11, ((1279713819758536284 ? (arr_1 [i_4]) : 17167030253951015326)))));
                            }
                        }
                    }
                }
                var_20 -= (min(1279713819758536282, ((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [2]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_21 ^= (min(((((((var_8 ? var_8 : (arr_3 [i_1])))) == (min(17167030253951015331, var_10))))), (((((arr_11 [i_0] [i_1] [21] [21] [i_6]) >> var_12)) & (((((arr_8 [i_0] [i_0] [i_5 + 1] [i_6 - 2] [i_6 - 1] [5]) + 2147483647)) >> (var_4 - 4827443715959589678)))))));
                            arr_19 [i_1] [i_6] [i_5] [i_0] [i_0] [i_1] = (((!(arr_18 [i_0] [i_1] [7] [4]))) ? (((~(arr_1 [i_0])))) : (max(17167030253951015332, (arr_1 [i_5 - 1]))));
                        }
                    }
                }
                arr_20 [i_0] [i_0] = (i_0 % 2 == 0) ? ((((((min((((var_11 == (arr_0 [i_0])))), ((-(arr_5 [i_0] [i_0]))))) + 2147483647)) >> (((arr_4 [i_0] [5] [i_0]) - 2749052900))))) : ((((((min((((var_11 == (arr_0 [i_0])))), ((-(arr_5 [i_0] [i_0]))))) + 2147483647)) >> (((((arr_4 [i_0] [5] [i_0]) - 2749052900)) - 2880383992)))));
            }
        }
    }
    var_22 &= var_11;
    #pragma endscop
}
