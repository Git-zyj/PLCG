/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!var_3) ^ (((!(((15 ? var_7 : 3304232411137094371))))))));
    var_15 = (min(var_15, (((15142511662572457240 ? 15142511662572457221 : (((min(((max(-35, var_4))), (max(var_4, 151)))))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (0 * var_1)))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] |= -15;
        arr_3 [i_0] [i_0] = (((min((~var_3), var_5)) <= (~var_3)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (!((((!15767388343404797081) ? (((arr_0 [i_0] [i_0]) + (arr_5 [i_2]))) : ((max(37, var_4)))))));
                    var_18 = (max(var_18, ((max((arr_7 [i_0] [i_0] [i_1] [i_2]), -2539900748623072166)))));
                }
            }
        }
        var_19 += var_13;
    }
    #pragma endscop
}
