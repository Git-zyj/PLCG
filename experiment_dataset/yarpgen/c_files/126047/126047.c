/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_10 = -186;
                var_11 = ((-((min((min(98, 65535)), 32753)))));
            }
            arr_8 [i_1] = ((!((min((((1 - (arr_5 [i_0] [i_1] [i_0])))), (max(48, var_0)))))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_12 = var_4;
                arr_16 [i_4 + 3] [0] [i_0] = ((13 ? 119 : -15540));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_13 = var_4;
                var_14 = (arr_7 [6] [13] [i_5] [i_0]);
            }
            arr_19 [i_3] [i_3] [i_0] = -1;
        }
        arr_20 [i_0] = var_9;
        var_15 -= var_3;
        var_16 ^= (((((((1 >> (var_4 - 4938))) ^ 1))) ? ((min(((4988026358692727513 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : var_1)), var_6))) : ((+((18446744073709551615 ? (-9223372036854775807 - 1) : (arr_18 [i_0])))))));
        arr_21 [i_0] [i_0] = (min(((9223372036854775807 ? (var_5 / var_7) : (((min(127, var_9)))))), (max(((((arr_6 [i_0] [i_0]) ? -8230499602417024027 : 4294967295))), ((var_5 ? var_7 : (arr_3 [i_0])))))));
    }
    var_17 = (!(5667 < var_6));
    var_18 = (min(var_18, (max(2147483647, ((-(min(32748, var_0))))))));
    var_19 = ((((min((!var_4), (min(var_3, var_7))))) ? (min(((var_8 ? 23893 : var_1)), (349069939 < 1))) : (((!(-4918599382629163483 & var_0))))));
    #pragma endscop
}
