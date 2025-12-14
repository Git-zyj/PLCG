/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((min(((1507081166 ? 1 : -1563630522)), (32050 == var_1)))) ? var_15 : (((!(((65527 ? -1 : 1531038760))))))));
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] = ((241 ? 0 : 1));
            var_20 = (min((max((((!(arr_2 [i_0])))), (~107))), ((((18446744073709551612 ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0]))) / ((max(216, (arr_3 [i_0] [i_1]))))))));
        }
        arr_7 [i_0] [3] = 1563630499;
        arr_8 [i_0] = ((~(((arr_5 [i_0]) ? (!4294967286) : (arr_3 [i_0] [i_0])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] &= (min(((((arr_3 [i_2] [7]) * (arr_10 [i_2])))), (arr_1 [i_2])));
        var_21 -= (max(((1563630521 ? -1 : ((0 ? (arr_5 [i_2]) : 65535)))), ((~(arr_5 [i_2])))));
        var_22 += (arr_3 [i_2] [i_2]);
    }
    #pragma endscop
}
