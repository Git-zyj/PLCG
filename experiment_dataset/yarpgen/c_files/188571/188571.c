/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_9 > var_1) ? var_14 : var_3)) >> (var_14 - 183)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] = 25483;
                            var_19 = (max(var_19, (((!(arr_5 [i_1] [10]))))));
                            var_20 = (((((arr_9 [i_0]) != -16)) ? ((-24 ? (arr_10 [i_0 + 1] [i_1] [i_0]) : var_17)) : ((((!var_10) <= ((var_0 ? var_6 : var_17)))))));
                        }
                    }
                }
                var_21 &= 32767;
                arr_15 [i_0] [i_0] = (~1048575);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            {
                var_22 = ((!(((var_0 ? (!var_16) : -1)))));
                var_23 = (max(var_23, ((((((-24971 ? 100 : (arr_20 [i_5 - 1] [i_5 + 2])))) ? (((var_10 ? 7201 : 247873602))) : (max((((var_6 ? -16 : -1))), (((arr_16 [i_4]) ? (arr_18 [i_4]) : var_9)))))))));
                arr_23 [i_4] [i_5] [i_5] = (46927 * 128);
                var_24 = (max(var_24, ((((min((arr_18 [i_4]), (min(var_6, 6149142331895746649))))) ? (~-860) : 17))));
                arr_24 [i_5] [i_5] [i_4] = (-(~var_8));
            }
        }
    }
    #pragma endscop
}
