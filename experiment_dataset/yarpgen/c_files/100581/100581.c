/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((var_8 + 5612266575801748879), var_9));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max((((arr_0 [i_0] [i_0]) && 5612266575801748879)), ((!(arr_0 [i_0] [i_0])))));
        arr_3 [4] [i_0] = ((62 / (arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_21 = (max(var_21, (((((-9223372036854775807 - 1) ? -5612266575801748879 : (arr_1 [i_1] [i_1])))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_22 = 2248766841;
            var_23 &= (max((min((5612266575801748878 & 2), (arr_9 [i_1 + 2] [3] [i_1 - 1]))), (((((((!(arr_6 [i_1 - 1]))))) % ((~(arr_8 [i_1 + 3] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_24 = (((arr_1 [i_1] [i_1]) | (((((!1424270068678354449) != ((4294967291 ? (-9223372036854775807 - 1) : 194))))))));
            var_25 = (max(var_25, (((((((min(var_7, 58))) ? (max(193, var_3)) : 5921873818220135329)) == (((3051584946 ? var_18 : var_11))))))));
            var_26 = (((arr_8 [i_1 + 2] [i_3]) * (-5612266575801748878 | var_15)));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] = (arr_6 [i_4]);
            var_27 &= max(((var_3 ? (arr_11 [i_1 - 1] [i_4] [i_4]) : (!4294967295))), ((1183271249 ? 1123700883587072 : 5612266575801748878)));
            var_28 = (min((((min(var_15, 77)) * ((209 ? 947054925 : (arr_14 [i_1] [i_4]))))), (min((((arr_6 [i_1]) ? (arr_6 [i_1 - 1]) : 5862495693506972493)), ((max(145, 136)))))));
            arr_18 [7] = (151 || 5612266575801748877);
        }
    }
    var_29 = var_8;
    #pragma endscop
}
