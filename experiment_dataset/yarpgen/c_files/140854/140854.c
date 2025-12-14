/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((max(((255 ? var_15 : 238)), var_6))) ? (!1) : (var_10 <= var_11)))));
    var_19 ^= ((var_8 ? (max((14 && var_14), ((var_8 ? 155508102 : var_7)))) : (((var_5 != ((var_8 ? var_13 : var_16)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = ((-var_8 && (min((arr_2 [i_1 - 1] [i_2 - 1]), var_1))));
                    var_20 = (~(((((127 ? 199 : 127))) ? ((min(0, 3))) : -1849614955)));
                }
            }
        }
        var_21 = (min(var_21, var_0));

        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] [i_3] = 127;
            var_22 += ((((((arr_5 [i_3 + 1] [i_3 - 1]) ? var_15 : var_4))) ? ((((-1 || (arr_3 [i_3 - 1] [i_3 - 1] [i_3]))))) : ((var_14 ? 7286160365094843950 : (arr_5 [i_3 - 1] [i_3])))));
            var_23 ^= ((((max((arr_3 [i_3 - 1] [i_3] [i_3 - 1]), var_10))) ? ((((var_1 || (arr_5 [i_0] [i_3]))) ? (((-960437386 ? var_9 : 17))) : (arr_5 [i_3 + 1] [i_3 + 1]))) : (((-56 ? ((((arr_2 [i_0] [i_3]) <= (arr_1 [i_0])))) : (((var_1 && (arr_9 [i_0] [i_0] [i_3])))))))));
            var_24 ^= arr_2 [i_3 - 1] [i_3 - 1];
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] [11] [1] = ((((arr_12 [i_0] [i_4]) <= (arr_5 [i_0] [i_4]))));
            var_25 = (((((arr_2 [i_0] [i_0]) ? -120 : (arr_7 [i_0] [i_0] [i_0]))) != (((7286160365094843954 ? 2147483643 : (arr_2 [i_4] [i_4]))))));
            var_26 = (((arr_9 [i_4] [i_4 - 1] [i_4 + 1]) ? 24576 : var_7));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = (((((arr_7 [i_0] [i_0] [i_0]) ? ((((arr_7 [i_0] [7] [i_0]) ? -2147483630 : 243))) : (((arr_15 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_5]) : -1))))) ? ((var_8 ? (arr_13 [i_0] [i_5 + 1]) : (arr_13 [i_0] [i_5 - 1]))) : (max(2147483647, 235)));
            var_27 &= (((((arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 1]) && (((arr_13 [i_0] [i_0]) && -7)))) ? var_8 : 155508118));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] = (max((arr_10 [i_8]), var_3));
                        arr_27 [i_7] = (((-2147483647 - 1) < (arr_7 [i_0] [i_0] [i_0])));
                        var_28 = ((((((arr_10 [i_0]) ? (arr_3 [i_0] [i_6] [i_8]) : var_7))) ? (~var_11) : ((127 ? var_14 : (max(22, 7286160365094843933))))));
                        arr_28 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] = (var_0 < var_5);
                    }
                }
            }
        }
    }
    #pragma endscop
}
