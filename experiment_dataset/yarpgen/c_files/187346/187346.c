/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((255 ? (((max((arr_0 [i_0] [i_0]), (min(var_10, (arr_1 [9]))))))) : (255 & 8755682043625657974)));
        arr_4 [i_0] = (((((arr_2 [i_0] [1]) == (arr_0 [i_0] [i_0]))) ? ((((arr_2 [i_0] [9]) == (arr_0 [i_0] [i_0])))) : ((max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_1] = ((((max((max((arr_8 [i_1] [6] [6]), (arr_6 [i_1] [i_2]))), var_3))) ? (min((arr_7 [i_1]), ((((arr_8 [i_2] [i_2] [i_1]) || (arr_6 [i_1] [i_2])))))) : (((((arr_8 [i_1] [i_1] [i_1]) % (arr_6 [i_1] [i_1]))) | ((18446744073709551615 ? 8755682043625657951 : 8755682043625657954))))));
            arr_11 [i_1] [i_1] [i_1] = (max((min(((var_1 / (arr_2 [i_1] [i_1]))), ((((arr_9 [i_2]) / var_9))))), ((((arr_6 [i_1] [i_1]) ? var_10 : 48186)))));
        }
        arr_12 [i_1] = (max((max((arr_9 [i_1]), var_1)), ((max((var_5 || 9691062030083893642), (min((arr_1 [i_1]), var_0)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            var_15 = (((arr_1 [i_4 - 1]) & (arr_16 [i_4] [i_4] [i_4])));
            var_16 = 21984;
        }
        arr_18 [i_3] [i_3] = (((((arr_7 [2]) ? (arr_16 [4] [i_3] [i_3]) : var_7)) | (arr_0 [i_3] [4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_6] [i_6] [i_5] [i_3] = var_5;
                    arr_25 [i_3] [1] [i_5] [i_6] = (arr_9 [i_5]);
                    var_17 = var_6;
                }
            }
        }
        var_18 = (((arr_15 [1] [i_3] [i_3]) + 7));
        var_19 = (((arr_6 [6] [6]) | 9691062030083893659));
    }
    var_20 = 8755682043625657962;
    #pragma endscop
}
