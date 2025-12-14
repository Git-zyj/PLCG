/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((var_9 * ((42596 ? (min(8067906022701791471, 1)) : 1))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 -= ((4119974995 && (!var_11)));
        arr_2 [i_0] [i_0] = (((((0 & (var_9 >= 10378838051007760154)))) ? (arr_1 [i_0] [i_0]) : ((1 ? (arr_0 [i_0] [10]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (max(-24, 23));
                    var_20 = ((((min((arr_3 [i_1] [i_2]), -var_12))) ? ((min(var_13, (36028779839094784 < 24)))) : (min((((arr_3 [i_2] [i_3]) + 15728640)), var_3))));
                    var_21 -= (arr_3 [i_1] [i_2]);
                }
            }
        }
        var_22 = ((((((arr_8 [i_1] [i_1]) ? -443921204 : 65518))) + (min(2526715393861841798, 1))));
        var_23 = 62;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_24 = ((47951 ? 443921189 : -36028779839094775));
            var_25 = var_16;
            arr_16 [6] [2] = ((-1144247317063660185 ? -443921221 : (arr_6 [i_4] [i_5])));
            arr_17 [i_4] [7] [i_5] = ((~(var_5 + 61792)));
            arr_18 [i_4] [i_4] [i_4] = ((-947899071 ? var_3 : (arr_14 [i_4])));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_21 [i_6] = 47933;
            var_26 -= ((((0 ? 4294967295 : 32766)) - 65418));
        }
        var_27 = (max(var_27, (var_10 || var_4)));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_28 = var_10;
        arr_24 [i_7] [i_7] = ((((~(~var_11))) & (min(1, (~-947899086)))));
        arr_25 [i_7] = (((!92) | ((-(2795329147 - var_5)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_29 = ((var_7 ? ((((((-443921221 && (arr_12 [i_9]))) || (!0))))) : ((-1 ? (((17575 ? var_14 : 15100))) : 500858342935506795))));
                        arr_33 [i_7] [i_7] [i_9] [i_10] = ((((!((min(var_4, 32766))))) ? (max(254, 1)) : ((((var_14 ^ -67) ? (arr_4 [i_7]) : (min(-947899085, 1)))))));
                        var_30 = (((50224 < var_9) ? (min((arr_19 [i_7] [i_8] [i_9]), 1)) : (((((((arr_26 [i_9]) - (arr_32 [i_7] [1] [i_9] [1] [i_10] [i_10])))) ? ((min(10, 6))) : (443921217 && 0))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
