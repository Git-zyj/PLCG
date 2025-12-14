/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(~-8539872339816663127)));
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((-(((arr_2 [i_0] [0]) * ((var_9 ? (arr_2 [i_0] [i_0]) : (arr_3 [16] [i_1] [6])))))));
                var_14 = (max(var_14, ((((((arr_5 [i_0] [2] [i_1]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_1] [i_0] [i_0]))) != ((max((arr_1 [i_0] [i_0]), var_9))))))));
            }
        }
    }
    var_15 = ((((2305842940494217216 ? ((max(-2766764614585040436, 128))) : 16140901133215334400))) ? var_7 : 2305842940494217216);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_16 ^= (((((2305842940494217216 ? (16140901133215334402 * 37329) : (arr_9 [i_2])))) ? ((((((arr_10 [24]) ? var_8 : (arr_9 [i_2])))) ? ((((arr_9 [i_2]) ? 1 : (arr_6 [18])))) : ((var_3 ? 65535 : 15322115234940075344)))) : (((((1322758957 ? 14956810 : 65535)) % (arr_10 [i_3]))))));
                var_17 = (arr_10 [i_2]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((arr_13 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6]) || (((var_8 ? (arr_13 [i_3] [i_3] [i_4] [1] [i_4] [i_2]) : (arr_13 [i_6] [i_5] [i_4] [i_4] [i_3] [i_6])))))))));
                                var_19 = (max(var_19, (((37329 ? 4294967295 : 1850201146114977735)))));
                                var_20 -= ((0 ? 2972208339 : 1516819881));
                                var_21 = (max(var_21, var_3));
                            }
                        }
                    }
                }
                var_22 ^= (((((var_5 ? -1 : (arr_8 [i_2] [i_2])))) ? (max(var_10, var_5)) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_3])))));
            }
        }
    }
    #pragma endscop
}
