/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 += ((((max(var_17, (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) ? ((2532960536 + (arr_1 [i_0]))) : ((~(max((arr_3 [i_0] [i_1] [16]), 2532960524))))));
                var_22 += (arr_4 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_23 = var_2;

    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_24 = (arr_3 [i_2] [i_2] [i_2]);
        var_25 = ((((-((3843534355 ? 1762006760 : (arr_1 [i_2]))))) != ((((((arr_1 [i_2]) ? 1762006759 : 1762006759))) ? ((((!(-9223372036854775807 - 1))))) : (((arr_4 [i_2] [15] [15]) ? 2737716492 : -17032))))));
        var_26 = ((!(arr_6 [i_2])));
        var_27 = -5666;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_28 = 4294967295;
            var_29 = ((974532574 ? 5666 : 1));
            var_30 = (5666 ? 1 : 974532573);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_31 = (((arr_4 [i_3] [i_5] [i_5]) ? (arr_4 [i_3] [i_3] [i_5]) : 5914911413209085579));
            var_32 = (4159483741883822075 + var_16);
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_33 = (min(var_33, (!66)));
            var_34 = (((arr_7 [10]) ? (arr_3 [i_6] [i_6] [2]) : (arr_1 [i_3])));
        }
        var_35 = (arr_13 [1] [i_3]);
        var_36 = (((arr_10 [i_3]) < ((~(arr_16 [i_3])))));
        var_37 = ((arr_2 [i_3] [i_3]) >= (arr_1 [i_3]));
    }
    #pragma endscop
}
