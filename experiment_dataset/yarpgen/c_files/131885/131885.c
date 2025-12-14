/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((max(65280, 53148))) ? (var_7 & var_15) : var_9)), 172506440974059809));
    var_17 -= ((((((-172506440974059809 && (((172506440974059824 ? 274 : 239))))))) * (var_12 & 3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [3] [1] = (max((arr_4 [i_0] [14]), (min(var_0, (max((arr_4 [i_0] [i_1]), var_9))))));
                arr_6 [i_0] [15] [i_0] = ((((max((((var_5 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_1])))), ((var_14 ? 9223372036854775807 : 73))))) ? ((-(arr_1 [i_0]))) : ((max((arr_2 [i_0] [i_1]), 53160)))));
                arr_7 [i_1] [3] = ((((((var_15 + (arr_0 [i_1]))) + 2147483647)) << (var_3 - 1)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_10 [i_1] [i_1] [i_1])));
                                var_19 = (min(var_19, var_8));
                            }
                        }
                    }
                }
                var_20 = -5053516304228268655;
            }
        }
    }
    var_21 = ((var_8 ? 5053516304228268655 : (23 != -5053516304228268655)));
    #pragma endscop
}
