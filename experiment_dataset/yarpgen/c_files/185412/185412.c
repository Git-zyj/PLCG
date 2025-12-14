/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = min((((arr_3 [i_0] [i_0]) | (((arr_2 [i_0] [i_0]) % (arr_0 [i_0]))))), (arr_2 [i_0] [i_1]));
                arr_8 [i_1] [i_1] &= (((((max(var_3, (arr_5 [i_0] [i_0] [i_1]))) ? ((((arr_3 [i_0] [i_1]) ^ -1201992671))) : (arr_1 [i_1])))));
            }
        }
    }
    var_10 = (max(var_10, (((((((var_8 | var_2) ? (var_4 <= var_7) : (max(var_4, var_0))))) ? -var_7 : var_5)))));
    #pragma endscop
}
