/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_1 [i_0] [i_2]);
                    var_13 = ((~(max(var_11, (arr_2 [i_0 + 2])))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((240 ? var_6 : (arr_5 [i_1] [22])))) ? (min(((76 ? 1125899906842624 : var_8)), 1485983570)) : (((min((arr_6 [i_0] [i_1] [i_1 + 1]), var_10))))));
                        arr_14 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [i_3] = ((((max(250, var_5)) ? (arr_8 [i_1 + 1] [i_1] [i_1] [i_1]) : (!16))));
                        var_14 -= ((((~((var_2 ? 1 : 534773760)))) ^ var_9));

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] = ((((max((~var_4), (8985648899851338260 / var_4)))) ? (max((20236 < 18445618173802709010), ((-20216 & (arr_8 [i_3] [i_2] [i_1 + 2] [i_0]))))) : 46));
                            var_15 = (arr_7 [i_0]);
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] |= ((((((-23086 + 2147483647) << (((arr_2 [i_0 - 3]) - 19281))))) ? ((((arr_2 [i_0 - 3]) && var_9))) : ((-66 ? 239 : 253))));
                            arr_20 [i_3] [i_0] = ((58 | (((~1125899906842583) ? (~var_0) : var_1))));
                            arr_21 [i_2] [i_0] [i_2] [i_1] [i_0] [i_2] &= ((-(((arr_2 [i_0 - 3]) ? (((arr_11 [i_0] [i_1 + 2] [i_0] [i_3]) ? (arr_7 [i_3]) : (arr_3 [i_3]))) : (((max(1, 1407))))))));
                        }
                        var_16 = 1158755871;
                    }
                }
            }
        }
        var_17 -= var_4;
        var_18 = 248;
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_19 = ((var_4 ? (arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] [i_8]) : (max(38612, 35182224605184))));
                        arr_31 [i_8] [i_5] [i_5] [i_5] = (((((-((-(arr_27 [i_8])))))) / (max((arr_17 [i_6] [i_6] [i_6 + 3] [i_6] [i_6]), 191))));
                    }
                }
            }
        }
        arr_32 [i_5] = ((((((((arr_1 [i_5] [i_5]) + 2147483647)) >> (var_6 + 23278)))) != (((arr_11 [i_5 + 2] [i_5 - 3] [i_5 - 1] [i_5]) ? ((-(arr_17 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1]))) : (var_9 - var_1)))));
    }
    #pragma endscop
}
