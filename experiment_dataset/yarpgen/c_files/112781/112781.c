/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 &= (((var_2 - -17092) != var_7));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min((max(-970238856, (-24967 < 24963))), 1054);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, 0));
                        var_14 ^= (arr_4 [i_0] [i_0]);
                    }
                }
            }
        }
        var_15 += 22;
        var_16 = ((((max((min(-983928681, (arr_5 [i_0] [i_0] [i_0]))), (arr_1 [i_0] [i_0])))) ? (((4083136574 - (((((arr_4 [i_0] [i_0]) != 871533179))))))) : (max((max(1, 431603797958874286)), (max(4565513686056466412, (arr_2 [12])))))));
        arr_11 [i_0] = (max(((2883656326 | (arr_5 [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_17 -= ((((-666074716 | (arr_8 [i_4] [i_6 + 2] [i_4]))) == (((-970238856 / ((min((arr_6 [i_6] [i_5] [20]), -12680))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((1 ? (arr_13 [i_4]) : (arr_8 [i_6 + 1] [i_7 - 1] [i_5]))))));
                                var_19 = (min(var_19, (((((((max(3497149822, 65531))) ? (((arr_19 [i_4] [i_5] [i_6] [i_8]) ? (arr_19 [i_4] [i_4] [i_4] [i_4]) : (arr_27 [i_4] [i_5] [4] [i_7] [2]))) : ((((arr_19 [i_8] [i_7] [i_5] [i_4]) * 27127604))))) == 124)))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((~(arr_27 [i_4] [i_5] [19] [i_4] [i_5]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            {
                arr_32 [i_9] [i_10] [i_10] = (~1606862084);
                var_21 = (max(var_21, ((((arr_9 [i_10] [i_10 - 1] [i_10 + 1] [10]) ? (((~(arr_19 [i_9] [i_9] [i_9] [0])))) : (max((((arr_29 [i_9]) ? (arr_10 [i_9] [0] [i_10] [i_10]) : 2147483648)), (min((arr_16 [i_9] [i_10]), (arr_4 [i_9] [0]))))))))));
            }
        }
    }
    #pragma endscop
}
