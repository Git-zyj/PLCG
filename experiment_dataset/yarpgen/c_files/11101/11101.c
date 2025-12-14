/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-32739 ? ((((((-66 ? 63 : -2028039856026207369))) != ((var_1 ? var_6 : var_12))))) : (max(var_0, var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] [2] [i_0] = max((((59 > (arr_1 [i_0])))), (((((var_11 >> (var_8 - 1923870396)))) ? (arr_1 [i_2]) : (((arr_8 [i_1] [8] [i_2]) ? var_2 : var_3)))));
                    var_14 = ((-72 / (max(((var_7 ? var_1 : var_4)), (32545 && 78)))));
                }
            }
        }
    }
    #pragma endscop
}
