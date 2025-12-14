/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((62 ? var_0 : var_12))) ? ((min(var_14, var_4))) : 11225165570932697085)), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [15] [i_2] [i_1] [i_2 + 1] [i_3] = (((min(var_13, (((var_13 ? var_4 : 18891))))) * ((((var_2 / (arr_9 [i_0] [i_0] [i_2 + 1] [i_2] [1])))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = (max(7221578502776854530, -24));
                        arr_13 [i_2] = (((!var_14) ? var_8 : (((((max(var_4, (arr_6 [i_2])))) ? ((0 & (arr_4 [i_1]))) : var_6)))));
                        arr_14 [i_0] [i_2] [1] [i_2] = ((((max(20, (max(-78, var_8))))) ? 48213 : ((((max((arr_2 [3]), (arr_4 [i_2 - 2]))) != var_5)))));
                        arr_15 [i_2] [i_2] [i_2] [17] = 4096;
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] = (min(var_4, (arr_9 [i_0] [4] [i_4 + 1] [i_2] [20])));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_21 [i_0] [i_2] [i_2 - 4] [i_4] = (min(((var_10 ? var_1 : ((-(arr_4 [i_0]))))), (arr_17 [i_0] [i_1 + 1] [i_0] [i_5])));
                            arr_22 [19] [i_1] [19] [19] [i_2] [1] = (((!var_12) && ((min((((-2548 ? 231 : var_9))), (min(var_1, 16983009358402518060)))))));
                            arr_23 [i_0] [i_0] [19] [i_2] [i_0] = ((((max(((-(-127 - 1))), (arr_10 [i_0] [11] [i_2] [i_4 - 1] [11])))) ? ((max(211222501, (-127 - 1)))) : var_0));
                        }
                    }
                    arr_24 [i_1] = 4294967295;
                    arr_25 [i_2] = ((((min(127, (min(var_2, -22491))))) % (max(var_8, (((arr_0 [i_0]) * 7837993624576577264))))));
                    arr_26 [6] [6] [6] [i_2] = (((arr_0 [i_0]) ? (max(((max(var_10, var_10))), (max(var_2, 1)))) : var_5));
                }
            }
        }
    }
    #pragma endscop
}
