/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (127 - var_2)));
        var_12 = ((!(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 6;i_4 += 1)
                {
                    {
                        var_13 = (min((arr_1 [i_1] [i_1 + 1]), (((~-108) ^ (min(121, 2147483647))))));

                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            var_14 = (min(var_14, (arr_6 [i_2] [i_5])));
                            arr_15 [i_1 + 1] [i_1] [i_3] [i_4] [i_4] [i_5 - 1] = (min((((!(arr_14 [i_5 - 1] [i_4] [i_1] [i_1] [i_3 - 1] [i_1 - 1] [i_1 + 1])))), ((((var_10 ? (arr_4 [i_1]) : 278953620)) + -126))));
                            var_15 = ((-((var_7 ? (min(-1472456870542073425, 40522)) : (((min(24, 1))))))));
                            var_16 = (max(var_16, ((((((arr_2 [i_2]) ? ((max((arr_1 [i_2] [i_4]), var_10))) : (max(0, (arr_6 [i_2] [i_5]))))) >= (arr_13 [i_1 + 1] [i_2] [0] [0]))))));
                            arr_16 [i_4] [0] [i_3 - 1] [i_2] [i_5] &= (min(1472456870542073414, -5410));
                        }
                    }
                }
            }
        }
        var_17 = (min(var_17, (((((((arr_1 [i_1 + 1] [i_1]) ? (!var_0) : 39669))) ? (arr_6 [8] [i_1 + 1]) : (max((arr_2 [0]), (arr_9 [i_1] [0]))))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_18 ^= (((arr_19 [i_7 + 1] [i_7] [i_7]) ^ ((((var_1 ? (arr_20 [i_7]) : (arr_20 [i_6]))) / 475537334))));
            var_19 ^= (max(12620, (((-23 >= (~7120158848881816661))))));
            arr_21 [i_7 - 1] = ((((var_3 ? 38 : ((max((arr_19 [i_6] [i_7 + 1] [i_7]), (arr_18 [i_6]))))))) ? (((min(-118, (arr_19 [i_7] [i_6] [i_6]))))) : ((var_6 ? (((arr_19 [i_6] [i_6] [i_6]) ? var_0 : var_7)) : var_4)));
            arr_22 [i_6] [17] &= 7;
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_20 = 1;
            var_21 = (min(111, (arr_23 [i_8])));
            arr_25 [i_6] [15] [i_8] = ((min(6463031255593503742, 31)));
            arr_26 [1] [i_8] [6] = (((((arr_19 [i_6] [i_6] [i_8 - 1]) + (arr_19 [i_6] [i_8] [i_8 - 1])))) ? (arr_20 [i_6]) : (((((min(var_9, (arr_19 [i_6] [i_8] [i_8])))) - (max(-255978309, var_2))))));
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_29 [i_9 - 1] = (arr_24 [i_6] [i_9]);
            var_22 = (max(var_22, var_6));
        }
        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_23 -= ((((122068259069773442 > (arr_20 [i_10 - 1]))) && ((min((7120158848881816660 / var_9), (arr_17 [i_6] [i_10 - 1]))))));
            var_24 = (min(var_24, var_10));
        }
        arr_33 [15] = (((((((arr_23 [17]) ? (arr_24 [i_6] [i_6]) : 1)) & ((0 ^ (arr_24 [17] [i_6]))))) & (0 - 0)));
        var_25 = (min(var_25, (~5118278453801643426)));
    }
    var_26 |= (((!var_4) ? (((5 && var_2) & var_7)) : (max((~var_3), var_5))));
    var_27 = var_6;
    #pragma endscop
}
