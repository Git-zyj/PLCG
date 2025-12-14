/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~0) ? ((((var_7 != 1) && ((max(var_9, -1026449408)))))) : var_8));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 *= ((((((arr_1 [i_0]) ? (((min((arr_1 [i_0]), var_7)))) : 210158538))) == (min(var_8, var_6))));
        var_14 = (((2006079383 ^ (!-5036719708997608154))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_15 = ((((max(-5036719708997608154, ((((arr_9 [i_1] [i_2] [i_1] [i_4 + 1]) / (arr_11 [i_1] [i_1] [i_2 - 1] [i_1] [1] [i_4]))))))) ? ((((max(var_7, var_8))) ? -var_7 : (((arr_10 [i_1] [i_2 - 1] [14]) ? var_4 : var_5)))) : (arr_11 [i_1] [i_1] [2] [i_1] [i_4 + 1] [i_4 + 1])));
                        arr_13 [i_1] [i_2 - 1] [10] [i_1] = (min((((((1 ? 30697 : (arr_4 [i_2] [i_2])))) ? 1290948520 : var_7)), ((((arr_5 [i_1] [i_2] [i_2]) * (arr_4 [2] [i_4]))))));
                    }
                }
            }
            var_16 = (min((max((max(1, 10851087558504215072)), ((min((arr_2 [1]), (arr_0 [i_1] [i_2 - 2])))))), (arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
        }
        var_17 = min(((max((arr_0 [i_1] [i_1]), var_8))), (max(var_6, ((max(var_2, var_0))))));
        var_18 = (!1675046156);
        arr_14 [i_1] = ((var_7 ? ((((!var_9) || ((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_2 : -5060449432986486384)))))) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [13])));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((((((var_0 ? var_8 : (arr_9 [2] [i_5] [10] [10])))) ? ((var_7 ? (arr_6 [i_5] [i_5]) : 4294967295)) : var_10)) == 255);
        var_19 = ((((((~var_9) ^ 41067))) ^ ((3861089314 ? (3309938395958173801 & -10) : (arr_8 [i_5] [i_5] [1] [10])))));
        var_20 = ((!(arr_9 [i_5] [i_5] [8] [i_5])));
    }
    var_21 = (min(var_21, ((min((!249), 3)))));
    var_22 = ((((((0 != 2338483909084373921) != (max(var_8, var_2))))) << ((((var_11 ? ((var_0 ? 921614294 : var_6)) : (((var_9 ? var_7 : 4294967290))))) - 2293368039963335572))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                var_23 = 0;
                arr_25 [i_6] [i_7 - 2] = (arr_22 [i_6]);
                var_24 = -1;
            }
        }
    }
    #pragma endscop
}
