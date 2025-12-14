/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (((var_5 * (arr_1 [i_4]))));
                                arr_15 [i_3] [i_2] [i_4] [1] [3] = ((!(!var_16)));
                                var_20 = (((-1317155429 || ((-1317155436 > (arr_3 [9] [i_1]))))));
                                var_21 &= (((((var_11 < (arr_10 [i_0] [i_1] [9]))) ? var_3 : ((var_17 ? (arr_2 [i_3]) : var_13)))));
                            }
                        }
                    }
                    var_22 = (((((arr_9 [i_1]) + (arr_9 [i_1]))) ^ (((((arr_9 [16]) == (((((arr_8 [16] [16]) > (arr_14 [i_2] [i_1] [6] [i_0] [i_2])))))))))));
                    var_23 = (min(var_23, ((max(((~(((arr_11 [4] [i_0] [1] [19] [i_2] [6]) ? var_0 : (arr_7 [1] [6] [i_0]))))), (((((arr_4 [i_2] [i_0]) == var_9)))))))));
                }
                var_24 = (((arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]) ? (min(var_9, (arr_9 [i_0]))) : (((1317155447 ? 1317155436 : -103)))));
            }
        }
    }
    var_25 = (max((((((max(var_16, var_0))) ? var_11 : -var_9))), var_10));
    var_26 ^= var_13;
    #pragma endscop
}
