/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (32760 ? ((1948182144 ? -1948182145 : 0)) : (2063471911 | 18446744073709551615));
        arr_4 [i_0] [i_0] = (((18446744073709551593 / -1948182173) ? (max(11483198996101973131, 122)) : -1948182138));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((-1948182138 / 2117088674) * ((-1948182138 ? (((min(49, 0)))) : ((28765 ? 0 : 1))))));
                    var_20 = 36770;
                    var_21 = ((187 ? 5290000659606159133 : (((0 ? 36751 : 36770)))));
                    var_22 = (((36770 - 187) ? ((1146093057 ? 14097669666462649304 : -2129854878)) : ((2 ? ((-1948182138 ? 36770 : 18)) : -1948182138))));
                    arr_11 [i_0] [i_0] = 64;
                }
            }
        }
        var_23 = (max((((((4231918623 ? 3047867009 : 61)) - 1))), (7 / 1839951969)));
        arr_12 [i_0] = (((min(((28766 ? 16336 : 31)), -8869838452490412995)) % 28779));
    }
    var_24 = (36767 != var_8);
    #pragma endscop
}
