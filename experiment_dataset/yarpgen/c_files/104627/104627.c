/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -2070100597777213397;
    var_13 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = (max(((((2070100597777213396 ? var_4 : var_10)) % (((-(arr_8 [i_2] [i_1] [i_1])))))), (((((var_7 / (arr_0 [i_1] [i_2]))) * var_9)))));
                                var_14 ^= (var_6 ^ var_0);
                                var_15 *= max(var_11, (((!(arr_5 [i_0] [i_1] [i_1] [i_3])))));
                                var_16 = ((1 ? 1 : 1));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = arr_1 [i_4 + 2];
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_2] = min((min((arr_10 [i_0]), ((var_5 ? var_11 : (arr_17 [i_0] [14] [i_0] [i_2] [i_0] [i_0]))))), (arr_3 [i_0] [i_5]));
                        arr_19 [i_2] [i_2] = ((max(6847066083074652304, -var_5)));
                        var_17 = (((arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]) > (arr_9 [i_5 + 2] [i_5 + 2] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_18 ^= 1464243961250694591;
                        var_19 = (max((((arr_7 [i_2] [i_1]) > (((~(arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])))))), 0));
                        var_20 = (min(2070100597777213397, 4308211848966870812));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [5] [i_7] [i_2] = var_7;
                        var_21 = ((((~(min((arr_16 [i_0] [i_0]), var_6)))) ^ (arr_8 [i_2] [i_2] [i_2])));
                        var_22 = (max(var_22, 11599677990634899301));
                    }
                    var_23 = (0 >= 1);
                }
            }
        }
    }
    #pragma endscop
}
