/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (var_13 > 800372821);
        var_15 = (min(18446744073709551615, 536870656));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (((arr_4 [i_1]) ? 913315406 : 6110194881630610419));

        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] = (256113804 % 41502);
            var_17 = ((-((924658853 - ((var_1 ? 3929796936742993164 : 262143))))));
            arr_10 [i_1] [i_1] = (((((-((52 ? 1511268386 : var_13))))) ? var_4 : ((8984547060137803627 ? (arr_7 [i_2 + 1] [i_2 - 1]) : 12168354987646673152))));
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_18 -= ((((3494594475 / (arr_11 [i_3 - 1] [i_3 - 1] [i_1]))) != var_0));

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_19 = (max(var_19, (((((1905262383 ? 322970178 : 3831547915))) ? ((-16894325 ? (((-2777528472079293499 == (arr_15 [i_1] [i_3 + 1] [i_1])))) : var_4)) : ((((((18446744073709551615 ? -17 : 17041))) <= (arr_8 [i_3 + 1]))))))));
                arr_16 [i_1] = (-1806188590 ? -1905262384 : -256113805);
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_20 = ((52 ? (min(18446744073709551615, ((30 ? -860489365863292803 : 256113804)))) : 1806188590));
                var_21 = (min(var_21, ((max(255, ((-(arr_11 [i_1] [i_3] [i_5]))))))));
                var_22 = (-40 > -1806188590);
            }
            var_23 = (max(var_23, (((((((~(arr_6 [18]))))) ? ((~(arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 1]))) : var_7)))));
        }
        var_24 += ((-204 ? (32767 || -15) : (5036117215229415578 && -1905262383)));
    }
    #pragma endscop
}
