/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [13] = (~17197536377121639806);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_3] = ((~(arr_12 [i_1])));
                            arr_14 [16] [i_1] [i_2 + 1] [i_1] [i_0] [i_1] = (((16925872941459820096 || -6841317441830961718) | (((min(4514494442153204559, var_7)) & (arr_2 [i_1] [i_1])))));
                        }
                    }
                }
                var_12 += var_3;
                arr_15 [i_0] = arr_8 [i_0] [i_1] [11] [i_1];
                arr_16 [i_0] = ((max(var_6, (arr_4 [i_0] [14] [i_0]))) <= var_6);
            }
        }
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = 17197536377121639806;
        arr_20 [i_4 + 1] [i_4] = (((min((((arr_5 [i_4] [i_4] [i_4]) ? (arr_3 [i_4 + 1] [i_4] [i_4]) : var_0)), (min(17197536377121639783, var_3))))) ? ((((!((((arr_2 [i_4] [i_4]) ? 0 : (arr_8 [i_4 + 2] [i_4] [i_4] [i_4])))))))) : (arr_3 [i_4] [i_4] [i_4]));
        var_13 = (min(var_13, ((((arr_8 [i_4] [i_4] [i_4] [i_4]) <= (arr_8 [i_4 + 1] [i_4] [i_4] [i_4]))))));
    }
    var_14 = (max(var_14, ((min(var_8, var_10)))));
    #pragma endscop
}
