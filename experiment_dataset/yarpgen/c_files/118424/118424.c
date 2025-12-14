/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((var_8 ? 1 : var_4)))) ? var_7 : 1);
    var_12 = ((!(((var_8 ? (((var_3 ? var_1 : var_3))) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 ^= arr_1 [i_0];
                    var_14 = (max(var_14, ((((min(((-19 ? (-2147483647 - 1) : 99)), ((var_3 ? var_7 : (arr_1 [i_0])))))) ? var_2 : (((((132 ? 131071 : 1))) ? ((var_1 ? (arr_4 [6]) : var_10)) : (((!(arr_0 [22]))))))))));
                    var_15 = (max(var_15, var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (arr_7 [i_0] [i_0] [i_0] [i_3] [i_4 - 2] [i_4]);
                                var_17 = ((((((((var_5 ? 18422 : 1302472367))) ? (((arr_9 [i_0] [i_4]) & 2971295503)) : var_8))) ? var_7 : (((!(arr_2 [i_0] [1]))))));
                            }
                        }
                    }
                    var_18 = ((-((((!(arr_6 [i_0] [i_2] [i_1] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
