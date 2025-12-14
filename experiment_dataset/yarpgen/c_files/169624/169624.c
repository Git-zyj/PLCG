/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = -111;
        arr_4 [i_0] = 7655241321964066592;

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = (51 <= -53);
            var_20 = ((-57 ? ((((arr_6 [i_0]) || (arr_0 [i_0])))) : (arr_5 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 ^= (((arr_6 [8]) ? (((arr_9 [i_0] [i_2]) ? var_12 : 7037278402313950431)) : ((((arr_9 [i_0] [i_0]) ? 24583 : (arr_1 [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 = ((-22 && (!45234)));
                            var_23 = ((0 ? -40 : 30));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_5] = (((arr_19 [i_4 + 2] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3]) ? (arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_2]) : 5246813182950651323));
                            var_24 = ((18446744073709551615 ? 89 : 20));
                            var_25 = ((!(arr_2 [i_4 - 1])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((17258769236986264803 ? (arr_0 [i_6]) : (arr_11 [i_6] [1] [i_6])));
        arr_24 [i_6] [i_6] = var_9;
        var_26 = var_10;
        arr_25 [i_6] = 1187974836723286821;
    }
    var_27 &= var_16;
    var_28 = (((max((~1187974836723286813), (-15 + var_19))) - (((((7037278402313950431 | var_11) != (((var_13 ? var_0 : 25)))))))));
    #pragma endscop
}
