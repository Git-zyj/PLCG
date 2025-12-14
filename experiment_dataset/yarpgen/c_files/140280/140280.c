/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = ((+((((((arr_0 [i_1] [i_0]) ? (arr_4 [i_0]) : 1))) ? ((min((arr_0 [i_0] [i_0]), var_5))) : (20239 / var_13)))));
                var_20 = (max(var_20, (max(var_18, -7824653657566783110))));
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
