/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((-212845263 + var_2) ? (var_8 >= -212845263) : var_0)) >= var_6));
    var_12 ^= var_5;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [0] [4] = ((var_4 - (var_3 - 321127397)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0 - 1] = ((((1633 && (arr_1 [i_0 - 1]))) ? (((212845263 && (arr_4 [i_0 + 1] [i_1])))) : var_6));
            arr_6 [i_0] [i_1] = ((((((arr_3 [i_0 + 3] [i_0 + 3]) > (arr_4 [i_0 + 3] [i_0 - 1])))) * ((47354 ? 32073 : 32073))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (max(var_13, (!687591700)));
            var_14 = (max(var_14, -212845264));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = ((-((((arr_11 [i_0 + 3] [i_2] [i_5] [i_4]) && var_1)))));
                            var_16 ^= (((((var_1 / (arr_1 [i_0 + 3])))) ? (((arr_15 [19] [i_5] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) ? (((123 ? (arr_10 [i_0 + 1] [i_2] [i_3] [i_3]) : 473778719))) : ((-212845263 ? 0 : var_5)))) : (((-(arr_7 [i_0 + 1] [i_0 - 1]))))));
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] &= ((((-212845276 && (arr_13 [i_0 + 2] [i_0 + 3]))) ? ((-232906212 ? (-212845276 || 1) : ((var_7 ? -124 : (arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))))) : 174));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((((((33463 || (88 && 2005297668))))) < (((167 - var_10) + (arr_9 [i_6 + 3])))));
        arr_20 [i_6] [i_6] = (((((arr_13 [i_6] [i_6]) ? 1996854625485203732 : (((0 ? 171 : -212845264))))) >> (212845265 - 212845237)));
        arr_21 [i_6] = -212845264;
    }
    var_17 |= var_5;
    #pragma endscop
}
