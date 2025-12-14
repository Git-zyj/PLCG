/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? (min((var_4 != 7), var_10)) : ((max(32754, 41544)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = max((((!(arr_0 [i_0] [i_2])))), ((~(arr_5 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((var_10 ? 90 : ((-(arr_10 [19] [i_0 + 1] [i_4] [i_3 - 1] [i_1] [i_2])))));
                                var_14 = (((max((arr_5 [i_0 + 1]), var_7)) / (((arr_5 [i_0 + 1]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
                                var_15 = (max(var_15, var_5));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = 90;
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_16 = ((((165 ? 193 : 165)) < ((94 ? (var_8 || var_9) : (arr_2 [i_0] [i_1] [i_5])))));
                    var_17 = var_10;
                }
                var_18 &= (min(((((-1 + 2147483647) >> (var_11 + 307825854)))), ((var_4 ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (var_9 + -43)))));
            }
        }
    }
    var_19 = var_1;
    var_20 += -var_1;
    #pragma endscop
}
