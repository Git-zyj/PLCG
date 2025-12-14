/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (var_5 ? ((var_7 ? ((var_5 ? var_3 : var_0)) : ((min(65535, var_2))))) : 901954025);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (65532 && -9223372036854775798);
        arr_3 [i_0] = (((max((arr_0 [i_0]), (arr_0 [i_0])))) + ((max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_4 [3] = ((((!(((var_3 << (-2147483638 + 2147483638)))))) ? ((~(arr_1 [i_0]))) : 65527));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = max(((65523 ? (max((arr_6 [i_1]), 1)) : (((19045 ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1])))))), ((((((arr_6 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))) + (var_2 - var_9)))));
        arr_8 [i_1] = (((1 ^ 9223372036854775781) ? ((((((arr_5 [i_1] [i_1]) ? 24 : 9223372036854775797)) == ((max(var_7, (arr_6 [i_1]))))))) : ((((!65521) != 1217961788)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_16 = -1262853407;
                arr_15 [i_2] [i_2] = (((max((arr_11 [i_2 + 2]), (arr_11 [i_2 - 2])))) ? ((-(arr_11 [i_2 - 1]))) : (arr_11 [i_2 - 2]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_22 [i_2] [i_5] [i_2] [i_2] = (arr_12 [i_5]);
                            var_17 = ((65532 ? 12615931196521037479 : 65532));
                        }
                    }
                }
                var_18 -= ((~((-(!17963)))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
