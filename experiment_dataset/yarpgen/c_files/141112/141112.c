/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_1 || var_15) ? ((-((max(0, 1))))) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (((arr_3 [i_1]) - (arr_3 [i_0]))) : 1));
                    arr_8 [i_0] [i_0] [i_2] = var_6;
                }
            }
        }
    }
    var_18 = var_2;
    var_19 &= ((max(((1719054963 ? 1 : 0), ((max(var_10, 91)))))));
    var_20 = var_0;
    #pragma endscop
}
