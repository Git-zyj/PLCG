/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_15 = (min(var_15, ((min(((1 ? (arr_5 [i_1] [i_2 - 1] [i_2 - 1] [1]) : -4102770137197343504)), var_13)))));
                    var_16 = ((-((1 + (-2147483647 - 1)))));
                    arr_9 [i_0] = ((((((1 <= 0) <= 1)))) - (-4102770137197343504 - 1));
                }
                var_17 = (min(var_17, (((((((arr_2 [3]) - ((((arr_1 [i_1] [i_1]) <= var_2)))))) ? ((((-64 <= var_14) <= 1871379651))) : (((((var_10 <= (arr_0 [i_1])))) - (arr_8 [i_1]))))))));
            }
        }
    }
    var_18 = (((((var_9 <= var_5) <= (var_3 <= var_0)))) <= (32767 <= var_13));
    var_19 = ((((((-8 <= (0 <= 1))))) - var_12));
    #pragma endscop
}
