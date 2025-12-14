/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0 + 2]);
        arr_3 [i_0] [i_0] = (arr_0 [11] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1 + 3] = (arr_5 [i_1 + 3] [18]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = (((((arr_5 [i_1] [i_1 + 4]) ? 8681102732324673510 : (arr_5 [14] [i_1])))));
                    var_21 -= (max((((!7936) ? 4294967269 : ((((!(arr_11 [1] [3]))))))), ((((arr_7 [3] [i_2] [i_1]) ? 1110 : ((64425 ? (arr_10 [i_1 + 2] [i_2] [17]) : 14)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_20 [i_1] [4] [i_4] [i_5] [i_6] &= max((arr_5 [i_1] [i_1 + 4]), ((~(arr_15 [i_1 + 4] [i_1 + 2] [12]))));
                        var_22 = ((~((-5603379182392328365 ? 3849037008827383599 : (arr_11 [i_1 + 3] [i_1 - 1])))));
                        var_23 = (max(((((max((arr_5 [i_5] [i_1 + 3]), 18))) ? 0 : 64398)), (-32767 - 1)));
                    }
                }
            }
        }
    }
    var_24 = 205;

    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_25 *= (((-(arr_21 [10]))));
        var_26 = (min(var_26, ((min(-1120, ((((max((arr_11 [i_7] [1]), -27039))) ? ((((!(arr_16 [14] [i_7 + 1] [i_7 - 1] [14]))))) : (min((arr_13 [i_7 + 1]), 1672387742272174253)))))))));
        var_27 = (arr_0 [i_7 - 1] [13]);
        arr_23 [i_7] = (~1111);
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_28 = (((((((min((arr_16 [i_8] [i_8] [i_8] [4]), (arr_7 [5] [i_8] [i_8])))) ? -27026 : (((arr_22 [i_8]) ? (arr_11 [2] [i_8]) : 6))))) ? (min((min((arr_24 [i_8]), (arr_1 [i_8]))), (((11418213052203195813 ? (arr_9 [i_8]) : -24786))))) : ((((arr_4 [i_8] [i_8]) >> ((14214 ? 0 : 65524)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                {
                    var_29 = (max(var_29, ((((arr_19 [i_8] [2] [i_8] [1] [17] [i_8]) ? (max(((-27040 ? 4294967285 : 64425)), (((!(arr_27 [1])))))) : (1087 >= 4176988783))))));
                    var_30 = (max(var_30, (((-(arr_16 [i_9] [i_9] [i_8] [i_9]))))));
                    var_31 |= 1100;
                }
            }
        }
        var_32 = ((((min((arr_2 [i_8]), (arr_27 [i_8])))) ? (arr_11 [i_8] [i_8]) : ((1093 ? ((-(arr_17 [i_8] [i_8] [16] [i_8]))) : (16160428671056006291 | 2286315402653545335)))));
    }
    var_33 &= (min((min(var_9, (13002 / 65532))), ((~(!1)))));
    #pragma endscop
}
