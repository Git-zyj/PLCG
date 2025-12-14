/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_2] = (max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0])));
                    arr_11 [i_1] [i_1] [i_1] [i_2] = ((min((arr_4 [i_0 + 1]), (arr_6 [i_1] [i_1 - 1] [i_2] [i_0 - 1]))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 = (max(((1 ? (arr_4 [i_0 + 1]) : -96)), (((3932160 || ((var_13 && (arr_7 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_18 = ((((+((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_5 [i_2])))))) != ((2028718189366539230 ? (arr_9 [i_2] [i_3]) : (arr_5 [i_0])))));
                        arr_14 [i_0] [i_2] [i_0] [i_1] = -2028718189366539229;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_19 ^= (((arr_1 [i_0 - 1]) ? ((((((min((arr_13 [i_4] [i_2] [i_1] [i_2] [i_0]), -2028718189366539238))) || (arr_16 [i_0] [i_1] [i_2] [i_4]))))) : ((-(arr_12 [i_4] [i_2] [i_2] [i_0])))));
                        arr_17 [i_2] [i_2] |= (max(((((arr_1 [i_0]) * -var_15))), (max(-2028718189366539232, var_5))));
                        var_20 = (min(var_20, ((((((min((arr_3 [i_4]), (arr_3 [i_0])))) + (((arr_2 [i_1] [i_4]) & 2028718189366539229)))) ^ ((min((((1922021483 && (arr_6 [i_4] [i_2] [i_1] [i_0])))), (max((arr_1 [i_1]), -1922021483)))))))));
                        var_21 += (((arr_1 [i_0]) ? (max(134213632, (12300 - -5584))) : (arr_3 [i_0 + 1])));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_22 = var_4;
                        var_23 -= ((((max((arr_18 [i_0] [i_0 + 1] [i_1 - 1] [i_5 + 2] [i_5] [i_5]), (arr_18 [i_0] [i_0 - 1] [i_1 + 1] [i_5 + 1] [i_5] [i_5])))) ? ((5584 ? 2028718189366539238 : (arr_12 [i_0] [i_2] [i_2] [i_5]))) : ((((((2028718189366539224 ? -2028718189366539229 : (arr_5 [i_0])))) ? (max(var_16, (arr_1 [i_0]))) : (((var_7 ? (arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    var_24 = (arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2]);
                }
                arr_20 [i_0] [i_1] = 6755399441055744;
                var_25 = (max(((2808238585715765789 ? (arr_2 [i_1 - 1] [i_0 - 1]) : (max(2147483647, 2028718189366539237)))), ((((max(var_16, var_8)) & var_9)))));
            }
        }
    }
    var_26 = ((!(((var_9 ? -21714 : var_9)))));
    var_27 = -1922021505;
    #pragma endscop
}
