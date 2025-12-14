/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_10 += ((((min((arr_3 [i_0 + 2] [i_0 - 1]), ((var_1 ? (arr_4 [i_0 + 4]) : var_1))))) ? ((((((arr_2 [i_0 + 2]) ? (arr_4 [6]) : var_9))) ? var_8 : (max(6289812836009156661, 6289812836009156661)))) : ((-6289812836009156655 ? 6289812836009156661 : var_2))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 1] [i_3] [i_1] [i_1] [7] [13] = (min((((var_0 ? (((arr_5 [i_3] [i_2] [i_1] [i_0 - 1]) ? (arr_9 [i_0] [i_1] [i_2] [4]) : -6289812836009156662)) : ((((arr_5 [i_0] [i_1 + 2] [i_2] [14]) ? 32760 : var_0)))))), (max(((((arr_3 [i_1] [i_1]) ? var_3 : 6289812836009156661))), (max(var_1, var_9))))));
                            var_11 += ((((((var_6 ? 6289812836009156661 : (arr_9 [i_0] [i_1 - 3] [i_2] [i_0]))))) ? (((arr_8 [2] [18] [i_2] [i_3 - 1] [18] [22]) ? 6289812836009156661 : (arr_8 [i_3] [i_0] [i_3] [i_1 - 2] [i_3] [8]))) : ((((((var_7 ? (arr_1 [i_0]) : var_9))) ? ((3139 ? (arr_8 [2] [2] [i_1 + 1] [i_2 + 1] [2] [12]) : (arr_4 [i_2]))) : (arr_4 [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_12 ^= var_2;
    #pragma endscop
}
