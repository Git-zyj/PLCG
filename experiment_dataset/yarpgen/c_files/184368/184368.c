/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (var_8 / -var_4);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_7 [2];
                    var_14 *= (((((-(arr_4 [i_2 - 2])))) ? var_8 : var_0));
                    var_15 = -1;
                    var_16 = ((!(arr_3 [i_2 + 1] [i_2 - 3])));
                }
            }
        }
        var_17 = ((65520 ^ (arr_7 [i_0])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 ^= (((((min((((var_6 ? 125 : 77))), ((1529041036689054145 ? -1901074180605852821 : -24561)))) + 9223372036854775807)) >> 5227704937915350583));
                    var_19 = -7640;
                    arr_16 [5] [i_3] [i_3] [i_3] = (((((-15 ^ (arr_14 [i_0] [i_0] [i_4] [i_3])))) >= ((min(5758641778881102004, var_9)))));
                }
            }
        }
        var_20 = (max(-31091, (120 & -13)));
        var_21 = (min(var_21, 5050262669986493400));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_19 [i_5] = (min(118, (~13396481403723058242)));
        var_22 = (min((var_4 | 1979067300465869388), ((1350834338 ? 4799521081327907187 : 121))));
        var_23 *= var_1;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] = ((-(min((~var_10), (((arr_20 [15] [1]) >> (arr_22 [9])))))));
        var_24 = (((arr_20 [i_6] [i_6]) / ((((arr_20 [5] [i_6]) ? var_1 : (arr_20 [2] [2]))))));
        var_25 = (min(var_25, ((((((arr_21 [4]) - (((arr_22 [i_6]) ? 12979 : (arr_21 [12]))))) + (arr_22 [i_6]))))));
        var_26 = (~1979067300465869391);
        arr_24 [i_6] = (min((min((((arr_20 [i_6] [i_6]) | -2147483632)), (((2 ? 54312 : 32764))))), (((63232 & (var_0 ^ var_9))))));
    }
    var_27 = (!1620733354082138001);
    #pragma endscop
}
