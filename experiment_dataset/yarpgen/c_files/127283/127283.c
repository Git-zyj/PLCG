/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (!3496975587)));
    var_17 |= (((((9123385112588907355 ? -905 : var_8))) ? (((var_7 ? ((2665290500 ? var_14 : 2620910220)) : var_10))) : (((var_1 ? var_5 : -636678120661523077)))));
    var_18 = var_5;
    var_19 += ((((~((var_8 ? 3442056920 : var_0))))) ? -var_3 : ((var_15 ? (((var_0 ? var_5 : var_13))) : ((1700658416 ? var_1 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((!25540) ? (min(-1, (arr_2 [i_0] [i_0] [i_0]))) : ((min(((~(arr_5 [i_0] [i_0] [i_0]))), (arr_1 [i_1]))))));
                var_20 = ((-((((arr_0 [i_0]) < var_5)))));
            }
        }
    }
    #pragma endscop
}
