/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((1073783612 ? var_17 : var_7)), ((max(((var_8 ? var_15 : -27)), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((arr_0 [16] [i_1]) ? (~-2129769381) : (arr_0 [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min(((max((~var_1), ((max(var_14, var_14)))))), ((~((var_2 ? var_9 : (arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))))));
                                arr_15 [i_3] [i_3] [i_3 - 3] [i_3 - 1] [i_1] = -13;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_6] = ((((max(var_2, 1073783612))) != (((((arr_12 [i_1] [i_5 - 1] [i_5] [12]) >= 1073783612))))));
                            arr_21 [i_6] [i_1] [i_1] [i_0] = (min(((((min(5294394656564243814, (arr_16 [i_0])))) ? ((min(-40, 33))) : (arr_0 [i_1] [i_6 + 1]))), ((((arr_8 [i_0] [i_0] [i_0]) <= var_7)))));
                            var_21 = (arr_2 [i_1]);
                            arr_22 [i_0] [i_1] [i_6] = (!var_16);
                        }
                    }
                }
                var_22 = (max(var_22, (((-var_1 ? (((27 ? (max(var_2, 26)) : var_15))) : 1073783598)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] = ((-(arr_23 [i_8] [i_1] [i_1])));
                            arr_29 [i_0] [i_0] [i_0] [i_1] = (arr_24 [i_0] [6] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((((var_14 ? ((min(1, var_6))) : ((var_6 ? var_11 : var_4))))) ? (min(((40 ? var_3 : var_7)), (var_13 ^ var_12))) : var_1)))));
    var_24 = (min(var_24, ((min(1073783598, 1)))));
    var_25 *= ((!((min(36165, 134217727)))));
    #pragma endscop
}
