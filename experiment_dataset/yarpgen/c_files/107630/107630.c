/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (max((((-(23814 * -14700)))), (max(84, (min(3675070140528419641, (arr_3 [i_0])))))));
                var_11 -= (((((((18400281160479175387 ? -118 : -73))) ? ((240 ? (arr_3 [i_0]) : 142)) : (arr_3 [i_0])))) & (min(((4 ? 18446744073709551615 : 16)), (arr_3 [i_0 + 1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] = (max((arr_7 [i_2]), (((max((-9223372036854775807 - 1), (arr_4 [i_2] [i_2]))) & 73))));
        var_12 = ((((((4294967292 * 3) ? 0 : -1))) ? ((2147483632 ? 1 : (-9223372036854775807 - 1))) : ((min(1, (arr_5 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((((max((arr_3 [i_3]), (arr_1 [i_3] [i_3])))) < 65535));
        var_13 = (arr_3 [i_3]);
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_14 = ((((max(13, -32742))) ? (((~((max(-1, 16256)))))) : (min((((arr_6 [i_4] [i_4]) ? 127 : 2305843009213693948)), (arr_15 [i_4 + 2])))));
        var_15 = (((((-118 ? (max(65529, 10103331080030873146)) : 91047366))) ? (18400281160479175405 && 0) : ((30 ? (min(91047391, 65535)) : (!16376)))));
    }
    #pragma endscop
}
