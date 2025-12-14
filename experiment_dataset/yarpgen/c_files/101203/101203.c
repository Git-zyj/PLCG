/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 254;
    var_14 = ((-123 ? (min(((var_10 ? var_9 : var_12)), -32748)) : ((-((var_1 >> (-11954 + 11969)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(((arr_3 [i_0] [i_1]) ? (max(12933233371219153595, (arr_2 [i_0] [i_0]))) : (((min(2, 1))))))));
                var_15 = (((-(arr_3 [i_0] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = 10852;
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (((((~(((((arr_3 [i_1] [i_3]) + 2147483647)) >> (13843387873922648667 - 13843387873922648657)))))) - ((-1771881174234873746 ? (min((arr_3 [i_1] [11]), -1284810949765287109)) : var_11))));
                            var_16 = (max(var_16, var_7));
                        }
                    }
                }
                var_17 = (arr_3 [i_0] [2]);
            }
        }
    }
    var_18 = (min(var_4, var_7));
    var_19 = ((~(((var_12 == 13) ? ((11650329429732093650 ? (-32767 - 1) : -1284810949765287109)) : (((max(var_10, var_9))))))));
    #pragma endscop
}
