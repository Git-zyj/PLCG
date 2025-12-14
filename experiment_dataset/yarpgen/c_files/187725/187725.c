/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min(((max(215, (((!(arr_0 [i_1]))))))), 128));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (max(var_15, ((((~(min(0, 24061))))))));
                        var_16 = (((-1 ? 1 : 1)));
                        var_17 = ((!(!15)));
                        var_18 |= (((min((118 | 18446744073709551615), ((min(128, (arr_3 [i_3] [12])))))) == 0));
                        var_19 += (((((-(4510468378083064992 % -51)))) ? ((((-2147483647 - 1) ? 20746 : var_8))) : (((arr_1 [i_0]) ? (arr_7 [3] [i_2] [i_0] [i_0]) : (((arr_2 [i_0] [i_0 + 2] [i_0]) ? var_0 : var_10))))));
                    }
                    var_20 *= (128 < 769717056);
                }
            }
        }
    }
    var_21 = ((((-125 ? 9 : (!-59))) + ((((((var_4 ? (-127 - 1) : var_4))) ? -515933062 : var_10)))));
    #pragma endscop
}
