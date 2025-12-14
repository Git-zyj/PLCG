/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(~6972858310361446693)));
    var_19 = (+-6972858310361446693);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((var_11 ? (~6972858310361446688) : (((var_13 ? -var_17 : 27383)))));
                arr_5 [i_0] [i_1] [i_1 + 1] = (max(-6972858310361446688, ((((arr_4 [i_0] [i_0]) + (((~(arr_2 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
