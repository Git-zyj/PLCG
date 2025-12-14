/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 *= ((var_8 ? (((arr_1 [i_0] [i_0]) ? -2 : (min(var_0, var_11)))) : (((var_11 ? ((~(arr_2 [i_0]))) : (arr_2 [i_0]))))));
        arr_4 [i_0 + 1] = ((((((652880188 && (arr_0 [i_0 - 1] [i_0 - 1]))))) != ((var_0 % (arr_0 [i_0 - 1] [i_0 + 1])))));
        var_14 = (((arr_1 [i_0 - 1] [i_0]) ? (((3642087108 ? -840192917 : 156647838))) : (arr_0 [0] [i_0])));
    }

    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1 + 1] = ((2 | ((var_10 ? (arr_6 [i_1 + 3]) : var_11))));
        arr_8 [i_1] = (+(min((~65532), (max((arr_6 [i_1 + 3]), -2004762683)))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_15 = (((arr_10 [i_2]) > (((((max(var_5, 1))) >= (arr_9 [i_2 + 2] [i_2 + 3]))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_16 += ((var_9 >> (-1 + 10)));
                        var_17 = (max(((-44 ? (arr_15 [i_2 + 2]) : (arr_16 [i_3 - 1] [i_4] [i_4 + 3] [9]))), ((~(arr_16 [i_3 - 1] [i_4] [i_4 + 2] [3])))));
                        var_18 += (((arr_14 [i_4]) * var_8));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_19 |= ((!44121) & (2125764115 * 14801900841838786905));
        arr_21 [i_6] [i_6] = ((4004357806316733392 >= (arr_12 [i_6] [i_6 + 1] [i_6 + 1])));
        arr_22 [i_6 + 1] = (((((arr_9 [i_6] [i_6]) == -var_4))) | (min((arr_6 [i_6 + 1]), (arr_18 [i_6 + 1] [i_6 + 1]))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_27 [i_7] = (min((arr_16 [i_7] [i_7] [i_7] [i_7]), (min(0, ((~(arr_3 [i_7])))))));
        var_20 = (arr_3 [i_7]);
    }
    #pragma endscop
}
