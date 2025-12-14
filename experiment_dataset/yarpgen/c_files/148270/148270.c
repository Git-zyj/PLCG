/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((65520 >> (18446744073709551611 - 18446744073709551602))))) ? (var_13 - var_5) : ((4175331673733302433 ? 25 : 18446744073709551613))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [5] [5] = (arr_0 [i_0]);
        var_18 = (var_0 < 14);
        arr_3 [i_0] = ((-var_10 ? -16105244200267795320 : var_9));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 |= (((!227230471856227326) ? 43859 : ((43459 >> (((arr_4 [i_1]) - 307442766245446703))))));
        arr_7 [7] = 21676;
    }
    var_20 = (min(var_20, (((43865 + ((var_8 ? ((21688 ? 43859 : 43847)) : ((min(43842, 65535))))))))));
    #pragma endscop
}
