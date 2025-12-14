/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((-32767 - 1) ? 13412618347769065535 : (((622290590 ? 1 : 127)))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_19 = (max(var_19, 127));
            arr_6 [i_0] [i_0] = 622290567;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = (-127 - 1);
            var_20 = 622290588;
            arr_12 [i_2] [i_0] [i_0] = 10601;
            var_21 = ((1 ? (((126 ? 123 : 127))) : 5034125725940486081));
            arr_13 [i_0] [8] [8] = (-2 ? ((122 ? 1162213986 : 5034125725940486071)) : -622290590);
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_22 = (max(var_22, 1162213968));
            var_23 -= ((0 ? ((1 ? 10748 : 4294967276)) : 115));
            var_24 += 1;
            var_25 = (min(var_25, 9));
            var_26 = (max(var_26, 2286111865));
        }
        arr_17 [i_0] [i_0] = ((839607670 ? 1073709056 : ((5961675497887073740 ? 1073709056 : 10601))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_20 [i_4] = ((851406229991734282 ? (((207 ? 2397515489 : 122))) : ((1766246528 ? -11 : 18446744073709551609))));
        var_27 += (((((1 ? -1157230354 : -32749))) ? 883777399 : 32752));
        var_28 = ((105553116266496 ? 32733 : 10579));
        arr_21 [i_4] = 1;
    }
    var_29 = (min(((((max(0, -113))) ? 1073741824 : ((-32762 ? 1 : 3380160385)))), 0));
    var_30 = 10599;
    var_31 = 1;
    #pragma endscop
}
