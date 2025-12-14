/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = (((arr_0 [i_0]) ? (((1 % 14943141760952952034) ? 50 : ((((arr_0 [i_0]) >= (arr_0 [i_0])))))) : ((-(((arr_0 [i_0]) ? -4 : 0))))));
        arr_2 [i_0] = (((!(arr_0 [i_0]))));
        var_14 = (max(var_14, 65380));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = ((~(((arr_0 [i_1 - 2]) ^ var_0))));
            var_15 -= (!11311);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (max((((8329782139736131501 * 11311) ? (((arr_3 [i_0] [i_0] [i_2]) ? var_12 : (arr_0 [i_2]))) : (((arr_4 [i_0] [i_2]) ? (arr_0 [i_2]) : var_1)))), var_7));
            var_17 = (((((1 + 3028147027) ? (((arr_3 [i_0] [i_0] [i_0]) * (arr_7 [i_2] [i_0] [i_0]))) : (((var_1 ? var_7 : 45036))))) * -6853484180206883830));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_4] [i_3] = (arr_10 [i_3]);
            arr_16 [i_3] = ((~((-(arr_0 [i_4 + 1])))));
            var_18 |= (arr_4 [12] [6]);
            var_19 = (((arr_4 [i_3] [i_4 - 1]) == ((+((((arr_10 [i_3]) > 11309)))))));
        }
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_3] [i_3] = (((((var_11 ? var_6 : (arr_1 [i_5 + 1] [i_3])))) ? (((arr_1 [i_5 + 1] [i_3]) ? (arr_1 [i_5 - 4] [i_3]) : (arr_1 [i_5 - 2] [i_3]))) : ((((arr_1 [i_5 - 3] [i_3]) || (arr_1 [i_5 + 1] [i_3]))))));
            var_20 = (min(var_20, (min(((var_6 ? (arr_1 [i_3] [12]) : (arr_1 [i_5 - 1] [4]))), ((var_12 ? var_3 : var_5))))));
            var_21 = (max(var_21, (((~(((arr_1 [i_3] [12]) ? 58007 : 8329782139736131501)))))));
            arr_20 [i_3] = ((((((((var_4 ? 0 : (arr_0 [i_3])))) ? (arr_10 [i_3]) : (arr_0 [i_3])))) ? ((((!(arr_12 [i_5] [i_3] [i_3]))))) : ((-(((arr_4 [i_3] [i_3]) ? 3063723449 : 5533))))));
        }
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            arr_23 [i_3] [i_6 - 1] = ((-6853484180206883830 ? 1 : ((0 ? 1 : 1))));
            arr_24 [i_3] [i_3] = var_8;
            var_22 = (min((((2198104052407923309 / 1) ? 11311 : 904879215740579379)), (((68 ? ((min(1, 104))) : (arr_21 [i_6 - 2] [i_6 - 2]))))));
            var_23 = (((~9551693386469626712) ? -16072928282822888029 : 1));
            var_24 = (min(var_24, var_9));
        }
        var_25 = (((((arr_1 [i_3] [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_1 [i_3] [i_3]))) >= ((-(arr_1 [i_3] [i_3])))));
        var_26 += var_0;
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_27 = (((((arr_26 [i_7]) ? (var_11 ^ 1) : (9551693386469626724 | 128))) >> (((969613599495571132 / var_11) << var_5))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_28 = (((arr_25 [i_7]) || 18));
                    arr_35 [0] [i_8] [i_7] = (max(var_9, var_5));
                    var_29 = 17477130474213980463;
                }
            }
        }
        var_30 = (8895050687239924896 != 14943141760952952034);
        var_31 = (((((((((arr_3 [i_7] [i_7] [i_7]) - var_5))) ? (arr_3 [i_7] [i_7] [7]) : (arr_1 [i_7] [i_7])))) * ((((min(var_10, 1997611523))) ? (max(var_0, var_4)) : (((1 * (arr_7 [i_7] [i_7] [i_7]))))))));
    }
    var_32 = (min(var_32, ((((max(var_5, var_5)))))));
    #pragma endscop
}
