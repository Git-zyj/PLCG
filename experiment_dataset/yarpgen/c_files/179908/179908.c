/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = var_16;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_3] [2] [i_2] = var_8;
                            arr_15 [i_0] [1] [i_1] [i_2] [9] [12] [i_3] = (min(((~(min((arr_7 [1]), var_5)))), -599382480939247218));
                            var_17 ^= (((arr_0 [i_1]) ^ (arr_1 [i_0])));
                        }
                        arr_16 [1] [10] [i_2] [i_3] [i_3] = (((((-1905515879 ? (arr_7 [i_0]) : (arr_7 [i_0])))) ? ((((arr_11 [i_3] [i_3] [i_3] [i_3] [7] [6] [i_3]) * (arr_7 [14])))) : (min((15162545067538490313 >= var_8), 201663568))));
                    }
                    var_18 = ((((((min(73, 535822336))) ? (arr_13 [i_0] [i_1] [i_2]) : (arr_1 [i_1])))) ? 47799 : ((((max(9223372036854775807, 33145))) ^ var_16)));
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = var_15;
    var_21 += min(((var_1 ? 10962950834830318457 : 15077832682894451894)), (((var_15 ? (((var_13 ? var_6 : var_2))) : (99 / var_0)))));
    var_22 = (((((var_15 & (min(-7854337559906020863, var_1))))) ? (var_1 + var_9) : (max((var_7 & var_7), ((4326636733356970903 ? var_3 : -14278))))));
    #pragma endscop
}
