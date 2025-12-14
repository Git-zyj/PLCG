/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((1821039230 ? var_0 : 432235766)), var_11))) ? ((min((max(-1821039231, var_12)), var_3))) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 = (min(var_17, (((2188770571 ? 233945130 : -6428724767329248035)))));
                    arr_8 [i_1] [i_1] [i_1] = var_2;
                    arr_9 [i_1] [i_1] [i_2] = 2188770577;
                    var_18 ^= 27;
                    arr_10 [i_0 - 2] [i_1] [i_2] = (((((var_14 ? 6461315262119940383 : var_10))) ? var_5 : var_10));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] [i_1] = ((var_4 ? var_0 : ((var_1 ? var_2 : ((36 ? var_6 : var_5))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(((24507 ? 2840767569 : ((max(var_3, var_7))))), (((46 ? 1039352975 : 31921))))))));
                                var_20 = (((((9193 ? var_14 : (((var_11 ? var_12 : var_4)))))) ? ((((((var_9 ? (-9223372036854775807 - 1) : 198))) ? ((var_11 ? var_3 : var_2)) : var_1))) : -9223372036854775807));
                            }
                        }
                    }
                    var_21 = (((((29608 ? var_7 : 46))) ? (((((2106196725 ? var_7 : 2188770564))) ? ((var_5 ? 67741980 : var_6)) : (((var_10 ? var_6 : var_3))))) : -1));
                }
                var_22 *= 2154104160957821937;
            }
        }
    }
    var_23 = (((((var_2 ? ((1573694074 ? 1573694071 : var_5)) : -28871))) ? (((((-2 ? -1573694074 : var_3))) ? ((min(var_8, var_3))) : var_10)) : var_10));
    var_24 = ((var_1 ? ((((((14 ? -12 : -9223372036854775784))) ? var_9 : ((var_7 ? 1 : 11386))))) : (((((var_0 ? 0 : var_1))) ? ((max(var_8, var_10))) : 9223372036854775783))));
    var_25 += ((((((((var_12 ? var_4 : var_6))) ? ((min(var_0, var_8))) : ((var_14 ? var_15 : var_3))))) ? (((((14336 ? 897816666 : var_12))) ? (((var_11 ? 234 : -20440))) : ((-4 ? 2073508381320082051 : 6118017350537093627)))) : ((39 ? 225 : var_14))));
    #pragma endscop
}
