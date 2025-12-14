/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (min((((-1818738290 ? 111 : 93))), (((((-1463672907 ? 1463672888 : 55207))) ? ((max(-1463672907, 14607))) : (6007 + 14121073621647889248)))));
                var_12 += (arr_0 [i_0]);
                var_13 = 6018;
            }
        }
    }
    var_14 = (((((((max(-1111382966, 8))) ? (65520 >= 5995) : (var_9 | var_5)))) ? (!-59505) : ((((var_6 ? 15884638403560666786 : 3664343258)) + (var_1 % 2379)))));
    #pragma endscop
}
