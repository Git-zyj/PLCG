/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((46587 ? var_12 : 1140560600))) & var_11));
    var_17 = (((((((-127 - 1) ? var_2 : 69)) % (((var_12 ? var_7 : 0))))) << (((((-2147483647 - 1) - -2147483639)) + 35))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((((((min(63, 3)))) > (((arr_0 [5] [5]) ? (arr_2 [i_0]) : (arr_1 [i_0])))))) + ((~(arr_0 [i_0] [i_0])))));
        var_19 = ((arr_0 [i_0] [i_0]) + (((((33 ? var_2 : var_9))) ? ((var_11 / (arr_0 [i_0] [i_0]))) : ((var_13 + (arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                arr_7 [i_2] [i_1] [i_1] = ((((min((arr_3 [i_1]), ((827067004 ? 32763 : (arr_3 [i_1])))))) ? 18720 : 10646024885973573596));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_20 = var_15;
                            var_21 = (((((((594854531 ? (arr_9 [i_2] [1] [i_2]) : (arr_4 [i_1] [i_2])))) ? var_14 : ((1749802757852250177 ? (arr_4 [i_1] [1]) : (arr_11 [i_1]))))) & (arr_6 [i_1] [i_1])));
                            arr_14 [i_2] [i_2] &= (((((arr_6 [i_1] [i_4]) == (arr_6 [i_2] [i_4]))) ? ((max((arr_6 [i_4] [i_3]), (arr_6 [i_1] [i_1])))) : ((-(arr_6 [i_3] [i_4])))));
                            arr_15 [1] [i_3] [i_1] [i_1] [1] [9] = (var_1 + 11654257433358617617);
                        }
                    }
                }
                var_22 = ((47452 ? ((((arr_6 [i_2] [i_2]) % (arr_13 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2])))) : ((((((arr_13 [i_1] [i_1] [i_1] [i_2] [i_2] [3]) ? (arr_6 [i_2] [i_1]) : 1749802757852250177))) ? (var_6 / 1488840968) : (((arr_6 [i_1] [i_2]) ? var_2 : (arr_11 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
