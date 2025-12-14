/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = (((((((274189989 ? var_5 : (arr_3 [i_0] [i_0])))) || ((((arr_1 [i_0] [i_0]) ? 4020777320 : 1))))) && (((var_6 ? (arr_1 [i_1 - 2] [i_1]) : (arr_1 [i_1 + 2] [i_1 + 2]))))));
                arr_6 [i_0] [i_0] = (max((arr_0 [i_0]), ((((var_8 ? -25030 : 1269881951370107527))))));
                var_10 &= (arr_0 [i_1 + 1]);
            }
        }
    }
    var_11 = (--1);
    #pragma endscop
}
