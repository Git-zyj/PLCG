/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((~(~var_2)))) || ((max(-4, (-2147483647 - 1))))));
    var_13 = 3062902445;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 += 65528;
        arr_2 [i_0] = (var_8 ? (((arr_1 [i_0]) ? (-2147483647 - 1) : (arr_1 [i_0]))) : var_8);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_2] [i_1] [i_1] = (arr_3 [i_1]);
            arr_8 [i_2] [i_2] [i_2] = (((arr_4 [i_1]) ? 168 : (-2147483647 - 1)));
            var_15 = (max(var_15, -8286186754147544497));
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            arr_11 [16] [7] = min(((min((!-13), (-686710182 | 65511)))), ((((max(-54, 835702555))) ? (min((arr_5 [20] [i_3 - 2] [i_1]), (arr_4 [i_1]))) : ((((arr_6 [i_3 - 3] [i_1] [i_1]) ? 17584 : -75))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_14 [i_3] [i_3] [i_1] = 1306965546;
                var_16 = (arr_4 [i_1]);
            }
            var_17 = (min(var_17, (((8201972909403448049 ? 11169523716148181926 : 2043384901)))));
            var_18 = (max(var_18, (min((arr_10 [i_1]), (min(2093488843955827439, (!-58)))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_17 [i_5] [i_5] [i_5] = -70821479;
            var_19 = (((((var_10 * 835702525) ? 18446744073709551615 : 1)) % var_8));

            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                var_20 = max(1, 0);
                var_21 = (i_5 % 2 == 0) ? ((max((max((((var_1 << (((arr_19 [i_5] [14] [i_5]) - 64255))))), ((1 ? 1 : var_6)))), ((var_6 ? (arr_5 [i_1] [i_5] [i_5]) : (65511 * -116)))))) : ((max((max((((var_1 << (((((((arr_19 [i_5] [14] [i_5]) - 64255)) + 373)) - 15))))), ((1 ? 1 : var_6)))), ((var_6 ? (arr_5 [i_1] [i_5] [i_5]) : (65511 * -116))))));
            }
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                var_22 = (arr_4 [i_7]);
                var_23 = var_11;
            }
        }
        var_24 = 3921320304;
    }
    #pragma endscop
}
