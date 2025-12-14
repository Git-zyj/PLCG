/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((~var_0), var_5));
    var_11 = var_8;
    var_12 = (min(15535351701001015083, 1978374475));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = ((-(((((-1044344848 ? (arr_3 [i_0] [i_0]) : (arr_3 [1] [1])))) ? (((!(arr_0 [i_0])))) : (var_5 || 231005070)))));
            arr_4 [i_0] [4] [i_1] = (232 / -989423377);
            var_14 = (max((arr_0 [i_1]), (arr_0 [i_0])));
            var_15 = (max(var_15, ((((-(arr_3 [i_0] [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = ((((max((arr_7 [i_2]), (arr_7 [i_2])))) << ((((arr_3 [i_0] [i_0]) == ((4528161998791060240 ? var_9 : 989423376)))))));
            arr_9 [i_2] [i_2] [i_2] = arr_3 [1] [4];
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_17 = (min(var_17, -28877));
            var_18 = (min(((var_4 ? -989423377 : (max(5514172417202895356, 4528161998791060240)))), (arr_10 [i_0])));
            arr_14 [i_0] [i_3] [i_3] = (arr_11 [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    arr_19 [6] [i_4] [i_5 - 2] &= ((623191914 ? ((((!((max(var_9, var_4))))))) : (min(((((arr_2 [i_5] [i_5] [i_5]) % 29063))), (min((arr_18 [i_0] [i_0] [i_5] [i_0]), 61894686468860213))))));
                    var_19 &= (max(-4721901570343889891, (((4294967295 ? (arr_7 [i_4]) : (arr_7 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
