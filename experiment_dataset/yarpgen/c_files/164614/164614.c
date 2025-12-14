/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((var_7 ? 4294967289 : ((var_0 ? var_4 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 47032));
                var_20 = (min(((((arr_2 [i_1 + 1] [i_1 + 2] [i_1 + 1]) <= 4963409195449177524))), (((arr_2 [i_1 + 3] [i_1 + 1] [i_1 - 2]) ? var_14 : var_10))));
            }
        }
    }
    var_21 *= (max((((max(var_6, var_10)) & (max(15, var_10)))), 430341801));
    var_22 = ((((max((18504 / 10940256970961952989), (((430341788 ? 18520 : 3267065791)))))) ? (min((~var_3), (var_6 || 0))) : ((((var_15 && (var_12 >= var_4)))))));
    #pragma endscop
}
