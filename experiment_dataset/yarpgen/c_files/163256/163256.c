/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_2, (-1 & var_10)))) ? ((((max(62, var_8)) >> (((~var_1) + 1942452469))))) : ((((max(7715745570624288973, var_9))) ? 156 : var_13))));
    var_17 = (min(var_17, ((max((((~62) % ((var_15 ? var_8 : var_10)))), (((-63 * var_3) / (644648845 * var_14))))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0 + 1] = var_8;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = ((((((arr_8 [i_0] [i_1] [i_2 - 1] [5]) % 13))) ? (arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_5 [i_0] [i_3])));
                        var_19 = (max(var_19, (-2843 >= 38)));
                        var_20 *= 1;
                        arr_15 [i_0] [i_1] [i_0 + 1] &= var_12;
                    }
                }
            }
            arr_16 [i_0] [i_1] [i_0] = ((arr_0 [i_1]) / 2147483647);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_0] = (((((arr_17 [i_0 + 1] [i_0] [i_4]) && 255)) ? ((1 ? 3963016625 : 1)) : (-29453 || 24)));
            var_21 = (~44653);
            var_22 = ((62 ? -1254544498 : -4407737206928318203));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_24 [9] [i_0] [1] = ((7 ? 1 : 1));
            var_23 = max(-1254544498, 213);
            var_24 = ((19 < ((((((max(1, -1753546581))) || (arr_0 [i_0 + 1])))))));
            var_25 -= ((~(-75 < 33)));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (((251 != (~0))))));
            arr_28 [i_0] = 21;
            arr_29 [i_0] [i_0] = var_10;
            var_27 = ((-(((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
        }
        arr_30 [i_0] = ((((((min((arr_1 [i_0]), (arr_17 [i_0] [i_0 + 1] [i_0])))) ? (var_3 || -12) : -124790597))) ? (max((~18446744073709551615), ((((arr_19 [i_0] [i_0 + 1]) ? 1 : 255))))) : ((max(1987964434, (arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_28 = (max(var_28, (~-64)));
        var_29 = ((~(((~15422107593089971183) ? (arr_31 [i_7]) : (arr_32 [i_7])))));
        arr_34 [i_7] = (((((687 || 15422107593089971214) ? ((9537 << (126 - 109))) : (arr_31 [i_7]))) | (0 && -18)));
    }
    var_30 = (var_4 ? (((~(8 || 9223372036854775803)))) : (max(var_5, -89)));
    #pragma endscop
}
