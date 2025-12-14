/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] [i_1] = (((((((((arr_0 [i_0]) ? 4194176 : 0))) ? (((arr_5 [i_0] [i_1]) ? 1308330441489052929 : (arr_3 [i_1]))) : ((17740 ? 3401137510951187337 : 1))))) ? ((((((var_6 ? var_2 : (arr_2 [i_0])))) ? ((((arr_0 [1]) ? 3195193923 : 40))) : ((var_3 ? (arr_2 [1]) : var_4))))) : (((((15045606562758364285 ? -1033052659 : (arr_6 [i_0] [i_1] [i_0])))) ? ((var_1 ? 17138413632220498671 : var_8)) : (((127 ? (arr_0 [i_0]) : (arr_5 [i_1] [i_0]))))))));
                arr_8 [i_0] = ((((((((var_5 ? (arr_3 [8]) : (arr_1 [i_0])))) ? ((56 ? (arr_5 [i_0] [i_1]) : var_7)) : (((var_9 ? 18365 : (arr_3 [i_1]))))))) ? ((((((24898 ? -125 : (arr_2 [i_1])))) ? ((var_1 ? var_4 : var_10)) : (((var_9 ? (arr_4 [i_0 + 1] [i_0 + 1]) : 255)))))) : (((((var_0 ? 3042126976435311766 : -2938))) ? (((22 ? 115 : 33143))) : ((var_11 ? 1 : var_6))))));
            }
        }
    }
    var_12 = ((((((((15264359658336692063 ? var_3 : 1))) ? ((1 ? 1308330441489052912 : 39460)) : (((1 ? 49439 : var_5)))))) ? (((((var_10 ? var_6 : var_9))) ? ((var_8 ? var_8 : var_1)) : (((var_3 ? var_11 : var_4))))) : (((((var_2 ? var_2 : var_4))) ? ((10917039452762670764 ? 1308330441489052918 : var_5)) : ((var_1 ? -698171317 : 11307172121258713535))))));
    #pragma endscop
}
