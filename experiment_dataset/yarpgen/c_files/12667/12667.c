/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (!-4964);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((var_5 ? (arr_0 [i_0]) : var_10))) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? -4981 : ((var_13 * (arr_0 [i_0])))));
        arr_3 [i_0] = (var_11 % 16121476561142134239);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((-2132 * (arr_1 [i_2])))) ? ((((((var_8 ? 2132 : var_4))) ? ((((arr_7 [1]) ? (arr_6 [12] [12] [i_2]) : 1610545774))) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1])))) : ((((max(var_17, var_12))) ? -2132 : (((max((arr_7 [i_1 + 4]), -4964))))))))));
                    var_20 -= (max((arr_8 [i_2] [i_1] [i_0]), (((!((min((arr_0 [i_2]), var_16))))))));
                    var_21 = 2910154046667977101;
                    arr_9 [i_0] [i_0] [i_2] = (((((arr_1 [6]) != ((((arr_6 [i_0] [i_1 + 1] [i_2]) / (arr_8 [i_2] [i_2] [i_2])))))) ? ((((((arr_5 [1] [i_1]) ? var_3 : (arr_8 [i_2] [5] [i_0])))) & (arr_5 [i_0] [i_0]))) : (((~(~var_9))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_22 -= var_14;
                        arr_19 [i_0] [i_3] [i_4] [i_0] [i_3] = ((-(arr_8 [i_5] [i_5] [i_4])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 6;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                {
                    var_23 = ((!((((!var_8) ? (min((arr_27 [i_6] [i_6]), (arr_4 [i_6] [16] [i_8]))) : -1430979602)))));

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_24 = (arr_28 [i_6] [i_7] [i_9]);
                        arr_32 [i_6] [i_6] [i_6] = ((((arr_18 [i_7 - 1]) != (arr_18 [i_7 + 3]))) ? (arr_5 [i_7] [i_9]) : (!60));
                    }
                }
            }
        }
    }
    #pragma endscop
}
