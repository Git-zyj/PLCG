/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((((arr_1 [i_0]) >> (((arr_0 [i_0]) - 233))))) ? (~-104375522) : ((~(arr_0 [i_0]))))), var_4));
        var_18 = (min(-104375522, -104375526));
        var_19 = (~var_8);
        var_20 = (min(var_20, -var_11));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= (arr_3 [i_1] [i_1]);
        var_21 -= ((var_10 ? ((-123 ? -10 : 8794407487276525849)) : (~4219077353847567123)));
        arr_6 [i_1] = ((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]));
        arr_7 [i_1] [i_1] = (((((694004950 ? var_2 : (arr_1 [i_1])))) ? (~var_10) : (arr_3 [i_1] [i_1])));
        arr_8 [i_1] = (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_22 = (arr_1 [i_2]);
        var_23 -= ((450389492 ? (max((arr_9 [18]), (arr_10 [i_2] [i_2 - 1]))) : (arr_9 [14])));
        arr_12 [i_2] [16] = ((-(~1881884566)));
    }
    var_24 = ((((((4294967294 ? 15 : 18446744073709551609)) ^ 32767)) ^ (((var_5 & ((255 ? 2 : 3844577817)))))));
    var_25 = var_8;
    var_26 = (((~var_5) ? ((4219077353847567118 ? ((-1 ? var_11 : 5937)) : (var_17 / var_16))) : (((max((var_8 <= var_9), (max(2047, 1))))))));
    #pragma endscop
}
