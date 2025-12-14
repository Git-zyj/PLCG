/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((102 ? var_5 : var_4))) ? (((max(var_7, var_10)))) : ((var_10 ? var_11 : var_0)))) ^ var_9));
    var_17 = (var_2 >= var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((((arr_2 [i_1] [i_0]) - (arr_3 [i_0] [i_0])))) ? ((((var_10 || var_6) ^ ((((arr_4 [i_1]) != (arr_7 [i_1] [i_0]))))))) : (min((arr_3 [1] [13]), ((-(arr_2 [i_1] [i_0])))))));
                var_19 = (min(var_19, ((((-(min(var_4, (arr_2 [i_0] [i_0])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_20 = ((var_12 ? ((-(arr_11 [i_4 - 1] [i_4 + 1] [i_3]))) : (arr_1 [i_2])));
                            var_21 = (min(var_21, ((((((arr_17 [i_2] [i_3] [i_3] [i_4 - 1]) ? var_13 : (arr_17 [i_2] [i_4] [i_4] [i_4 + 1])))) ? (arr_17 [i_4] [i_4] [i_4] [i_4 - 1]) : (((max((arr_17 [i_2] [16] [i_3] [i_4 + 1]), (arr_17 [i_4] [17] [i_4 - 1] [i_4 + 1])))))))));
                        }
                    }
                }
                var_22 = max(((+((var_10 ? (arr_3 [i_2] [i_2]) : (arr_15 [i_2] [i_2]))))), var_13);
                var_23 = (min(var_23, var_3));
                var_24 = ((((((arr_17 [i_2] [i_3] [i_3] [i_3]) ? (arr_9 [i_2]) : var_12)))) ? (((arr_3 [i_2] [i_2]) ? (((~(arr_7 [13] [1])))) : (max((arr_2 [i_3] [i_2]), var_12)))) : var_11);
            }
        }
    }
    #pragma endscop
}
