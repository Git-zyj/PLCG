/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (+-var_8);
    var_19 = (!(~var_9));
    var_20 = (--1184511127);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] [i_0] = ((((!(arr_5 [i_0] [i_0] [11])))));
                arr_9 [i_0] |= ((((!(((-(arr_1 [i_0]))))))));
                arr_10 [i_1] = -var_11;
                arr_11 [i_1] = ((-(~0)));
            }
        }
    }
    var_21 ^= ((!(((-(!1))))));
    #pragma endscop
}
