/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((18373348569115036118 ? var_9 : (var_1 & 73395504594515500)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((min(((var_8 ? (arr_3 [i_4] [i_4]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_3] [i_4]))), (arr_7 [i_0] [i_1] [i_3] [i_4])))))));
                                var_14 = var_4;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((((arr_0 [i_0]) | (((88 | (var_9 | var_10)))))))));
                    var_16 = (min(var_16, (((17752366602246241815 ? (arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2]) : ((max((-127 - 1), 47929))))))));
                }
            }
        }
    }
    var_17 ^= -1035;
    var_18 = ((var_2 ? var_1 : 65532));
    #pragma endscop
}
