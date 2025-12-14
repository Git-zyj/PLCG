/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 ^= (min(-4961014573124361661, (((((max(var_8, 903005447))) && (arr_1 [i_0]))))));
        var_17 = (min(((~((7675930993608345250 ? 10770813080101206378 : 7675930993608345250)))), ((max(var_14, (((var_14 >= (arr_1 [i_0])))))))));
        var_18 = (arr_1 [i_0]);
        arr_2 [16] = ((~(~1712226229684941405)));
        var_19 = (14813 % var_2);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 = (arr_1 [i_1]);
            var_21 ^= (((arr_6 [i_1 + 2]) ? (arr_4 [i_1 + 3]) : ((10770813080101206366 ? var_11 : var_11))));
        }
        arr_7 [i_1] = (((((var_12 ? var_15 : -3098)) / (max(-3999065769128484995, (arr_1 [i_1 + 3]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 ^= var_4;
                    var_23 = (max((((((min(50719, 50723))) ? var_8 : -1))), (arr_8 [i_3])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = -1;
            var_25 = var_8;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        var_26 = ((~(50722 & 0)));
                        arr_24 [i_7] [i_7] [i_7] [i_8] = (~50723);
                    }
                }
            }
            var_27 = (min(var_27, (((!((((50721 ? 18278263631145978874 : 14815)))))))));
            arr_25 [i_1 + 1] [1] [1] = (max((((-((35184372088831 ? (arr_3 [i_1]) : (arr_16 [i_1 + 3] [i_1 + 3])))))), (min((-8336 | 1), (arr_21 [i_1] [14] [i_1])))));
        }
        var_28 = (max(var_28, var_6));
    }
    var_29 = 50721;
    var_30 = ((var_10 ? var_10 : 16310149974030434154));
    #pragma endscop
}
