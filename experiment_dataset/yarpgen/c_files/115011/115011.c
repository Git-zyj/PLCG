/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_0;
        arr_3 [4] = ((var_8 >= (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_10 = (min(var_10, (((var_6 ? ((3270667993626263934 >> (var_7 - 86))) : (((((((arr_0 [4]) << (var_4 - 176)))) ? (max(45, -1885150710)) : (~var_4)))))))));
        var_11 = (((min((arr_0 [i_0]), 28811))) ? 32766 : ((((!(arr_0 [i_0]))))));
        var_12 = (((-32766 ? -53 : (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_13 = (min(var_13, ((min((((arr_13 [8] [i_4] [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1]) ^ (arr_13 [10] [i_1] [i_2 - 1] [i_3] [i_1] [i_2 - 1]))), 3270667993626263928)))));
                        var_14 ^= (((arr_14 [i_2 - 1] [i_2 - 1] [i_1] [i_3 + 1]) < var_7));
                    }
                }
            }
        }
        var_15 = arr_6 [i_1] [i_1] [i_1];
        arr_16 [i_1] [i_1] = (max((max((arr_10 [i_1] [i_1] [i_1] [i_1]), ((((arr_9 [i_1] [i_1] [i_1]) << (-1942636394629414107 + 1942636394629414114)))))), (!9223372036854775807)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_27 [i_1] [i_5] [i_6 + 3] [i_5] [i_6] [i_1] = (((((3270667993626263934 / 187) % ((((arr_24 [i_5] [i_5] [i_6] [9] [i_7]) ? -3311 : var_0))))) >= ((32760 ? var_8 : (max(-7684513569308462055, var_2))))));
                        var_16 = (min(var_16, ((min(((1 ? 1942636394629414118 : var_1)), (((arr_20 [i_6 + 1]) ? (arr_20 [i_6 + 1]) : 3270667993626263911)))))));
                        arr_28 [i_1] [i_5] |= ((((min(7840, ((((arr_21 [i_1] [i_1] [i_6] [i_1]) || 211)))))) | ((((arr_1 [i_1]) >= (((45 ? var_0 : (arr_9 [i_1] [i_5] [i_5])))))))));
                        arr_29 [1] [i_1] [i_1] [i_1] = ((((max(var_0, (~-3270667993626263935)))) ? (~-3270667993626263955) : ((3794262288082315657 / (-32767 - 1)))));
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
