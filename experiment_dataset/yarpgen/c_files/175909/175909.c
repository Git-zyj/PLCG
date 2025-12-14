/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = (((1937858935 != 4084) - ((0 | (arr_0 [i_0])))));
                            var_12 = (max((((((16 << (4828903598548267626 - 4828903598548267618)))) ? (32767 - var_9) : var_3)), var_1));
                            var_13 ^= 16;
                            var_14 = (min(122, 228));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_16 [i_0 + 2] [7] [i_4] [i_0] [i_4] [i_4 - 1] = ((~(((-32764 < (min(var_7, 3093762523)))))));
                            var_15 *= ((!(((-(arr_15 [i_5] [i_4] [i_4] [i_1 + 1] [i_0 + 2] [i_0 + 2]))))));
                            arr_17 [i_5] [i_5] [i_0] [i_5] = (max(var_10, (min((~var_6), -452365477988132243))));
                            arr_18 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [3] [i_1 - 1] = (min((~-32767), ((var_1 ? (min(16, -1478037675)) : (((var_3 ? -715841660900611177 : 11)))))));
                        }
                    }
                }
                var_16 -= ((~(max((((arr_3 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_1] [i_0] [i_0] [3] [i_1]) : var_7)), (((-715841660900611177 + 9223372036854775807) << (((-715841660900611177 + 715841660900611213) - 36))))))));
            }
        }
    }
    var_17 = ((((((var_7 ? var_9 : var_4))) ? (var_6 | var_10) : ((var_4 ? var_6 : 32767)))));
    var_18 = (min(var_18, (((((((min(255, var_6))))) / var_7)))));
    #pragma endscop
}
