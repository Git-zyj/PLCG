/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = max(var_5, var_15);
    var_22 = ((7863784115691243986 ? 12574741845559691935 : 27));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = min((max((5872002228149859680 > 12574741845559691935), var_13)), (((min(3181940691, 12933935053139611316)) / -var_7)));
                    var_23 *= ((~(((arr_6 [i_0] [i_1] [i_2] [i_2]) >> (((arr_6 [i_0] [i_0] [i_2] [i_0]) - 8500465488708388675))))));
                }
            }
        }
    }
    #pragma endscop
}
