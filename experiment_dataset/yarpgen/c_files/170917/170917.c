/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (min((!var_1), (((((arr_4 [1] [i_1] [i_1]) ? var_10 : var_1)) % 7))));
                            arr_12 [i_3] [i_1] [i_3] [i_3 + 1] [i_3] = (max((-9223372036854775807 - 1), (((65519 ^ var_6) ? ((var_8 ? 1 : (arr_5 [i_1] [i_1]))) : (((min((arr_11 [i_1] [i_0] [i_1] [i_1]), -27003))))))));
                        }
                    }
                }
                arr_13 [i_1] [2] = (((((var_7 ? 2097151 : (max(0, (-9223372036854775807 - 1)))))) ? var_2 : 21));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_1] [0] = (min(((max(var_5, 178))), ((27 ? (arr_15 [i_0 + 1] [i_1] [i_4] [i_5]) : 0))));
                            var_13 = ((((arr_1 [i_5 + 1]) / var_7)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {

                            for (int i_8 = 1; i_8 < 11;i_8 += 1)
                            {
                                var_14 = (max(var_14, var_7));
                                var_15 = var_2;
                            }
                            var_16 = ((var_7 ? (((-9223372036854775807 - 1) ? (((max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (arr_22 [1]))))) : (28 + var_8))) : (((var_7 & 16350364856297637031) ? 0 : ((max(var_10, var_4)))))));
                            arr_31 [i_0] [i_1] [i_1] [i_7 + 1] [i_7 + 1] = ((-(min(((var_11 ? var_6 : 0)), var_3))));
                        }
                    }
                }
                var_17 -= (~((1 ? (!-682705427) : ((var_1 ? 240 : -109)))));
            }
        }
    }
    var_18 = ((((min(14751, -27003))) ? ((((var_11 ? var_9 : 32755)))) : (var_3 & 10531)));
    var_19 = ((-(var_0 - 184)));
    var_20 -= 1055;
    var_21 = var_3;
    #pragma endscop
}
