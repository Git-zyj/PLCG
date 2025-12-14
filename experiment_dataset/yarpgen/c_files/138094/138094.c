/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_10 = (arr_0 [i_0] [1]);
                    var_11 = (max(var_11, (((((arr_6 [i_1 + 1] [4] [i_1 + 1] [4]) ^ var_9))))));
                    arr_8 [i_0] [i_0] = 1;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_12 = 4294967291;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 ^= ((min(16909112310248389242, -69)) / ((((((56881 ? 18446744073709551615 : var_7)) != (~var_6))))));
                                var_14 = var_6;
                            }
                        }
                    }
                    var_15 = 8355840;
                    var_16 = ((!(((69 & (arr_5 [i_0]))))));
                    var_17 = ((((min(((((arr_0 [i_0] [9]) & (arr_11 [i_0] [3])))), (arr_10 [i_1 + 2] [i_1 + 3])))) ? (arr_15 [i_1 + 2]) : var_0));
                }
                var_18 = ((((min(((-6658958141611786813 ? var_1 : 105)), (var_7 < var_9)))) + (min(var_5, (min(9223372036854775807, 26613))))));

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_19 = (((((arr_14 [i_0]) ? (arr_14 [i_0]) : var_8))) ? (arr_14 [i_0]) : (min(-6658958141611786813, 8)));
                    var_20 = 38923;
                    var_21 = (((((((((arr_2 [i_0] [i_0]) ? (arr_5 [i_6]) : var_2))) ? var_0 : var_0))) ? var_6 : ((((max(var_8, var_2)) < ((var_7 ? (arr_17 [i_0] [10] [i_0] [i_0]) : 1537631763461162374)))))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_21 [6] = (((((var_3 ? (arr_6 [i_1 + 1] [i_1 + 1] [i_1] [1]) : (arr_6 [i_1] [i_1 + 2] [i_1] [9])))) ? -116 : -12));
                    arr_22 [i_0] [i_0] = (((((((arr_15 [2]) ? 5 : var_2)))) ? ((((((arr_18 [4]) ? var_3 : 0))) ? ((~(-127 - 1))) : (~var_6))) : ((~(arr_2 [i_1 + 3] [1])))));
                }
            }
        }
    }
    var_22 *= var_4;
    var_23 = var_3;
    var_24 = (min(var_24, 5));
    #pragma endscop
}
