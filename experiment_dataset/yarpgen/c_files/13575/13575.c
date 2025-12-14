/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 *= var_16;
                    var_19 = var_7;
                    var_20 *= (~((4095 ? (arr_3 [i_0]) : (arr_7 [i_0] [14]))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((arr_3 [i_1]) ? (4294967295 != var_14) : (((var_17 >= (arr_0 [i_0])))))))));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((((((!(arr_5 [3]))) ? (arr_9 [i_1 - 1] [i_1] [13] [i_1 - 1]) : 4294967295))) ? 678687181 : 3319462830);
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, 4294967295));
                    var_23 *= var_17;
                }
                var_24 = (var_2 ? (((arr_13 [i_0] [i_0] [i_0] [i_0]) & (arr_8 [i_1] [i_1] [0] [i_1]))) : (((arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 1]) ? (!var_1) : (~1928088822))));
                arr_16 [i_0] [i_1] [i_1 - 1] = (((((var_12 ? 0 : 1011766300)) ? (max(0, (arr_13 [i_0] [i_0] [i_0] [i_0]))) : 4294967295)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_24 [10] [i_1] [i_1] [i_6] = ((((arr_3 [i_0]) ? -var_5 : (((arr_3 [i_1]) ? 1011766300 : var_2)))) ^ 3653238226);
                            var_25 = (max(((~(arr_8 [i_1] [i_1] [1] [i_6 + 1]))), (min(var_4, (arr_5 [i_6])))));
                            var_26 += ((((!(((arr_21 [i_6] [i_5] [i_5] [13] [0] [i_0]) || 4294967273)))) && (((((var_12 && (arr_13 [6] [6] [i_5] [i_6]))) ? (var_0 || 2945641581) : (var_13 || 4294967295))))));
                        }
                    }
                }
                var_27 = max(((var_11 ? (arr_19 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1] [i_1]))), var_3);
            }
        }
    }
    var_28 = -0;
    #pragma endscop
}
