/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = (i_0 % 2 == zero) ? (((((((~(arr_0 [i_0]))) + 9223372036854775807)) >> (arr_1 [i_0] [i_0])))) : (((((((((~(arr_0 [i_0]))) - 9223372036854775807)) + 9223372036854775807)) >> (arr_1 [i_0] [i_0]))));
            arr_4 [i_1] [i_0] [i_0] = (max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_0])));
            var_13 = (~17592118935552);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_14 = ((((((arr_7 [i_0] [i_2] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_2] [i_0])))) ? ((((max((arr_0 [i_0]), (arr_1 [3] [i_2])))) ? (max(250, (arr_0 [i_0]))) : (((max(31744, 31744)))))) : (arr_8 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                        var_15 &= ((((arr_8 [i_4 + 1] [i_0] [i_3] [i_4 - 1]) | 1)));
                        var_16 += (arr_11 [i_4 - 1] [i_2] [i_0] [1] [i_2] [i_3]);
                        var_17 += (min(((-31745 ? (arr_6 [i_4 - 1]) : 31823)), (((!(arr_6 [i_4 - 2]))))));
                    }
                }
            }
            arr_12 [i_0] = ((+(((arr_5 [i_0] [i_0]) ? var_8 : ((min(242, (arr_8 [7] [i_2] [i_0] [i_0]))))))));
        }
        var_18 = var_9;
        arr_13 [i_0] = var_8;
        arr_14 [i_0] = (max((arr_9 [i_0] [i_0] [i_0] [i_0]), ((((max(-31757, 10))) ? (arr_3 [i_0] [i_0] [i_0]) : 65522))));
    }
    var_19 = var_2;
    var_20 = (max(var_20, 1951010098));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_21 = ((~(arr_18 [i_5])));
                arr_22 [i_6] [i_5] = (((((~((~(arr_15 [i_5])))))) ? ((min((arr_17 [3] [3]), var_5))) : (max(((183 ? 6 : (arr_16 [i_5]))), (min(var_11, var_0))))));
                arr_23 [i_5] = (((((((arr_20 [i_6] [i_6] [i_6]) ? -31744 : var_4))) ? 0 : (((arr_16 [i_6]) >> (((arr_18 [14]) - 88)))))));
                var_22 -= 1;
            }
        }
    }
    #pragma endscop
}
