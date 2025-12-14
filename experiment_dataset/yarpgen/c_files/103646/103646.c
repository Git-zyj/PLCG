/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_7));
    var_14 = ((+(((-241179856 || -185649652) ? 2796744004 : -2042437600315880379))));
    var_15 = (max(1073741824, 1637060760686136331));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (((((!(arr_2 [i_0] [i_1])))) / (arr_4 [i_1] [i_2])));
                    var_16 ^= (max(var_11, ((var_6 ? ((7075774981686564173 ? (arr_3 [i_1] [i_1] [i_2]) : var_8)) : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
