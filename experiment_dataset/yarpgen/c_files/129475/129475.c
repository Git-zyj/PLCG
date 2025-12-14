/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_6 == 1) % ((var_4 ? 431985101 : var_12))))) ? var_6 : (((~var_9) ? ((-377963410 ? 0 : 68715282432)) : 251658240)));
    var_17 = ((((max(var_9, (min(var_8, var_2))))) ? var_2 : var_5));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = var_7;
        var_19 ^= (min((max((arr_1 [i_0] [i_0 + 2]), var_14)), (arr_1 [i_0] [i_0])));
        var_20 = ((+(((arr_1 [i_0] [i_0 + 1]) ^ var_10))));
        var_21 = (max(var_21, (((4194304 ? ((((431985101 || (var_6 >= 35))))) : (arr_0 [i_0 + 3]))))));
        var_22 *= (max(var_8, -1));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        var_23 = 33292288;
                        var_24 = var_2;
                        var_25 = var_12;
                        var_26 = (((~var_2) + ((var_13 ? (~var_4) : (233 != 9223371761976868864)))));
                    }
                }
            }
        }
        var_27 = (((var_15 * (min(-4949252578286959142, 2040)))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_28 = ((1 && (!var_2)));
        var_29 = ((-var_10 ? (min((arr_10 [i_5] [i_5]), var_11)) : (arr_12 [i_5] [i_5])));
    }
    var_30 = var_4;
    #pragma endscop
}
