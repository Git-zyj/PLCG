/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_0, ((111 ? 119 : 111))));
    var_16 = ((((max(((var_12 ? var_9 : var_9)), ((6034742323181292133 ? var_9 : var_9))))) || var_11));
    var_17 = ((((max(((var_10 ? var_4 : var_11)), (((0 ? var_5 : var_3)))))) && var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] [i_0] = ((arr_5 [i_2 - 2] [i_2] [i_0 - 1] [i_0]) ? (arr_5 [i_2 - 3] [i_1] [i_0 - 1] [i_0]) : (arr_5 [i_2 - 2] [i_1] [i_0 + 1] [10]));
                    var_18 = (arr_4 [i_2] [i_2] [i_2] [i_2]);
                    var_19 = (arr_0 [3] [i_2]);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_20 = -101;
                    arr_9 [i_0] [21] = max(6034742323181292133, 1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [i_4] = (((((20130 ? 114 : 111))) ? (arr_3 [i_0] [8]) : (max((((-127 - 1) + (arr_3 [i_3] [i_3]))), var_10))));
                                var_21 = (max(var_21, ((max((max((var_5 * var_11), (arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [21] [i_5]))), ((((max((arr_11 [i_0]), var_4))) ? (arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]) : ((max((arr_8 [i_0]), (arr_2 [i_0] [i_1])))))))))));
                                arr_16 [i_5] [i_4] [i_3] [6] [i_0] = (max((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1]))), (((arr_8 [i_0 + 1]) && (arr_8 [i_0 + 1])))));
                                var_22 = (arr_1 [i_0 - 1]);
                            }
                        }
                    }
                }
                var_23 = (((((!(((var_9 ? (arr_1 [i_1]) : var_9)))))) >= (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_24 = ((((((var_6 ? var_3 : var_12))) ^ (var_4 & var_8))));
    #pragma endscop
}
