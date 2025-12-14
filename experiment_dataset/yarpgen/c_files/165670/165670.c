/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((0 * 12270996169117283630), -6424848012022882335)) / var_3));
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 |= (arr_6 [i_0] [i_1] [11] [i_3]);
                        var_20 = (((((var_14 ? var_7 : (arr_1 [i_1 + 1])))) ? (arr_10 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [1]) : (((~1) ^ 118))));
                        var_21 = (arr_8 [i_0] [i_1 - 1] [i_2] [i_3]);

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_22 = max(0, ((((var_8 ? (arr_0 [0]) : var_1)))));
                            var_23 = ((max(0, 2637832892022781855)));
                        }
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            var_24 = ((0 <= (((!62) * ((var_6 ? var_6 : 0))))));
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5 - 2] = (((((-804768739 ? ((-970938337 ? 6424848012022882335 : -1072084833)) : (((var_16 % (arr_11 [i_5 + 1] [i_0]))))))) ? (((((var_9 ? 28009 : (arr_11 [i_1 - 1] [i_2])))) ? (arr_5 [i_5 - 2]) : 188913981)) : -28457));
                            var_25 = (((((~var_7) ? (((arr_5 [i_3]) << (-1099518399 + 1099518435))) : (1890620142 == 1881591218))) > (((max(1, 28457))))));
                            arr_19 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_0] = ((((max(var_6, (arr_16 [i_2] [i_0] [i_2] [i_2] [15] [i_2]))) >> (-1134940042 == var_3))));
                        }
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((((((10854805881119297089 && (arr_9 [i_0] [i_0] [i_0] [i_0]))) ? var_3 : (min((arr_9 [i_0] [i_0] [1] [i_0]), var_4))))) || (arr_12 [0] [0] [1] [i_0]))))));
        arr_20 [i_0] = ((((!(arr_1 [i_0]))) ? (max((arr_6 [i_0] [i_0] [i_0] [i_0]), ((~(arr_13 [i_0] [i_0] [1] [i_0] [i_0]))))) : ((((var_0 ? 254796648 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) + ((var_10 ? var_11 : (arr_4 [10] [i_0])))))));
        var_27 = ((((-1585 ? 103 : (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 1 : (arr_2 [i_0]))))) - (((((-1099518399 ? var_9 : var_16))) ? 1 : (arr_1 [i_0])))));
        arr_21 [i_0] = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((-(arr_8 [i_0] [i_0] [i_0] [i_0])))) : (min(-1890620142, ((min(var_15, var_11)))))));
    }
    #pragma endscop
}
