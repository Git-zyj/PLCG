/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (max((((((max(var_4, var_18))) ? (arr_1 [i_1 - 1] [i_1 + 3]) : ((max(2063567746, var_11)))))), ((0 ? -48 : 17081544373084544108))));
                        var_21 += ((((((-64 ? (arr_2 [i_0] [0] [i_0]) : (arr_3 [i_0] [i_0]))) << (((((arr_9 [i_0] [i_1 - 1] [i_2] [i_1 + 3] [i_2] [i_2]) ? var_0 : -47)) - 22151)))) & ((max(1235840972, ((238 ? 131071 : 0)))))));
                        arr_10 [i_0] [i_1] = (max((min(59023, -932921161)), ((((var_7 ? var_13 : (arr_6 [2] [i_1] [i_2] [i_3]))) & ((var_14 ? var_9 : var_6))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_22 = (i_1 % 2 == zero) ? ((!((((~-1235840973) << ((((670272485 >> (((arr_8 [i_0] [i_1] [i_0] [i_0]) - 841153986)))) - 670272485))))))) : ((!((((~-1235840973) << ((((((((670272485 >> (((((arr_8 [i_0] [i_1] [i_0] [i_0]) - 841153986)) - 3007126255)))) - 670272485)) + 669617953)) - 30)))))));
                                var_23 = ((!((((-1235840958 * var_10) ? ((((arr_0 [i_0] [i_0]) ? var_10 : var_5))) : 3696349994629356828)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 -= var_4;
                                var_25 = (min(var_25, -31));
                            }
                        }
                    }
                    var_26 = (max(var_26, ((max(((-31 ? (arr_5 [i_0] [i_1 + 3] [i_2]) : (((arr_3 [i_0] [1]) ^ (arr_18 [6] [i_0] [i_0] [i_2] [9]))))), (((((min(var_18, 1))) >= (((var_12 || (arr_7 [i_2] [i_1] [i_2]))))))))))));
                    var_27 *= ((((max(1, ((1843785961 ? var_17 : -3477572656502989255))))) ? 1235840967 : (((~1235840966) ? 127 : -7662471367872258021))));
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    var_28 = (min(var_28, var_12));
                    var_29 = (min(var_29, (2451181339 & 1235840977)));
                }
                arr_24 [i_1] [i_1] = ((var_15 ? var_1 : ((-4484670470335930693 ^ (arr_18 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 2])))));
                var_30 = var_16;
            }
        }
    }
    var_31 |= (max((((((var_16 ? var_3 : var_17)) <= var_4))), ((var_1 ? ((var_8 ? 15331085661656153683 : var_3)) : var_14))));
    var_32 |= (var_15 & (max((var_8 % -111), 51338)));
    #pragma endscop
}
