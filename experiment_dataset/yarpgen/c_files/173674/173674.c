/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = 11328799494915003188;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_15 = ((7117944578794548427 ? 7117944578794548427 : 11328799494915003189));
                        var_16 = var_1;
                        var_17 = -22;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_18 = (((11328799494915003188 | var_12) ? ((10656207371616505259 ? (((((arr_6 [9] [9]) && var_7)))) : var_2)) : (((~((var_8 ? (arr_14 [i_2] [i_2]) : var_9)))))));
                        var_19 = 7117944578794548427;
                        var_20 = (((arr_3 [22]) >= var_12));
                        var_21 = 7117944578794548411;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_22 = (min((61 - 15502237273721954031), (max((arr_7 [i_0] [i_0]), var_6))));
                            var_23 = (max(((max(var_13, var_2))), -13670570415647758101));
                            var_24 = ((((-14 ? (!-104) : (max(7117944578794548427, var_5)))) & var_3));
                            var_25 = var_2;
                        }
                        var_26 = var_13;
                        var_27 = 101;
                    }
                    var_28 = -1;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_29 = (var_12 ? (min((min(11123730572662423817, 107)), ((min(125, var_13))))) : ((var_9 ? 105 : (~var_7))));
        var_30 = ((9508867205830156185 ? 4284350212558520291 : 120));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                {
                    var_31 = (((arr_0 [5] [i_8]) ? (((((-126 * (arr_27 [i_7] [i_7] [3])))) ? var_6 : 699976069169329609)) : (((max(99, -113))))));
                    var_32 = (((-1 ? 14719644728534200724 : 699976069169329623)));
                }
            }
        }
        var_33 = max((max((15502237273721954031 - var_0), var_7)), (((-(var_4 != var_3)))));
    }

    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_34 = (min((((var_10 | 7117944578794548427) ? ((max(32, 81))) : ((-2 ? var_9 : var_11)))), (((var_12 + 2147483647) >> (1169793323449137448 - 1169793323449137424)))));
        var_35 = 713761352240556217;
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_36 = ((55 ? 125 : 699976069169329623));
        var_37 = ((min((max(var_7, var_5)), (var_1 & 43))) - var_8);
        var_38 = arr_10 [8] [16] [i_11] [16] [i_11] [i_11];

        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            var_39 = var_6;
            var_40 -= (((max((arr_4 [12] [i_12 - 1]), -5))) ? ((var_0 / (arr_4 [i_11] [i_12 + 2]))) : (max((arr_4 [i_11] [i_12 + 3]), var_1)));
        }
    }
    var_41 = (((((min((-127 - 1), 20)))) ? (((var_8 ? 125 : -33))) : -101));
    #pragma endscop
}
