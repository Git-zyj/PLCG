/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((arr_2 [i_1]) ? (4503599618981888 < var_3) : (arr_3 [i_1] [i_0])))) ? (((min(3216547865640872962, 1)))) : (((!(arr_2 [i_1]))))));
                arr_6 [i_1] [i_1] = var_7;
            }
        }
    }
    var_21 &= var_2;
    var_22 = -24273;
    #pragma endscop
}
