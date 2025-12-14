/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((((((~var_0) <= (arr_2 [i_0] [13] [i_2 + 1])))) != ((((((var_0 ? (-127 - 1) : var_10))) && (var_5 < 18446744073709551615))))));
                    var_13 = (max(3340483573, (((arr_0 [i_0]) * (((2147483647 ? 0 : -233631429)))))));
                    arr_6 [6] [i_1] [i_1] = (((((arr_0 [i_0]) || (0 % -1))) && -13));
                    var_14 = (min(var_14, ((((((7126149681853357055 % (((arr_2 [i_0] [0] [3]) ? (arr_2 [8] [i_1] [i_2]) : -28))))) || (~0))))));
                    var_15 = ((var_5 ? (max(18446744073709551615, -0)) : (((-9081752009012725788 ? (~1) : (arr_5 [i_2 - 1] [i_2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
