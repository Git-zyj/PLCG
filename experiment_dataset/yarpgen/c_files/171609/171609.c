/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((-((7198975626668678351 << (((arr_1 [i_0] [i_0]) - 165))))));
        arr_2 [i_0] = ((-(arr_1 [i_0] [i_0])));
        var_14 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_15 = (max((-1 && 1), (min(1, 2015745872773203321))));
        var_16 = (((((~(arr_3 [i_1] [i_1 - 1])))) - 5829267923145606633));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_17 = 1;
            var_18 = (arr_10 [i_2] [i_2] [i_2]);
        }
        var_19 = (((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])));
        var_20 ^= (min((1 << 1), ((-(arr_9 [i_2])))));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_21 = (arr_7 [i_4]);
        var_22 = max((min(((min(1, (arr_8 [5])))), 8884205648591698290)), 7102130559728563190);
        var_23 = (max(var_23, (((-(-124 - 7213272554254012037))))));
    }
    var_24 = (min(var_24, ((((((var_9 >> (var_0 || var_11)))) != ((((max(var_7, 31259))) ^ (~1568846659709476006))))))));
    var_25 = var_0;
    var_26 = (max(var_26, ((max((((!((min(var_5, var_12)))))), (-127 + var_10))))));
    #pragma endscop
}
