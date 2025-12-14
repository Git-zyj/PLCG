/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166984
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((var_3) ? (((((/* implicit */_Bool) (short)-5546)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))) >> (((var_13) - (2252805093U)))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */int) var_0);
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_14);
                        var_20 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_5))))));
                        var_21 = var_16;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_22 = (unsigned char)242;
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(arr_15 [i_0 + 2] [i_0 - 2] [i_0 - 2]))))));
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((short) var_12)));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((var_19) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_1]))))))));
                    }
                    arr_17 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) (short)5539))))))))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        arr_22 [i_0] = max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5526)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))), (692036959U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967272U)))) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_0] [i_6] [i_6] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_3 [i_0] [i_0])))))));
                        var_25 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_23 [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)48637)) : (arr_9 [i_1] [i_1] [i_1] [i_1])))), (max((arr_21 [i_0] [i_1] [i_5] [i_0]), (((/* implicit */long long int) 13U))))))));
                        arr_24 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_1] [i_6 + 1] [i_5] [i_1] [i_0]), (arr_14 [i_0] [i_1] [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (((((/* implicit */_Bool) ((((arr_14 [i_0] [i_0] [i_5] [i_5] [i_6]) + (2147483647))) << (((((/* implicit */int) (unsigned char)51)) - (51)))))) ? (((var_10) >> (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) - (53494))))) : (((/* implicit */long long int) max((arr_10 [i_0] [i_5] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_14)))))))));
                    }
                    var_26 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_6)))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)48432)) : (((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                    var_27 = arr_2 [i_0];
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0 + 1] [i_0])))))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_7] [i_7] [i_7])), (4294967280U)))) ? ((~(arr_15 [i_0] [i_1] [i_7]))) : (var_19))))))));
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0]))) <= (4294967266U))) || (((/* implicit */_Bool) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) % (((arr_15 [i_8] [i_8] [i_8]) >> (((var_14) + (1915194531)))))))));
                                var_29 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7] [i_0] [i_7]);
                                var_30 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_7 [i_0] [i_0]))))), ((-(1272902257U)))))));
                                arr_36 [i_0] [i_8] [i_0] [i_1] [i_0] = 727628598U;
                                arr_37 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((var_10), (((/* implicit */long long int) ((short) arr_25 [i_7] [i_7] [i_1] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 2; i_10 < 21; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_10 + 1]))))), (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_10 + 1] [i_1] [i_0]))))));
                    var_32 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_10] [i_0] [i_10 - 2] [i_0 - 1])) >= (((/* implicit */int) ((unsigned char) (unsigned char)34))))))) : (((unsigned int) arr_32 [i_0] [i_0 - 2] [i_10 + 1] [i_10])));
                    var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16048)) ? (((/* implicit */unsigned int) ((int) arr_2 [i_0]))) : (((arr_39 [i_10] [i_0]) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_18)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */int) 1235206815U);
                        var_35 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17110))) / (arr_3 [i_0 - 1] [i_0 + 1]));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_10] [i_10])) <= (arr_9 [i_1] [i_1] [i_1] [i_0])))) : (((/* implicit */int) var_9))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37))))) : (((((/* implicit */_Bool) 1272902254U)) ? (-333650957) : (((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_18)))) ? (4294967251U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((long long int) (+(((/* implicit */int) arr_47 [20U] [i_12])))))));
                        var_38 = (~(((arr_15 [i_1] [i_1] [i_1]) >> ((((((_Bool)1) ? (4463996673866783558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))))) - (4463996673866783554ULL))))));
                        var_39 -= ((/* implicit */long long int) ((unsigned int) 15U));
                        var_40 = ((/* implicit */unsigned char) var_12);
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_41 = ((/* implicit */signed char) var_3);
                        var_42 = ((/* implicit */signed char) ((-117195255) - (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)19463))))) || (arr_31 [i_0] [i_0] [i_10] [i_13]))))));
                        var_43 = ((/* implicit */long long int) 52U);
                        var_44 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_13 [i_10 - 2] [i_13] [i_13] [i_13]))))));
                        arr_50 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((arr_10 [i_0] [i_1] [i_10] [i_10] [i_1]), (((/* implicit */unsigned int) var_6))));
                    }
                    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                }
                var_46 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_0 + 2] [i_0] [i_0] [i_0 - 3])) || (((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0 - 1] [i_1] [i_1])))) && (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    var_47 |= ((/* implicit */unsigned short) (~((~(arr_19 [i_0] [i_0] [(unsigned short)6] [i_0])))));
                    var_48 = ((/* implicit */signed char) var_17);
                    var_49 = ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) (unsigned short)48420)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))));
                }
            }
        } 
    } 
    var_50 = ((/* implicit */int) max((((/* implicit */unsigned int) var_1)), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_61 [i_15] [i_16] [i_16] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 692036941U)) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_10))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (arr_46 [i_15] [i_15] [i_15] [i_15]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 3) 
                {
                    for (unsigned short i_18 = 3; i_18 < 11; i_18 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_60 [i_17] [i_17] [i_18])))))), (((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) (unsigned short)8176)))))));
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? ((+(((/* implicit */int) arr_59 [i_17] [i_17 - 2] [i_18 + 2])))) : (((/* implicit */int) var_9))));
                            var_53 = ((/* implicit */short) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (-1375118350) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123)))))))), (max((arr_41 [i_17 + 1] [i_18] [i_18 + 2] [i_18 - 3] [i_18] [i_18]), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20198))) : (arr_49 [i_17] [i_17])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
