/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = var_15;
        var_19 = (min(var_19, ((((((((min(30, 30))) << (12288 - 12279)))) ? (max((((152 ? var_2 : 253))), ((var_15 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : var_17)))));
        var_20 *= ((~(max((arr_2 [i_0 - 2] [i_0 + 1]), (arr_2 [i_0] [i_0 + 3])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = var_14;
                    var_22 = ((arr_1 [i_0 + 1]) ? (max(var_5, var_8)) : (((((arr_1 [i_1 + 3]) != (arr_1 [i_1 - 1]))))));
                }
            }
        }
        var_23 -= ((-((((max(var_0, var_8))) ? 1 : (max(var_2, var_5))))));
    }
    for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_24 -= ((arr_8 [i_3 - 4] [0]) ? (((var_9 + (!9880409163804386675)))) : ((((((arr_4 [i_3 - 4] [i_3] [i_3 + 2]) ? var_7 : var_10))) ? var_13 : var_12)));
        var_25 = ((((((~1423881251) ? var_13 : ((var_17 + (arr_6 [i_3])))))) ? (max((((arr_11 [i_3]) * 15878612224570231887)), (~2306635962))) : ((((!(arr_5 [i_3 + 3])))))));
    }
    var_26 = (min(var_26, 152));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_27 = ((((max(152, (arr_16 [i_5])))) ? ((4364 ? 1423881262 : (max(var_9, var_8)))) : var_15));
                        var_28 = (((((var_15 ? (((max(var_9, 164)))) : ((var_11 ? 32640 : var_11))))) && ((((arr_17 [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1]) ? (253 == var_5) : var_16)))));
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_29 = (min(var_7, 2068146956));
                        var_30 = (min(((var_12 ? ((240 ? var_15 : 0)) : var_0)), var_1));
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_31 &= (arr_17 [i_4 - 2] [i_5] [i_4 - 2] [i_4 + 2]);
                        var_32 = (min((164 && 224), var_3));
                    }
                    arr_26 [i_4 - 2] [i_4] [i_5] [i_4] = (((((((var_16 ? var_14 : 16320)) & var_17))) ? ((((arr_13 [i_4 - 1]) > var_8))) : (var_2 | -var_17)));
                }
            }
        }
    }
    #pragma endscop
}
