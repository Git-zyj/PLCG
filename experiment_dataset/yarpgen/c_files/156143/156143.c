/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (min(var_9, ((((max(-100, -70))) ? -691285469 : var_10))));
    var_21 = (((((97 ? -4708795989091857200 : 9208030242141785066))) ? var_11 : (~var_11)));
    var_22 = ((((5887881990977389221 ? (~var_12) : var_11)) != (var_11 >= var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 &= (((min((arr_2 [i_0]), (arr_5 [i_0])))));
                var_24 = ((arr_5 [i_1]) ? ((((max(-9208030242141785042, (arr_2 [12])))))) : var_6);
                var_25 = (arr_5 [i_0]);
            }
        }
    }
    #pragma endscop
}
