/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 | 524287);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(((-524295 == (arr_1 [14]))))))) ? var_12 : var_6));
        var_14 = (min(46195, ((var_9 ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [18]) : (arr_1 [i_0])))))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_15 = (max(((var_9 ? 524295 : (arr_1 [i_0]))), (((~(var_6 % var_3))))));
            arr_6 [i_0] [i_1] = (((((~(arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? ((-524296 ? 524317 : 2860391330321777534)) : ((((arr_1 [i_1]) ? 3750382740 : var_10)))));
            var_16 = 2398143482;
            var_17 &= ((!(65 & 1896823813)));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_18 = (((((-255 ? var_11 : -524307))) && (((((max(var_10, 2238091151774680507))) ? (arr_0 [i_0]) : ((var_10 ? 480762928 : var_1)))))));
            var_19 = (((((~var_3) / ((var_6 ? (arr_9 [i_2]) : var_6)))) == var_8));
            var_20 = ((((var_4 ? (arr_7 [i_0] [i_0] [i_2]) : (min((arr_8 [i_0] [i_0]), (arr_4 [i_0] [i_0] [17]))))) << ((((17233448033395661780 >> (((-16 | var_9) + 36)))) - 984))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_21 -= (((((-(arr_7 [i_0] [i_0] [i_0])))) ? (((arr_10 [i_0]) & 1)) : (((var_3 / (arr_3 [i_3]))))));
            var_22 = ((((arr_7 [i_0] [i_0] [i_3]) >= var_4)) ? 1896823788 : (((-1132418127 ? var_4 : (arr_4 [22] [i_0] [i_3])))));
        }
    }
    var_23 = (((((4294967295 || -31) >= -2398143478)) ? -var_8 : (max(var_9, var_10))));
    #pragma endscop
}
