/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9223372036854775807;
    var_21 |= var_19;
    var_22 -= (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_23 |= (max(9223372036854775807, -9223372036854775795));
                var_24 = arr_5 [i_1 + 1] [4] [i_0];
                arr_6 [i_0] = ((var_9 ? (((((var_11 << (arr_2 [i_0] [i_0] [i_0])))) ^ ((var_4 ? (arr_1 [11]) : (arr_5 [i_0] [i_0] [i_1]))))) : (!var_18)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_1] [i_2] |= var_4;
                    var_25 = (((32767 == var_3) ? (32767 / 489944423) : (((((-32750 ? (arr_3 [i_0] [i_1] [i_2]) : var_15))) ? (((arr_7 [i_0] [i_1]) ? -4198073651736793273 : (arr_0 [i_0]))) : (~var_7)))));
                    var_26 = var_9;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_0] = ((((((arr_7 [i_1 + 3] [i_1 + 1]) ? (arr_8 [i_1 + 3] [i_0]) : (arr_11 [i_1 + 3] [i_0] [i_1 + 1])))) ? ((var_13 ? (arr_8 [i_1 + 1] [i_0]) : var_3)) : (arr_0 [i_3])));
                    var_27 = ((var_7 ? (arr_7 [i_1] [i_0]) : (((((max((arr_8 [i_1 + 2] [i_0]), var_14))) ? (((arr_11 [i_0] [i_0] [i_3]) & (arr_5 [i_1] [i_0] [i_3]))) : ((-(arr_3 [i_3] [i_1] [i_0]))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_3] = (((var_17 ? (arr_11 [i_0] [i_0] [1]) : var_9)));
                }
                arr_15 [i_0] [i_0] = (((((((((arr_4 [i_0] [i_1]) & var_3))) ? (arr_10 [i_0] [1] [i_1] [i_1]) : (((var_9 ? var_6 : 489944427)))))) ? ((((~-9223372036854775796) ? ((var_19 ? var_10 : var_0)) : (112 ^ var_0)))) : (((arr_11 [i_0] [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : ((-106 ? var_9 : var_19))))));
            }
        }
    }
    var_28 = var_12;
    #pragma endscop
}
