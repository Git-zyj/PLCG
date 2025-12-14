/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -0;
    var_13 *= -901515415;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = var_4;
            var_15 = (max(var_15, ((((var_10 ? var_4 : var_10))))));
            arr_6 [i_0] = (var_5 ? ((-776580956 ? (~var_4) : var_6)) : var_3);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 = (((((-901515399 ? 901515393 : 901515414))) ? ((var_7 ? -3086844438719543546 : 49)) : (((1 ? var_11 : 901515393)))));
            arr_9 [i_0] [i_2] [i_2] = 1;
            var_17 = (min(var_17, (((-(!var_11))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_18 = (max(var_18, (((var_3 ? var_0 : ((((~var_7) ? 3783331469001705976 : -901515415))))))));
            var_19 &= (((!22) ? ((((((var_4 ? var_4 : var_5))) ? var_8 : ((1 ? 31501 : 223))))) : ((var_11 ? var_6 : ((var_4 ? var_0 : -1264179755))))));
        }
    }
    #pragma endscop
}
