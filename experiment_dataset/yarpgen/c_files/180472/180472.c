/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((21784 ? ((-(~var_6))) : var_5));
    var_13 = (min(((var_0 ? (234 && 18660) : 7311629778440069912)), var_5));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = ((var_9 ? -18660 : ((-(arr_2 [i_0] [i_0 + 1])))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_15 = ((~(((arr_5 [i_0 + 3]) + (min(5192292374888727919, 3290957566))))));
            var_16 = (var_4 ? ((((((arr_4 [i_0 + 1] [i_1] [i_0]) ? var_9 : var_1))) ? ((9955604667607474769 ? 9955604667607474769 : 1335751732358690628)) : (arr_3 [i_0 - 1] [i_1] [i_0]))) : (arr_4 [i_0 + 2] [i_0] [i_0]));
            var_17 = (((((var_8 ? (arr_1 [i_0]) : ((64 ? var_9 : 2147483647))))) ? (((((arr_5 [i_0]) && 1335751732358690628)) ? 0 : (var_8 <= var_0))) : ((var_3 ? ((max(-47, var_8))) : ((min(var_7, var_11)))))));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_18 = var_4;
            var_19 = arr_3 [i_0] [i_2] [i_0];
        }
        var_20 = (arr_2 [i_0] [0]);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_21 = (var_6 >= 9955604667607474769);
        var_22 = (((-var_0 - 13950770501804098269) + 1643));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_23 = var_8;

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 &= ((0 ? 1473009738 : 6755399441055744));
            var_25 = (((arr_6 [18] [i_4] [i_5]) ? ((var_4 ? (arr_2 [i_4] [i_4]) : var_0)) : ((var_1 - (arr_12 [i_4])))));
            var_26 = (max(var_26, (((((5529973650281408620 < (arr_12 [i_5]))) ? ((((arr_2 [i_5] [i_5]) + var_0))) : 574057313)))));
            var_27 = -106;
            var_28 &= 105;
        }
    }
    #pragma endscop
}
