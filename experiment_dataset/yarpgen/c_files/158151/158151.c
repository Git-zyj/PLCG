/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_15, (max(var_14, (~var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = (min(var_21, (arr_2 [i_1])));
            arr_5 [i_0] [i_1] = ((5800672272979604177 >> (2781644485267301503 - 2781644485267301449)));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_0] = (4294967295 * 2781644485267301483);
            var_22 += (!-1);
            var_23 = (min(var_23, (((2781644485267301503 && (12646071800729947438 == 2781644485267301503))))));
        }
        arr_9 [15] = (arr_7 [17] [i_0] [i_0]);
        var_24 += (((arr_7 [i_0] [i_0] [i_0]) != ((((arr_4 [i_0]) <= var_1)))));
        arr_10 [1] = (arr_2 [i_0]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((min(((min((arr_11 [i_3]), (arr_2 [i_3])))), (((arr_4 [1]) % var_14)))) + (((var_17 ? (arr_1 [i_3] [i_3]) : (min(var_7, var_6))))))))));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_15 [14] [i_4] [i_4] = ((var_7 > (arr_13 [i_4 - 1] [i_3])));
            arr_16 [i_4] [i_4 - 2] = (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2]);
            var_26 = (((arr_14 [i_4 - 2]) << (((arr_6 [i_4] [i_3] [i_3]) - 9253))));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_5] [i_3] &= arr_1 [i_3] [i_5];
            var_27 = (min(var_27, var_4));
        }
        var_28 *= (2781644485267301503 ? (15665099588442250107 % 63) : (arr_11 [i_3]));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = (min((((!((min(3430364612, var_13)))))), (min(((max(1, var_6))), (min(127, var_13))))));
        var_29 = ((((4398046380032 == (arr_18 [i_6]))) ? ((((arr_18 [i_6]) ? (arr_18 [i_6]) : (arr_18 [i_6])))) : var_2));
        var_30 = (min((max((arr_2 [i_6]), var_15)), -1));
        var_31 = 12646071800729947439;
    }
    var_32 = ((((((min(15665099588442250132, var_7)) >> ((((-6787739932567444734 ? 2781644485267301503 : 4778117619719948598)) - 2781644485267301498))))) ? (((var_11 ? (26677 && var_5) : var_17))) : ((15665099588442250113 ? 5800672272979604168 : 12646071800729947438))));
    #pragma endscop
}
