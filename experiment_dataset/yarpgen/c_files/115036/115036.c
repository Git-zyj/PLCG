/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((~((min(1, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 -= (((!var_7) ? (!0) : (max((((arr_10 [i_1]) ^ 1)), ((~(arr_9 [i_3] [i_2] [i_2] [i_1] [1] [1])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 *= ((~(arr_4 [i_2] [i_3])));
                            var_18 -= (((min(1, (arr_3 [i_0]))) ? (((min(1, 1)))) : (((min(0, 1))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0] [i_0] = (max(((((((arr_16 [i_0] [i_1] [i_0] [i_0] [i_5]) ? 1 : var_5))) ? ((((arr_10 [1]) != 1))) : ((-(arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))), ((0 ? ((max(1, 1))) : 0))));
                            var_19 -= max(((1 > (1 & 1))), 1);
                            var_20 = var_6;
                            var_21 = (arr_5 [i_0]);
                        }
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 += (min(((-((~(arr_3 [i_2]))))), (((max(0, 1))))));
                        var_23 = (((arr_18 [i_0]) | ((var_10 >> (arr_18 [i_2])))));
                        arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_6] = ((~((min((var_7 || 1), 1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
