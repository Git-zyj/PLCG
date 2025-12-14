/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max((arr_0 [i_2]), (min(4399061916402047148, var_7)))))));
                    arr_7 [i_0] [i_0] [i_0 + 2] = 6188393051354933053;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_14 = (max(var_14, ((min((arr_10 [i_3] [i_3]), (((arr_10 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3]))))))));
        arr_11 [i_3] [i_3] = ((((min(32767, 6188393051354933053))) ? (arr_9 [i_3] [i_3]) : (((!(((var_7 - (arr_9 [i_3] [i_3])))))))));
        arr_12 [i_3] = 32767;
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] = ((!(((((min(178, 2269227698))) ? (arr_0 [4]) : (arr_2 [18] [18]))))));
        var_15 = ((((((!(arr_3 [i_4] [i_4 + 1] [i_4 - 1]))))) ^ ((-6188393051354933064 ? (min(32750, (arr_6 [i_4 - 1] [i_4 - 1] [i_4]))) : (arr_10 [i_4] [i_4 + 2])))));
        arr_16 [i_4 - 1] = (((max((arr_9 [i_4 + 2] [i_4 + 2]), (arr_8 [i_4 + 2] [i_4 + 2]))) / (((arr_8 [i_4] [i_4 + 1]) / (arr_8 [i_4] [i_4 + 1])))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (max(((((arr_18 [i_5 - 1]) ? 4161536 : (((arr_18 [i_5]) ? (arr_19 [i_5 - 1] [i_5]) : (arr_18 [i_5])))))), ((min(var_10, (arr_17 [i_5]))))));
        var_16 = ((((((min(var_6, (arr_19 [i_5] [i_5]))) ^ 2432183731))) ? (((-var_8 ? (arr_19 [i_5 - 1] [i_5 - 1]) : (arr_17 [i_5])))) : (min(var_2, (arr_18 [i_5 - 1])))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                arr_27 [i_7] = (arr_25 [i_6]);
                var_17 = (!4252361565);
                arr_28 [i_7] = ((((max((arr_3 [i_6] [i_7] [i_7]), (arr_3 [i_6] [i_7] [i_7])))) ? (4252361565 & var_4) : (((min((arr_0 [i_6]), (arr_0 [i_6])))))));
            }
        }
    }
    var_18 = 6592144737902287734;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                var_19 *= (arr_19 [i_8 + 1] [i_8 + 1]);
                var_20 *= ((127 ? 1140511011 : -32746));
            }
        }
    }
    #pragma endscop
}
