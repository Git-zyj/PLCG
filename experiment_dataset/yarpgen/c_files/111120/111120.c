/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max((((var_0 > (~213)))), ((~(min(var_5, -5803638426384120524))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 &= ((~((213 * (arr_10 [i_4] [i_1] [i_4] [i_2 - 2] [i_4])))));
                                var_17 &= ((1 ^ (min(-5803638426384120524, (arr_3 [i_4 - 1] [i_4 + 1])))));
                                var_18 -= min(-var_7, ((-(arr_1 [i_0]))));
                            }
                        }
                    }
                    var_19 |= (((((+((var_12 << (((arr_12 [i_0]) - 5857986014044071208))))))) ^ (min((min(17400, 0)), (min(44442, (arr_12 [i_0])))))));
                    var_20 = (min(var_20, ((min((((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1]) | (min(var_4, var_11)))), ((min(var_6, (!240)))))))));
                    var_21 -= (max((max(-3382, (538921675 / -93))), -299924914));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 &= ((~(arr_10 [7] [i_2 - 3] [i_5] [i_5] [i_6 + 1])));
                                var_23 &= -1088345910;
                                var_24 |= var_9;
                                var_25 |= (max(((min((arr_13 [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_2] [i_6 - 2]), ((3382 ? (arr_9 [i_0] [i_2 + 2] [i_2 + 1] [i_5]) : -6297413630665208254))))), (max((arr_10 [1] [i_1] [i_2] [i_5] [i_6]), (arr_16 [i_0] [i_0] [i_2] [i_6] [2])))));
                                var_26 &= (arr_2 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, ((((min(((var_3 ? var_0 : -10138)), (max(-2117018868, var_1))))) & var_4))));
    #pragma endscop
}
