/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (max(var_13, var_4));
    var_14 = 3112300753;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((((!((min(var_7, (arr_0 [i_1]))))))) + ((-(var_10 >= 8896)))));
                var_16 = (((max(1182666542, (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) <= ((-78 / (arr_3 [i_0 + 1] [i_0 + 1] [i_0])))));
                var_17 ^= (max((var_9 & var_10), ((-96 ? 10453672550738061222 : (arr_1 [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] = 3475045246930813160;
                            var_18 *= (((-(arr_1 [i_3]))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_2 ? (max(((var_1 ? var_11 : var_1)), -120)) : ((var_5 ? ((var_8 ? 0 : 63)) : -63))));
    #pragma endscop
}
