/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_4 ? var_3 : (-9223372036854775807 - 1))) >= (((((((-2147483647 - 1) ? var_4 : 255))) ? ((var_5 ? var_9 : 53940)) : ((var_8 ? var_4 : var_2))))));
    var_11 = (min(var_11, ((var_6 ? var_3 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_12 &= ((((~(arr_1 [i_1 - 1] [1]))) < ((53940 ? ((83 ? var_7 : 53940)) : (min(var_9, (arr_0 [i_2])))))));
                    var_13 = (max((((arr_4 [i_2 + 1] [i_1 - 1]) == (((arr_8 [i_0] [i_2] [i_2 + 1]) ^ var_9)))), (((((arr_3 [1]) / var_2)) != 2147483647))));
                    var_14 = (min(var_14, ((max(var_9, ((var_9 ? var_2 : -268435456)))))));
                    arr_9 [i_2] [i_1] [i_2] = ((~(((((2147483647 ? (arr_2 [i_0]) : (arr_1 [i_0] [15])))) ? (((arr_4 [18] [18]) - var_1)) : (((arr_4 [i_0] [i_2]) ? 18530 : 2147483647))))));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_3] [i_0] = ((143 ? 57981 : -28031));
                    arr_13 [i_0] [i_3] [i_3 + 1] [i_0] = (((-18531 >= -18518) || ((max(((var_8 | (-2147483647 - 1))), 24651)))));
                }
                var_15 *= min((((var_1 || ((max(1, 18533)))))), (min((min((arr_11 [i_0] [i_1] [i_1 - 2]), (arr_4 [i_0] [i_1 + 1]))), ((var_1 ? var_5 : (arr_11 [i_0] [i_1 - 2] [16]))))));
                var_16 = var_7;
            }
        }
    }
    var_17 = ((186 ? -2049593612250923352 : var_7));
    var_18 = (min(((1 ? ((var_7 ? var_4 : 102)) : 1025794283)), ((var_8 ? var_3 : var_7))));
    #pragma endscop
}
