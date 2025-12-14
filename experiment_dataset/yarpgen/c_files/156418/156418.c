/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((1 || 2934389080319110033) ? (2147483646 >= 252) : var_2)), (max((!var_19), (max(var_5, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 *= (min((((((min(var_9, 1))) > (2147483646 || var_7)))), 673582413));
                arr_5 [i_0] [i_0] [7] = -2147483646;
                var_22 = ((!(673582422 & 218)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 3;
        arr_10 [i_2] = (arr_6 [i_2]);
        arr_11 [i_2 + 1] = (min((max((((arr_6 [i_2]) ? var_3 : 1)), (var_3 == var_5))), (arr_6 [i_2])));
        var_23 += (arr_6 [i_2]);
        var_24 *= (arr_6 [i_2]);
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_14 [i_3] = (arr_6 [i_3]);

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_25 = (min(var_25, ((((((min(3, (arr_13 [i_3] [i_3]))) != ((((arr_8 [i_3]) ? 1 : 1))))) || ((max(3365377100, (-2147483647 - 1)))))))));
            arr_18 [i_3 - 2] [i_3 - 2] = ((((1242577802 ? 18446744073709551613 : 1242577792)) > ((max((~1297938637), (((arr_1 [i_3 - 1]) ? -3997 : (arr_4 [1] [1] [i_4]))))))));
            arr_19 [i_3] [i_3] = arr_4 [i_3] [i_4] [i_4];
            var_26 = (min((((!(((31 >> (16432755604095591572 - 16432755604095591557))))))), 181));
        }
        var_27 = (arr_16 [i_3]);
        var_28 = arr_3 [6] [i_3] [6];
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_29 = ((((max((arr_2 [i_5]), ((244 ? 81 : 31))))) || (((81 ? (((arr_0 [i_5]) ? 1 : 1)) : ((var_13 * (arr_6 [i_5]))))))));
        var_30 += 32;
        var_31 *= var_15;
        var_32 += (max(-24, 250));
        var_33 += 1;
    }
    var_34 = ((((min((max(var_11, var_15)), -var_14))) ? (((max(1, 2305843009213693951)) & 1)) : ((((var_0 || (!1)))))));
    #pragma endscop
}
