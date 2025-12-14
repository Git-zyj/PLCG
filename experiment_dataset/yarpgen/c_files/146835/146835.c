/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_3] [23] [10] [i_2] [i_3] = ((((((arr_2 [i_4 + 1]) & ((~(arr_4 [i_0] [i_4 + 1] [i_2])))))) ^ (((((var_2 ? (arr_10 [i_2]) : var_5))) ? (max(var_1, 4294967295)) : var_9))));
                                var_12 *= ((((!(arr_6 [i_1] [i_1] [i_2] [0] [i_4 + 1] [i_4 + 1]))) ? (!1) : 1));
                                var_13 -= ((((((arr_6 [i_0] [i_4] [i_2] [i_4 + 1] [i_4] [i_4 + 1]) ? (arr_6 [i_0] [i_3] [i_2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_9 [i_0] [i_2] [i_2] [i_2] [i_2])))) ? 0 : ((var_10 ? (arr_6 [i_3] [i_4] [i_2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : 1))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] = (arr_10 [i_0]);
                }
            }
        }
    }
    var_14 = (max(var_7, (min(((1 ? var_4 : 1)), var_2))));
    var_15 = ((min((min(var_7, -695677716), var_2))));
    var_16 = ((var_10 && ((((!4157868369) ? 1 : ((min(var_0, var_2))))))));
    #pragma endscop
}
