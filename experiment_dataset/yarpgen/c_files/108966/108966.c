/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_7);
    var_21 += var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [7] = 9457896179186871657;
                var_22 = ((34989366 ? 4294967295 : 159));
                var_23 = ((+(((!((max((arr_3 [i_1] [i_0]), var_19))))))));
            }
        }
    }
    #pragma endscop
}
