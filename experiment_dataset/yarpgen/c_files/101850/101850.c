/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((var_14 || (arr_8 [i_0] [i_1 + 1] [i_0]))) || (((-(arr_2 [i_0 - 2] [i_1 - 1])))))))));
                    arr_9 [i_2] = (arr_0 [i_0] [i_0]);
                    arr_10 [19] [i_1] [i_2] [i_1] = (min(57, ((((min(212, (arr_0 [i_1] [i_2])))) ? 7087879752590342209 : (((212 ? 54 : 1)))))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((max((max((max(1377373890813004151, 60)), (!21958))), ((min(((var_11 ? var_15 : -52)), 21374))))))));
    var_18 = 219;
    #pragma endscop
}
