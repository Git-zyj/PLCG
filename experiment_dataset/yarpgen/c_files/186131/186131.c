/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, var_9));
                            var_15 = (max(var_15, ((0 ? 1119711629 : 3924446351))));
                        }
                    }
                }
                arr_12 [i_0] = (((min(220352522, 1523067036))) ? (((((max(var_0, var_5)) == ((988874726 ? 4294967295 : 3924446356)))))) : (((arr_4 [i_0] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_0]))));
                var_16 = ((((~(arr_10 [i_0] [i_0] [i_0] [i_1]))) != -2164736136));
            }
        }
    }
    var_17 = min(var_1, (max((var_7 + 0), var_9)));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_4] = 2616594472;
                    arr_22 [i_4] [i_5] [i_6] [i_6] = (3418428070 != 1526342314);
                }
            }
        }
    }
    #pragma endscop
}
