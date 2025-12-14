/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (11225 < -10858);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 -= (max(((-1 ? 11221 : 1681481474)), ((((arr_6 [i_2] [i_0 - 1] [i_2]) == var_19)))));
                    arr_9 [i_0] [i_0] [i_0] = ((!(-1227372637 >= -1)));
                    var_22 = (((((((4294967286 != (arr_3 [i_0]))) ? ((54310 ? 142 : var_19)) : 11225))) ? ((((~var_6) ? var_11 : ((var_13 ? var_16 : var_19))))) : (((((min(167, 72)))) + var_6))));
                    var_23 &= 34524;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_24 = (((((24712 ? ((var_19 ? var_8 : (arr_14 [i_3] [4]))) : var_13))) && (((((max(60071, 255))) ? (1228957415 ^ -1233196) : 35184372088832)))));

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (~var_15);
                            var_26 = (min(var_26, ((min(((2101103000 ? 78 : 14237)), var_5)))));
                            arr_21 [i_3] [i_3] [i_3] [i_6 + 2] [i_7] = var_18;
                            var_27 |= (var_15 - var_13);
                            var_28 = (~-17062);
                        }
                    }
                }
            }
        }
        var_29 = ((min(var_11, var_19)));
    }
    #pragma endscop
}
