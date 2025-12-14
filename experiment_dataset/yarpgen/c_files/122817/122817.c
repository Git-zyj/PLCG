/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_17 &= ((((max(125, var_10))) > 1));
                            var_18 = (min(var_18, ((((!1) + (((!(arr_7 [i_2] [i_0 - 1] [i_2] [i_1])))))))));
                            var_19 = (min(((0 ? -126 : (arr_6 [i_1]))), ((max((arr_6 [i_4]), (arr_6 [i_1]))))));
                        }
                    }
                }
            }
            var_20 &= ((((min(-0, ((var_3 ? 756313751 : 2040048897))))) ? (--147) : ((-0 ? 24 : var_10))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_21 = var_9;
                        var_22 = ((1 ? 0 : 12));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_23 -= ((!(~var_13)));
                        var_24 = ((-(arr_8 [i_8] [i_8] [i_0 + 1] [i_0])));
                    }
                }
            }
            var_25 &= ((!(-16 || 126)));
            var_26 = (((var_4 ? var_12 : var_0)));
            var_27 |= 1785092286;
        }
        var_28 = ((((min(((~(arr_25 [i_0] [i_0 - 2] [i_0] [i_0]))), (!32094)))) ? 147 : (-12 * -127)));
        var_29 *= -29;
        var_30 = ((max(-1, (min(-1, var_4)))));
    }
    for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
    {
        var_31 = (min(65523, (min((arr_1 [12] [i_10 - 2]), (arr_1 [1] [i_10 - 2])))));
        var_32 = (!0);
    }
    #pragma endscop
}
