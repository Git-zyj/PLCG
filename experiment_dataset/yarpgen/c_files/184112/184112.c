/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 = ((((min((arr_0 [i_0] [i_1]), var_0)) ^ ((((arr_7 [i_0]) ? 1 : 1))))) / (((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_0] [i_3])))) ? (arr_3 [i_0]) : (((arr_7 [i_0]) ? -19913 : -19902))))));
                        var_20 = (min((((((9 >= (arr_8 [i_0] [i_1] [i_0] [i_3]))) && 2578))), (max((~2716262549), (~-7484769477319337434)))));
                        arr_9 [i_0] = (arr_6 [i_1] [i_0]);
                    }
                }
            }
        }
        arr_10 [i_0] = 604908220;
        arr_11 [i_0] [i_0] = arr_7 [i_0];
        var_21 = ((+(((((min((arr_4 [i_0] [i_0] [i_0] [0]), (arr_3 [i_0])))) && 4294967295)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_22 = ((~((min(((var_4 > (arr_13 [i_4]))), ((1 != (arr_14 [i_4] [i_4]))))))));
        arr_15 [i_4] = ((262388329 ? (max((~1904083396), ((13 ? 7 : 8195181317345694219)))) : ((min(-588768680770751373, 1)))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (min((max((arr_13 [i_5]), (arr_14 [i_5] [i_5]))), ((min((-2057346318 <= -2057346316), -37)))));
        var_23 = (max((((arr_12 [i_5]) < (-2147483638 / -5264))), (((~var_15) || (7 & 4294967263)))));
        arr_19 [i_5] = (((-45 & var_2) >= (((~(arr_12 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_22 [i_6] &= (arr_21 [i_6]);
        arr_23 [i_6] = (arr_21 [i_6]);
    }
    var_24 = var_12;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_7] = (min(1, var_6));
                    var_25 = -119;
                }
            }
        }
    }
    var_26 = ((var_7 ? var_17 : (min(111, ((var_7 ? 734855256 : var_18))))));
    #pragma endscop
}
