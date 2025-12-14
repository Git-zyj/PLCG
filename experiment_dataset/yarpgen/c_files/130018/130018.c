/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_7 ? var_13 : var_11)))) ? var_7 : (((((0 ? var_6 : var_11))) ? -27 : ((var_3 ? var_3 : var_12))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((((((((arr_2 [i_0]) ? var_5 : 65509)) / (arr_1 [i_0] [i_0])))) ? ((((arr_0 [i_0]) ? 1 : 65508))) : ((((47 ? 3642163345733152620 : -1416017697)) - (-1 - -1948890527)))));
        var_17 = ((-651120905 ? -5970042069683304531 : 14368407458967544351));
        arr_3 [i_0] = ((~(var_12 < -1416017689)));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = ((((((((163 ? var_0 : var_4))) ? (!-15) : (arr_4 [i_1] [i_1])))) && (((5031599440329615652 ? -1416017697 : 2362909358755923939)))));
            var_19 = (min(var_19, ((((1 ? (arr_5 [i_1 - 2] [i_1]) : var_12))))));
            var_20 = (max(var_20, (((((var_9 || (((-5970042069683304531 ? 54112 : -651120905))))) ? (((((var_8 ? (arr_8 [i_1] [i_2] [i_2]) : 27067))) ^ (~1851255686483383748))) : (~var_13))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_21 -= ((var_1 ? ((var_12 ? var_11 : var_5)) : var_11));
            var_22 |= (((arr_10 [i_1 + 1] [i_1 + 3] [i_3 - 2]) ? 2118444974 : (((((arr_10 [11] [9] [i_3]) < 4078336614742007279))))));
        }
        arr_12 [i_1] = ((~(((!(((54099 ? 4078336614742007269 : 0))))))));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_23 |= (~0);
        arr_16 [i_4] = ((~((5031599440329615646 ? 128 : var_8))));
    }
    var_24 *= ((~((((1 ? 246052253 : 0))))));
    #pragma endscop
}
