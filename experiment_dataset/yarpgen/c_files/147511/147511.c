/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((((((max((arr_6 [i_0] [i_1]), var_6)) != 24)))) * (arr_0 [i_0])));
                    arr_11 [i_0] [i_1] [i_0] = (max(((((var_3 / var_7) || (24 & var_6)))), ((-var_8 ? (((var_0 ? var_5 : var_2))) : ((var_9 ? var_7 : -2245167429222371216))))));
                    var_11 = (((((2245167429222371230 / (arr_8 [i_0] [i_0] [i_0])))) ? ((((((arr_9 [i_0] [1] [i_2]) ? 414885246 : 5003980074092455610))) ? (var_7 << 0) : ((max(var_3, var_1))))) : 24));
                    var_12 = (min(32767, (((((var_4 ? (arr_9 [i_0] [i_1] [i_2]) : var_5))) - ((-32767 ? (arr_8 [i_0] [i_1] [i_0]) : 2245167429222371215))))));
                }
            }
        }
    }
    #pragma endscop
}
