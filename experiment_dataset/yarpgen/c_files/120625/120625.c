/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max(((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : var_0))))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [1]) - 2157584871)))))))));
        arr_3 [i_0] = ((~(2 >> 1)));
        var_17 -= (min(-11963431635657649879, ((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (var_4 && 1))))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = ((!(((10245142519450469340 ? 41 : 1)))));
        var_19 = var_1;
        arr_6 [i_1] = (((((~(((arr_4 [i_1]) ? (arr_0 [i_1] [i_1]) : 183))))) % (max(11, 8))));
        var_20 = (max(var_20, (((((((arr_1 [i_1]) ? (((5948950544410548013 && (arr_0 [14] [i_1])))) : ((min(0, 30973)))))) >= ((16383 ? (((max((arr_2 [4]), (arr_4 [i_1]))))) : ((~(arr_0 [i_1] [i_1]))))))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_3] [i_4 - 1] [11] = (+(((arr_10 [i_3] [i_4 + 1]) ? (arr_10 [i_2] [i_4 + 1]) : var_6)));
                    var_21 |= ((-((((min(var_1, -12189))) ? (arr_13 [i_3] [1]) : ((~(arr_4 [i_2])))))));
                    var_22 = (max(var_22, (min((((~9260649930626628721) * 4685)), (((~(max((arr_0 [i_4] [i_3]), (arr_8 [i_2] [i_2]))))))))));
                }
            }
        }
        var_23 = (!var_3);
        arr_16 [0] = var_11;
        arr_17 [i_2] [7] = ((((((arr_9 [i_2]) | ((~(arr_14 [i_2] [i_2])))))) ? (1 ^ 1) : (~0)));
        var_24 &= 0;
    }
    var_25 = (((max(var_9, var_0)) * var_9));
    #pragma endscop
}
