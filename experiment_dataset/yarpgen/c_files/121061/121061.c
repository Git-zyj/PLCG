/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((234 ? 0 : -510245857));
                var_13 = -77;
                var_14 = (max(var_14, (((!(arr_2 [i_0 - 2] [i_1 + 1] [21]))))));
                arr_6 [i_0] = ((((+((var_2 ? (arr_0 [i_0] [i_1]) : 210)))) / (((arr_4 [5]) ^ (((var_9 || (arr_2 [i_0] [19] [19]))))))));
                arr_7 [i_0] [i_0] [i_1] = ((arr_1 [i_0]) ? ((((((var_10 ? var_10 : (arr_0 [i_0] [11])))) ? (arr_4 [i_1]) : ((var_3 ? 0 : var_10))))) : (((arr_2 [i_0 - 1] [i_1 + 1] [i_1]) ? (arr_2 [i_0 - 4] [i_1 - 1] [i_0 - 4]) : 0)));
            }
        }
    }
    #pragma endscop
}
