/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_21 *= var_14;
                        arr_8 [i_0] [i_0] [i_0] [i_0] = (((((var_1 ? var_15 : var_9)) >= ((1 ? 1993270229 : 45922)))));
                        var_22 = ((0 ? -1141695361 : 1710755877));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((-(var_11 <= 14121244742467291471))))));
                        var_24 = ((!((((var_12 ? (arr_3 [i_0] [10] [i_2]) : var_7))))));
                        arr_11 [i_4 - 1] [i_1] [i_1] [i_1] = ((-(((!(((arr_4 [i_0] [i_0] [i_0]) <= var_15)))))));
                        arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [5] = ((-var_9 ? ((127 ^ ((-(arr_10 [i_0] [3] [3]))))) : (arr_2 [i_0] [i_0])));
                    }
                    for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                    {
                        var_25 *= var_15;
                        arr_15 [i_2] [i_1] [i_1] [i_1] = (min(((var_17 ? (((var_18 ? var_2 : var_19))) : ((var_4 ? var_4 : var_4)))), ((((var_5 ? var_16 : 2006164865))))));
                    }
                    var_26 = (min(var_26, ((((((((arr_13 [i_0]) ? 1141695360 : 2695488391)) ^ 1)) << (((-224154075 ^ 1) - 18446744073485397532)))))));
                    var_27 ^= (((((~((var_0 ? var_10 : 0))))) ? (arr_5 [i_1]) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
