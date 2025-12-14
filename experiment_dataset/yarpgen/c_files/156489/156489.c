/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min((((!(!455423288)))), 23374));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (-23374 & (((!((((arr_0 [i_1] [i_2]) ? var_16 : 1)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((~(~0)));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2] = ((!((((-6493735499788977208 + var_2) ? (arr_5 [i_1]) : var_16)))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_19 = (--4547603765849360050);
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((+(max((-6493735499788977221 / -23377), (~39110)))));
                    var_20 = (min((((-127 - 1) ? var_11 : ((var_7 ? var_10 : var_10)))), ((((var_7 >> var_7) > (((arr_6 [i_1] [i_1]) | (arr_5 [i_5]))))))));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_23 [i_6] [i_6] [i_6] = (((((~(!-3681)))) || (((((max(3381, 1))) ? (((arr_21 [i_0] [i_1] [i_6] [i_6]) ? var_9 : -126)) : ((max(var_5, 268419072))))))));
                    arr_24 [14] [i_0] [i_0] [i_0] = var_16;
                }
                var_21 += var_16;
            }
        }
    }
    #pragma endscop
}
