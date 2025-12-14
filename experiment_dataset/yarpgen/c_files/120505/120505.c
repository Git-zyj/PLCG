/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (min(9079, var_7))));
                    var_16 = (arr_1 [1] [i_1]);
                    var_17 = (max(var_17, var_9));
                    var_18 = (max(((max(-85, 65535))), ((((max((arr_4 [i_0] [i_0] [i_1 + 2] [i_1 + 2]), 4294967289))) ? var_8 : (((((arr_2 [i_0] [i_0]) && 0))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_19 = min((max((arr_7 [i_3] [i_4 - 1]), (max(var_13, var_8)))), (max((max((arr_11 [i_3]), 7)), (arr_7 [i_3] [i_4 + 1]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = (1309 && 9223372036854775807);
                            var_21 = ((arr_14 [i_3] [i_4 - 1]) + (959829849 >= 772025858));
                            var_22 = (((arr_6 [i_5]) ? (((((-(arr_7 [i_6] [i_4]))) != (arr_10 [i_4 + 1] [i_4 - 1] [i_6 + 2])))) : (((!((max((arr_8 [i_3] [i_4 + 1]), (arr_7 [i_3] [i_3])))))))));
                        }
                    }
                }
                var_23 = (min(var_23, ((max(((max((arr_12 [i_3] [i_3] [i_3] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_3])))), ((-(arr_12 [i_4 + 1] [i_4] [i_4 - 1] [i_3]))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_24 = ((((max((arr_9 [i_4 + 1] [i_4 + 1] [i_7 - 1]), var_13))) ? (max((11195142910817859877 - 11195142910817859869), (arr_19 [i_7] [i_4 + 1] [i_7 + 2] [1]))) : (arr_14 [i_4 + 1] [i_4 - 1])));
                            var_25 = ((((~(max(var_12, var_0)))) / (arr_20 [10] [5])));
                            var_26 = ((((((((~(arr_15 [i_3] [i_4] [5])))) | 20))) ? (arr_9 [i_3] [i_3] [i_3]) : (((((~(arr_7 [i_7 + 3] [i_3]))) <= ((var_0 ? 126 : 45)))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_11;
    var_28 = (((max(((var_14 ? 1 : var_4)), 1488217896)) >= (((var_5 | (102 > var_8))))));
    var_29 = (~var_8);
    #pragma endscop
}
