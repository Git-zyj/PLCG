/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_18 = (min(13271, (((((var_5 ? var_0 : var_5))) ? ((var_5 ? var_3 : 7398558184420519108)) : (2006393224 || 1)))));
                    arr_8 [i_0] [i_1] [i_0] = ((4294967278 ? (~-76) : ((-32766 ? var_2 : 5111542873740944013))));
                    arr_9 [i_0] = (~-var_11);
                    var_19 = var_16;
                    arr_10 [i_0] [i_0] = 248;
                }
                var_20 = 96;
                var_21 = var_3;
            }
        }
    }
    var_22 = var_5;
    var_23 = (max(var_23, (((var_1 << ((var_14 ? ((var_14 ? var_4 : var_1)) : var_12)))))));
    #pragma endscop
}
