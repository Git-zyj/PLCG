/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((2833 ? 3422121901 : var_9)) << (var_14 - 2237034876)))) ? 1 : ((max(var_6, (1 == var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] = -1297417775;
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] |= (max(((1 ? 752245206 : (((1 ? 89 : 1))))), ((max(((-4039629112131746246 ? -88 : 1)), 19)))));
                                arr_16 [i_2] [i_1] [i_2 + 1] [i_3 - 1] [i_4] [i_0] [i_2 + 1] = ((5434182355677655837 > ((~(max(var_5, var_2))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] = ((arr_0 [i_2 + 1]) ^ (((arr_1 [i_2 + 1]) ? var_9 : var_1)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_26 [i_5 + 1] [i_5] [i_7] = (((5434182355677655852 ? ((1 ? -109 : 7304870118050549719)) : var_3)));
                    arr_27 [i_7] [i_7] = (max((max(var_7, 1456012571)), (~-89)));
                    arr_28 [i_5] [10] &= -1327696664474787609;
                    arr_29 [0] [i_5] = (((((((((arr_3 [2]) * -90))) ? (arr_23 [i_7] [i_6] [i_5]) : 94))) == var_10));
                }
            }
        }
    }
    var_16 = ((var_5 ? ((((!(var_10 ^ 4814821627566454267))))) : ((((31812 ? 94 : var_14)) + var_7))));
    #pragma endscop
}
