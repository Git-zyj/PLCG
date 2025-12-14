/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] |= ((((var_4 <= (var_8 || 128))) ? var_4 : (max(212984741, 142))));
        arr_5 [1] [1] = (((((!1073741823) && (!102))) ? (max(2147418112, var_10)) : ((var_2 ? 742290735 : 2147549200))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (!17963);
        arr_9 [i_1] [i_1] = max((max(2147418095, 102)), ((((((var_4 << (var_9 - 4215179643)))) || (!102)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    arr_15 [1] [i_2] [i_2] = (((max(-5201, (var_9 / var_8))) & var_3));
                    var_12 = (min(var_12, (18446744073709551615 | 1)));
                    arr_16 [i_3] [i_2] [i_1] [16] = (max(9223372036854775807, 60335));
                    arr_17 [21] [i_1] = (max(((var_9 ? 4294967282 : var_7)), ((max(var_7, 1)))));
                }
            }
        }
        var_13 *= (max((~var_3), ((var_8 ? 138436695548008253 : 0))));
        var_14 += (max(3595289727, 7697884037488359408));
    }
    var_15 &= 699677565;
    var_16 = 102;
    #pragma endscop
}
