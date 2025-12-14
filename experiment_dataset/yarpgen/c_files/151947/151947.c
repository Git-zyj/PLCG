/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = -1;
                var_19 = (min(((((min(var_3, var_8)) >= ((max((arr_4 [6] [6] [i_1]), var_13)))))), (~var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = ((((((max(var_0, var_15))) ? (var_4 | 3586599787) : (arr_8 [i_0]))) | (var_3 > 2265139411479783268)));
                            var_21 = (var_6 / var_8);
                        }
                    }
                }
                var_22 = (max(16181604662229768348, 2265139411479783262));
                var_23 = var_17;
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
