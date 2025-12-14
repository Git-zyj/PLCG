/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_11 >= var_4);
    var_20 = (max(var_10, var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= (max((min((arr_3 [i_0]), (arr_1 [i_0] [i_0]))), (arr_3 [i_0])));
                    var_21 ^= (max(((var_6 | (arr_6 [i_0] [i_1] [i_2] [i_2]))), (((var_18 == (max((arr_0 [i_0] [i_2]), var_12)))))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_22 -= var_9;

                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_3] [i_4 - 3] = var_3;
                        var_23 = (max(var_23, (((!((var_16 <= ((2769 ? (arr_10 [i_0] [i_1] [i_1]) : var_3)))))))));
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_3] = ((~(+-4005848031)));
                }
                var_24 = (min(var_24, ((max((~var_0), (((arr_2 [i_1] [i_0] [i_0]) ? ((max(var_5, var_0))) : ((var_1 ? 201 : var_1)))))))));
                var_25 *= (arr_2 [i_0] [i_0] [i_1]);
                arr_15 [i_1] = ((max(var_9, var_10)));
                arr_16 [i_1] |= ((!(((!var_0) > (arr_8 [i_0] [i_1] [2] [i_1])))));
            }
        }
    }
    var_26 ^= var_16;
    #pragma endscop
}
