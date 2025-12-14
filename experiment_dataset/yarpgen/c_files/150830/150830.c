/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) && (arr_1 [16])));
        arr_4 [i_0] = (1 > (arr_2 [i_0]));
        var_13 = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])));
    }
    var_14 = (min(var_14, var_7));
    var_15 = 43537;

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] = ((((14557590279748274805 ? 24784 : (!21999))) << ((((7675171035494443328 ? (arr_1 [i_1]) : 1)) - 184096786))));
        arr_10 [i_1] = (arr_8 [i_1] [i_1]);
        var_16 = (arr_0 [i_1]);
        var_17 = (max(var_17, (((((-24784 == (arr_7 [i_1] [i_1]))))))));
        arr_11 [i_1] [i_1] = ((((min(61631, (min(var_4, (arr_2 [i_1])))))) ^ (arr_6 [i_1])));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = ((((((arr_13 [i_2] [i_2]) - 30)) + -24785)));
        arr_15 [i_2] [i_2] = (min((max((arr_12 [i_2 - 1]), (arr_12 [i_2 - 1]))), (min((arr_12 [i_2 - 1]), (arr_12 [i_2 - 1])))));
        var_18 = (max(var_18, (((~(((((((arr_12 [i_2]) ? (arr_12 [i_2]) : (arr_13 [i_2] [i_2 - 1])))) == (max(11916044157140241231, -2046048613))))))))));
        var_19 *= (((-(((var_2 >= (arr_12 [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_20 = (min((((((min(43516, 65521))) ? ((~(arr_18 [i_3]))) : (((arr_13 [i_3] [i_3]) ? 43522 : -32753))))), ((((arr_12 [i_3]) ^ var_4)))));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_21 = ((((min(1, (min(3679641576019671938, (arr_18 [i_4])))))) ? ((min((4845 > 17989119558573399714), 2147483647))) : ((-76 ? ((1 ? -50 : 1)) : ((1643111914152285792 ? 1685 : (arr_20 [i_3] [13] [i_3])))))));
            var_22 = (min(var_22, (((~(arr_20 [i_3 - 1] [i_3 + 1] [i_3 - 1]))))));
            arr_21 [i_4] [i_4] [i_4] = (min(63, ((-(-13621 ^ 1)))));
            var_23 = (min(1, (min(((((arr_20 [i_3] [i_3] [i_3]) << (((arr_20 [4] [i_4] [i_4]) - 1149960841))))), ((9751851894085067489 ? var_8 : (arr_17 [1] [1])))))));
        }
        var_24 = 0;
        var_25 = ((~((min((arr_17 [i_3 - 1] [i_3 + 1]), (arr_17 [i_3 - 1] [i_3 + 1]))))));
        arr_22 [i_3] = (arr_20 [i_3] [i_3 + 1] [i_3]);
    }
    var_26 *= (((var_8 ? (!var_2) : 8735)));
    #pragma endscop
}
