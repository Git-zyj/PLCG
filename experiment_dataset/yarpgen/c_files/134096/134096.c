/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(var_1, 4118792045141184449));
    var_12 = (max(var_12, var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = -4118792045141184450;
        arr_5 [i_0] = ((241 ? ((~(arr_1 [i_0]))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = (min(var_13, (arr_6 [i_1] [i_1])));
                        var_14 = ((-(arr_11 [i_1 + 2] [i_1] [i_1] [i_0 - 1])));
                    }
                    arr_14 [i_0] [4] [14] [i_2] &= 172;
                    var_15 |= (((arr_7 [i_0 - 1] [i_1 + 1]) ^ 13441));
                    arr_15 [i_1] [i_1 + 1] [i_2] = ((-(arr_2 [i_2] [i_0])));
                }
            }
        }
        arr_16 [i_0] = (-3664961355789432923 + 611157523591245448);
        var_16 += (((~var_4) ? (arr_8 [i_0]) : (arr_6 [i_0] [i_0])));
    }
    for (int i_4 = 3; i_4 < 24;i_4 += 1)
    {
        var_17 = 1;
        var_18 += ((-((-(arr_18 [i_4])))));
    }
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        var_19 -= (arr_7 [i_5 - 3] [i_5]);
        var_20 = (max(var_20, ((min((((((arr_21 [i_5]) != (arr_17 [i_5] [i_5]))) ? (arr_10 [i_5] [i_5] [i_5] [9] [i_5]) : (arr_7 [i_5] [i_5]))), (arr_1 [i_5]))))));
    }
    var_21 = (min(var_21, (((((var_2 ? 59572 : (var_10 < 111))) >= (((-88 > ((max(9395, 105)))))))))));
    #pragma endscop
}
