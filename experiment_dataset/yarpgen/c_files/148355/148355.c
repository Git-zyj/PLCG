/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] |= (((arr_1 [i_0]) ? ((((((arr_1 [i_0]) ? var_8 : 1))) ? ((((arr_0 [i_0]) % (arr_2 [i_0])))) : 3606423400)) : var_10));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 = (((arr_11 [i_3] [i_1] [i_1] [i_2 + 2]) ? (arr_5 [i_1] [i_1]) : ((~(arr_5 [i_1] [i_1])))));
                    arr_14 [i_1] = (max(((688543878 ? (((2147483647 ? 179 : 3606423400))) : var_5)), (arr_9 [1] [i_2] [i_2])));
                    arr_15 [i_1] = (~((((arr_5 [i_1] [i_3]) == ((76 ? (arr_7 [10] [10] [10]) : (arr_11 [i_3] [i_1] [i_3] [i_1])))))));
                }
            }
        }
        arr_16 [i_1] = (((((((!(arr_9 [i_1] [i_1] [i_1]))) ? ((103 ? (arr_5 [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1]))) : (!179)))) - (((arr_7 [i_1] [i_1] [i_1]) ? (1 * 184) : (~2405296080)))));
    }
    for (int i_4 = 3; i_4 < 24;i_4 += 1)
    {
        arr_19 [i_4] = ((!((((988553007 ? 688543878 : (arr_17 [11])))))));
        arr_20 [i_4] = (max(((((max(var_5, (arr_18 [i_4] [i_4 - 3]))) < (((3606423418 | (arr_18 [16] [i_4]))))))), var_11));
    }
    var_15 *= var_1;
    var_16 = var_10;
    #pragma endscop
}
