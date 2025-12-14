/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= 105;
        arr_4 [i_0] [i_0] = ((210 ? (((max(32752, (arr_0 [i_0 + 1]))))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        var_19 = (max(var_19, var_3));
        var_20 = (((~-9016745179073015950) <= 198));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 = ((((max(var_4, (max(22348, 210))))) ? (((((arr_7 [i_2] [i_1]) != (((max(var_2, var_13)))))))) : (arr_7 [i_1] [i_1])));
            arr_12 [i_2] [i_1] = var_10;
            var_22 &= (((max(((~(arr_11 [i_1] [i_1] [i_1]))), ((max((arr_11 [i_2] [i_1] [i_1]), (arr_6 [i_1])))))) ^ ((max((arr_5 [i_1 - 2] [i_2]), (arr_5 [i_1 - 1] [i_1]))))));
            var_23 = var_10;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_24 = -var_17;
                        var_25 = ((!5533) ? var_0 : (arr_14 [i_1] [i_3] [i_4]));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_26 = (((arr_9 [i_4] [i_2]) | (arr_13 [i_1 + 1] [i_2] [i_2] [i_4])));
                            arr_19 [i_5] [i_2] [i_3] [i_4] [i_5] [i_5] [i_2] = arr_18 [i_1] [i_4] [i_3] [i_5] [i_5];
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_3] [i_2] [i_1] = (max((min((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]), 62)), (((var_3 ? var_6 : -32582)))));
                            var_27 -= max((((!(arr_8 [i_1 + 1])))), (arr_5 [i_1] [i_2]));
                        }
                    }
                }
            }
        }
        var_28 = ((-((var_7 ? 65535 : (arr_16 [i_1] [i_1] [i_1 - 1] [i_1])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    arr_29 [i_1] [i_7] [i_8] = arr_5 [i_1] [i_1];
                    var_29 |= ((11 ? 0 : -7944858828715883110));
                }
            }
        }
        var_30 = (max(((min((arr_5 [i_1 - 1] [i_1 - 2]), (arr_5 [i_1 - 1] [i_1 - 1])))), -8722708963458958165));
    }
    var_31 -= var_9;
    #pragma endscop
}
