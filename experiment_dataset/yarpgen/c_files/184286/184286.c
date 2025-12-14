/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 ^= (min(6142, -572904010));
        var_22 *= max(var_11, ((((arr_1 [i_0]) * ((((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (max(4294967284, (+-2182878733880946541)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = 244;
                                arr_16 [2] [10] [2] [i_0] [i_1] [10] [i_0] &= (arr_0 [i_0] [i_1]);
                                var_24 = (arr_3 [i_3] [i_3] [i_3]);
                                arr_17 [12] [12] [i_2] [i_3] [i_4] [i_3] [i_3] |= (min(((max((((arr_3 [i_0] [i_1] [i_2]) ? -2182878733880946518 : (arr_3 [i_0] [i_1] [i_1]))), 1))), (max(8108, (~17165046752795513245)))));
                                arr_18 [i_1] = ((~((~(1 & -2182878733880946518)))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        arr_23 [i_1] [i_1] = (((arr_9 [i_0] [i_0] [1] [i_5]) || ((((4294967278 ? 176 : (arr_15 [i_0])))))));
                        var_25 = (min(var_25, (((!((max((var_8 > 1), (max(26746, (arr_20 [i_0] [i_0] [i_1] [i_2] [i_5 + 1])))))))))));
                    }
                }
            }
        }
        var_26 = 12563092977256196649;
        var_27 = (((arr_22 [i_0] [i_0] [i_0] [i_0]) ? 7834 : (arr_22 [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
