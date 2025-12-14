/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147835
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned short) (((-(max((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_0]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11567)) ? (((/* implicit */int) max(((short)15935), ((short)30366)))) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) (short)14773)) : (((/* implicit */int) (unsigned short)24439))));
                    var_15 &= ((/* implicit */long long int) ((short) min((((/* implicit */long long int) arr_0 [i_1])), (arr_2 [9LL]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        arr_11 [i_3] [10LL] [7LL] [i_1] [i_1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(var_7)))));
                        var_16 = ((/* implicit */long long int) -1046507558);
                        var_17 *= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    }
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_2] [i_4] [i_0] = arr_1 [i_0];
                            arr_18 [i_4] = (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1 - 1] [(short)8])) : (((/* implicit */int) (short)-32744)))));
                            var_18 &= ((/* implicit */long long int) ((short) var_4));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((int) (unsigned short)43958)))));
                            arr_19 [i_4] = ((/* implicit */unsigned short) ((long long int) (unsigned short)65324));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_4] [i_1] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2]);
                            var_20 = var_11;
                            var_21 = ((/* implicit */long long int) ((int) (+((-2147483647 - 1)))));
                            arr_24 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) 1225431930)))) * (((arr_10 [i_0]) / (arr_22 [i_6] [i_6] [i_4 + 2] [i_0] [i_1 - 1] [i_0] [i_0])))));
                            arr_25 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-17520))));
                        }
                        for (short i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            arr_28 [i_4] [i_1 - 1] [i_2] = ((/* implicit */int) (short)-9832);
                            var_22 = ((/* implicit */int) min((((/* implicit */long long int) (~(var_8)))), (((long long int) arr_1 [i_4 + 1]))));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) var_6);
                            var_24 = ((/* implicit */unsigned short) (-2147483647 - 1));
                            var_25 &= ((/* implicit */short) var_12);
                            arr_33 [i_4] [i_4] [i_4] [i_2] [i_0] [i_4] [16LL] = ((/* implicit */short) -607698574);
                        }
                        var_26 = ((/* implicit */int) ((var_3) >= (((/* implicit */int) var_4))));
                    }
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_38 [i_0] [i_1 + 1] [i_2] [i_9] = ((/* implicit */short) max((((/* implicit */long long int) arr_35 [i_1])), (arr_10 [i_0])));
                        arr_39 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_9 + 2]))))) || (((/* implicit */_Bool) ((short) arr_8 [i_9 + 2])))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_47 [i_0] [i_10] [i_2] = ((/* implicit */unsigned short) var_4);
                                var_27 -= ((/* implicit */unsigned short) (+(var_11)));
                                var_28 = ((/* implicit */int) (unsigned short)52364);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_1 - 1] [i_12] [i_0] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) arr_16 [i_0] [i_1 + 1] [i_1 + 1] [8LL] [3LL])))) & (((/* implicit */long long int) ((/* implicit */int) ((short) arr_16 [i_12] [i_12 + 1] [i_2] [i_12] [i_13])))))), (((long long int) ((short) var_2)))));
                                arr_54 [i_12] [i_0] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_35 [i_0])) ? (((/* implicit */int) var_4)) : (arr_12 [(short)9] [(unsigned short)16] [i_2]))), (((/* implicit */int) arr_50 [i_1] [i_1] [i_2] [i_12] [i_13] [i_13]))))), (((long long int) arr_12 [i_1] [i_1 + 1] [i_1 + 1]))));
                                arr_55 [i_12] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)31076)), (-846713862)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) 1302557129)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1961893144))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-30737)), ((unsigned short)0))))))));
    /* LoopSeq 1 */
    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_9))) & (arr_12 [i_14] [i_14] [i_14])))) ? (((((min((-4617042038353466998LL), (((/* implicit */long long int) arr_42 [i_14] [i_15] [i_14 + 1] [(short)20] [(short)4] [i_15])))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (short)1891)))) + (1927))))) : (((((/* implicit */long long int) (~(-747375088)))) & (min((((/* implicit */long long int) arr_36 [20] [i_15] [i_15] [i_15])), ((-9223372036854775807LL - 1LL))))))));
            arr_62 [i_14] [i_15] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((short) var_1))) ? ((-(-6640557046388384998LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
            var_31 = ((/* implicit */long long int) max((var_31), (min((((/* implicit */long long int) (unsigned short)6496)), (((((/* implicit */_Bool) (unsigned short)59205)) ? (((long long int) (short)-1)) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_7)))))))));
        }
        for (int i_16 = 1; i_16 < 11; i_16 += 4) 
        {
            var_32 = ((/* implicit */unsigned short) arr_20 [i_16] [i_16] [i_16] [i_14] [9] [i_16 + 1]);
            var_33 = (-((-(((int) var_6)))));
            arr_67 [i_14] [i_16 + 1] [i_16] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (6530624075828786185LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((arr_59 [i_14]), (((/* implicit */long long int) var_12)))))), ((((!(((/* implicit */_Bool) var_11)))) ? (min((var_7), (((/* implicit */long long int) (unsigned short)35569)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_14] [i_14])) * (((/* implicit */int) (short)-1024)))))))));
        }
        arr_68 [i_14] [i_14 - 1] = min((((/* implicit */int) arr_0 [i_14 + 1])), (-661195235));
    }
}
