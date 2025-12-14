/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(332791831, ((max(var_10, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((-144924949 ? ((39761 ? 4150042346 : var_3)) : (arr_5 [i_1])))) ? (arr_5 [i_0]) : ((((144924949 <= (arr_4 [9] [i_0]))) ? (arr_0 [i_0]) : ((var_0 ? (arr_4 [7] [i_1 + 1]) : (arr_3 [i_0] [i_0])))))));
                var_12 -= (((arr_6 [14] [14]) ^ (((!(arr_6 [i_0] [i_1 + 3]))))));
                var_13 = (min((~1), 1));
                var_14 = (((arr_1 [i_1 - 1] [i_1 + 4]) << (((((arr_1 [i_1 + 3] [i_1 + 2]) ? (arr_1 [i_1 + 4] [i_1 - 1]) : var_0)) - 206))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = (((min((!-332791831), (((arr_8 [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_8 [i_2]))))) & ((((!(~var_6)))))));
        var_15 -= var_1;
        var_16 = ((((((arr_8 [i_2]) ? (arr_8 [i_2]) : var_5))) <= ((~(arr_8 [0])))));
        var_17 = 1;
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_14 [i_3 - 2] = (arr_1 [i_3 - 2] [i_3 + 1]);

        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_18 = ((+(((((arr_12 [i_3 - 1]) >= 1)) ? ((-(arr_9 [i_3] [i_3]))) : ((((arr_15 [i_3] [i_3]) ? (arr_4 [9] [5]) : (arr_15 [i_3] [i_4 - 1]))))))));
            var_19 -= (max(((min((!1), var_1))), (max((var_8 / 1), (((arr_3 [11] [i_4 - 1]) ? (arr_15 [i_3] [1]) : (arr_3 [4] [i_3])))))));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = ((!(arr_5 [i_3 - 1])));
                        arr_26 [i_7] [2] [2] = ((!(min((!1), (!1)))));
                        var_21 = (((((arr_24 [i_3 + 1] [i_3 - 2]) % 40349)) & (((!(arr_21 [i_5 - 1] [i_5 - 1] [i_6] [i_6 + 1]))))));
                        arr_27 [i_3] = (((((((max(13, var_0))) ? 3730350937430832829 : (((min((arr_23 [i_3 + 1] [i_5 + 1] [i_3 + 1] [i_3 + 1]), (arr_2 [4])))))))) ? (((68719476735 << 0) & ((var_4 - (arr_25 [i_3] [i_6]))))) : (((-(arr_23 [i_7] [i_6 + 1] [i_3 - 2] [i_3 - 2]))))));
                        var_22 = (((((max(197, (arr_18 [i_3] [i_3] [i_3]))))) || (((((max(2047, (arr_13 [i_5])))) ? (((max(var_1, (arr_6 [i_3] [i_3]))))) : ((var_8 ? 7864320 : var_4)))))));
                    }
                }
            }
            var_23 = ((((max((min(4294967267, (arr_15 [i_5 - 1] [0]))), 1))) ? 1 : (arr_5 [i_3 - 2])));
            var_24 = ((((!(((29 ? (arr_18 [i_3] [1] [i_5]) : (arr_21 [i_3] [i_3 - 2] [i_5 + 1] [i_5]))))))) % (((max(var_2, var_4)))));
            var_25 = (min(((min(1, (!var_8)))), (arr_23 [i_3] [i_3] [i_3] [i_3 - 1])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
        {
            arr_30 [i_3] = 3664988139;
            var_26 = 1;
        }
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {
            arr_34 [i_9 - 2] = ((((-(arr_1 [i_3] [i_3 - 2]))) >= (min(((-(arr_12 [i_9 + 1]))), 244))));
            var_27 = (min(var_27, (arr_32 [6])));
        }
    }
    #pragma endscop
}
