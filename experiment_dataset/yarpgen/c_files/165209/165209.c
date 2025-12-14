/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_13 << (((~var_3) + 4019694254353850416)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((var_5 || ((((arr_6 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 332416963661959623 : (arr_6 [i_0] [i_0] [i_0 - 1] [i_0]))))));
                    var_15 = (arr_0 [i_0 - 1]);
                    var_16 += (((((var_8 ? -36 : (var_4 || 1374648264875333470)))) ? (min((2147483619 & -9046028691762501219), 1)) : (((max(var_2, var_11))))));
                }
            }
        }
    }
    #pragma endscop
}
