/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((max(1448512882, var_11)))) ? var_0 : (((299542273 ? 1 : var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 = 299542273;
                    arr_8 [i_0] [i_1] [i_2] = (min((!987039282), var_3));
                    arr_9 [i_1] [i_2] = (max((min((arr_3 [i_2 + 1] [i_2 + 1] [i_2]), -987039283)), var_3));
                    arr_10 [i_2 + 1] [i_1] [i_0] = (((174942603 || -905263852679391076) ? (((var_9 || 299542273) ? (((var_4 ? 987039282 : var_9))) : 66584576)) : ((var_7 * ((var_1 ? var_9 : (arr_4 [i_2 + 1] [i_1] [i_0])))))));
                    arr_11 [i_0] [i_1] = ((((max(var_3, 4228382719))) ? (((arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? 4228382719 : var_8)) : (((-640781289 ? (var_9 || var_2) : var_3)))));
                }
            }
        }
    }
    var_14 = (((max(1107613734, var_7))) == (((~var_6) ? ((101 ? var_2 : var_7)) : var_7)));
    var_15 = -var_5;
    #pragma endscop
}
