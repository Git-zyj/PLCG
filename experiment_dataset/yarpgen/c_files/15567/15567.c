/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min((arr_0 [i_0]), (((46975 * 0) ? (((2 ? 3558 : 242))) : (arr_0 [i_1])))));
                var_19 &= ((((min((arr_2 [i_1] [i_0]), (arr_2 [i_0] [i_1])))) ? ((((((arr_1 [i_0] [i_0]) ? var_12 : (arr_2 [i_0] [i_1]))) >> (((arr_2 [i_0] [i_1]) - 97))))) : ((((((arr_2 [i_1] [4]) ? (arr_0 [i_1]) : (arr_5 [i_0] [i_0])))) ? (arr_1 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_20 = (max((min(((12 ? var_10 : var_6)), var_0)), (min(((-1555548152405942648 ? 22883 : 4294967295)), ((min(var_0, var_0)))))));
    var_21 = ((var_8 ? ((((max(2652544702, 1555548152405942647))) ? var_10 : var_7)) : var_8));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_22 = (((arr_11 [i_3]) ? (arr_4 [i_2]) : 64026));
                    arr_13 [i_2] [i_3] [0] [0] = ((!var_12) | (((arr_11 [i_4]) ? 9223372036854775807 : (arr_11 [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, (min((min((((arr_9 [i_4] [i_2]) ? var_6 : 18446744073709551607)), ((((arr_2 [i_2] [i_2]) ? var_7 : (arr_6 [i_2 + 1] [i_4])))))), ((max(((max((arr_15 [i_2] [i_3 - 2]), var_17))), (((arr_3 [i_2] [i_2]) ? (arr_2 [i_5] [i_6]) : (arr_7 [i_4] [i_5]))))))))));
                                var_24 = (((((1 ? 31 : 7795539374957331117))) ? (((((arr_5 [i_2] [i_2 - 1]) >= -7795539374957331118)))) : -67));
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = (max(((((arr_17 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_2]) ? (arr_17 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_2]) : (arr_17 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_2])))), (arr_1 [i_4] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}
