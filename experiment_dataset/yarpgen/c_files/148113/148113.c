/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_16 += ((((((var_7 ^ var_13) ^ ((((arr_2 [i_0]) ^ var_11)))))) ? ((((arr_0 [i_0 - 2] [i_0 - 2]) > (arr_0 [i_0 - 2] [i_0 - 2])))) : ((min((13890 > -1343262958), 0)))));
        var_17 = (max(var_17, (((((min((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 - 3] [i_0 - 3])))) ? var_7 : (((min((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0 - 2] [i_0 + 3]))))))))));
        var_18 = (((7 ^ var_4) + 20210));
        arr_3 [i_0] = (min((2251799813685247 | 18), (((((max((arr_0 [i_0] [i_0]), 18357245651134640241))) && ((var_12 != (arr_1 [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_19 -= ((((((arr_6 [i_1 - 1]) * (arr_6 [i_1 - 1])))) ? -7 : (((min((arr_5 [i_1] [i_1]), var_11)) ^ var_1))));
        arr_7 [i_1] = var_6;
        arr_8 [i_1] = 7;
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_20 = var_9;
        var_21 -= (arr_1 [i_2 - 2]);
        var_22 = ((((((((13888 ? (arr_10 [i_2] [i_2]) : var_11))) ? (arr_1 [i_2]) : (var_12 / var_2)))) ? (max(((250 ? 0 : 189)), (!-710428719))) : ((~(arr_12 [i_2 + 1] [i_2 + 1])))));
        arr_13 [i_2] [i_2] = arr_5 [i_2] [i_2];
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((((-32741 / ((-1343262951 ? -1343262956 : var_13)))) > (((max(23, -9))))));
        var_23 += ((((((((156 ? -5606 : 44))) ? 17 : -var_7))) ? ((min(((-1 ? var_8 : var_1)), var_2))) : ((+(((arr_2 [i_3]) ? var_7 : var_1))))));
        var_24 = ((((max(((var_5 ? 244 : (arr_12 [i_3] [i_3]))), (var_9 * 44)))) % (arr_14 [i_3])));
        arr_17 [6] [6] |= -31170;
    }
    var_25 = ((var_6 ^ (max(var_5, (var_2 - var_2)))));
    var_26 = var_13;
    var_27 = ((var_11 + ((-((11 ? var_10 : var_2))))));
    #pragma endscop
}
