/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [7]);
        arr_3 [i_0] = (((((((((arr_0 [1]) ? var_5 : (arr_1 [i_0])))) ? 205 : (arr_1 [i_0])))) ? (max((((arr_0 [i_0]) ? -460388388787337464 : (arr_1 [3]))), var_2)) : (min((min(var_2, var_3)), (((3385310459 ? 3945 : var_7)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (((~(((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1] [i_1]))))));
        var_10 = (min(var_10, (arr_5 [i_1] [i_1])));
        var_11 = ((((min((arr_4 [i_1]), (arr_4 [i_1])))) ? (8191 - 43) : ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((((max((((-44 + 2147483647) >> 1)), var_4))) ? (arr_9 [i_2] [i_2]) : (((max(44724, 1))))));
        var_12 = -1691832492;
        arr_11 [i_2] = var_3;
        arr_12 [i_2] = ((var_7 ? (arr_8 [1] [i_2]) : (min(43, ((max((arr_8 [i_2] [1]), (arr_9 [i_2] [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (min(((((arr_8 [16] [7]) != 1691832489))), ((+(min((arr_8 [8] [i_3]), 4242874364))))));
        var_13 = (!0);
        arr_16 [17] = ((max(1, 4294967290)));
        var_14 = (min(var_14, (arr_9 [13] [13])));
    }
    var_15 = (min(var_15, var_0));
    #pragma endscop
}
