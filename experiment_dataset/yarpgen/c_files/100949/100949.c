/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-96 ^ -100) ? ((((~1) < -9841))) : ((((var_2 || 7675562147550450389) == var_3)))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_11 = ((((-(min(28, (arr_0 [i_0] [i_0]))))) != ((((!100) || 14298373422221744287)))));
        var_12 = 76;
        var_13 = ((((min(1, (arr_1 [i_0 + 1])))) && ((min(93, 4148370651487807315)))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_14 = ((((3816829417391652367 ? -60 : 26440)) - ((1 ? 1 : 1))));
                        var_15 = ((!((!(arr_3 [i_1 - 2])))));
                    }
                    var_16 = (max(var_16, (((var_1 ? 15497757036615564319 : (--1))))));
                    arr_13 [i_3] = ((~(min((~9943), ((~(arr_2 [i_1])))))));
                }
            }
        }
        var_17 = 3521657013138772415;
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_18 = (max(var_18, (((((4088 ? (arr_16 [i_5 - 1]) : (arr_16 [i_5 + 2]))) + (((arr_16 [i_5 - 1]) ? (arr_16 [i_5 - 2]) : (arr_16 [i_5 + 2]))))))));
        var_19 += (var_9 && 505075567463465727);
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_20 *= (arr_18 [4]);
        var_21 = (!-118);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (min(352589634, ((~((min(1, 1)))))));
        arr_25 [i_7] = ((((20 ? (arr_23 [i_7 - 1] [i_7]) : (arr_23 [i_7 - 1] [i_7])))) ? (arr_14 [i_7]) : 0);
        var_22 = (--0);
    }
    var_23 = ((-var_6 - (+-1)));
    var_24 *= var_0;
    #pragma endscop
}
