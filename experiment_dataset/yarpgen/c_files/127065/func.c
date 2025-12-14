/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127065
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_4))))))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))));
    var_18 = ((/* implicit */int) (unsigned char)222);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */int) ((((/* implicit */long long int) (+(arr_4 [i_0] [i_0] [(_Bool)1])))) == (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)33))))) ? (((/* implicit */long long int) max((1438753240U), (((/* implicit */unsigned int) 0))))) : (max((((/* implicit */long long int) (unsigned char)104)), (arr_3 [(unsigned char)10])))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1670730806) / (((/* implicit */int) (unsigned char)148))))) ? (max((((/* implicit */unsigned long long int) (short)32758)), (arr_9 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((arr_0 [i_2] [i_1]), (((/* implicit */long long int) arr_8 [i_0] [i_2])))))))) ? (((long long int) (short)-1024)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)187)) >> (((-813514498081282345LL) + (813514498081282348LL)))))));
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_1 - 1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) (+(6227399850930628034LL))))));
                }
                for (short i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [i_3] [i_3])) ? (arr_7 [i_3 - 1] [i_3] [i_3] [i_1]) : (arr_7 [i_3 - 1] [i_3] [i_3] [i_1]))))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) -676179491650384735LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_16 [i_5] [i_4] [i_3] [i_0]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_6 + 1])) >= (((/* implicit */int) arr_18 [i_0] [i_6 + 1]))));
                            arr_24 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_4])) : (((/* implicit */int) ((-676179491650384735LL) >= (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            arr_25 [i_0] [i_4] = ((/* implicit */int) (short)2240);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((3496776136970993223ULL) - (3496776136970993221ULL)))));
                            arr_29 [i_0] [i_1] [i_0] [i_4] [i_7] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_3] [i_4] [i_7]);
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)42650)) || (((/* implicit */_Bool) (unsigned char)148))));
                            arr_30 [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
                        }
                        for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            arr_33 [i_0] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)9)), ((-2147483647 - 1))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8 - 2] [i_3 + 2] [i_0] [i_0])) ? ((+(arr_17 [i_8] [i_8 - 2] [i_3 + 2] [i_0] [i_0]))) : (((arr_17 [i_8] [i_8 - 2] [i_3 + 2] [i_3] [i_3]) & (arr_17 [i_8] [i_8 - 2] [i_3 + 2] [i_3] [i_0])))));
                            var_26 = ((/* implicit */unsigned char) var_13);
                            var_27 = var_12;
                            var_28 = ((/* implicit */long long int) (unsigned char)27);
                        }
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)179)), (5542384395665136232LL))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_39 [i_0] [i_0] [i_3] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_1 + 2] [i_1 + 2] [i_3 + 2] [i_3 - 4] [i_3 - 2] [i_3 + 2])) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_20 [i_9])))))));
                            arr_40 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */unsigned short) ((short) 1333217802));
                            arr_41 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_3 + 2] [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_0] [i_0]))));
                            arr_42 [i_0] [i_1] [i_3] [i_9] [i_10] = ((/* implicit */short) 1248281389850472738LL);
                        }
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_1]))))) | (((-676179491650384741LL) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9])))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_32 = (i_0 % 2 == 0) ? (((/* implicit */int) (((((~(((((/* implicit */_Bool) 0LL)) ? (-676179491650384773LL) : (((/* implicit */long long int) 1306949275)))))) + (9223372036854775807LL))) << (((arr_4 [i_0] [i_3] [i_0]) - (3239269777U)))))) : (((/* implicit */int) (((((~(((((/* implicit */_Bool) 0LL)) ? (-676179491650384773LL) : (((/* implicit */long long int) 1306949275)))))) + (9223372036854775807LL))) << (((((arr_4 [i_0] [i_3] [i_0]) - (3239269777U))) - (3021916881U))))));
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            arr_49 [i_12] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)-1)))))) ? (((((/* implicit */_Bool) (-(1421646826)))) ? (min((-1248281389850472751LL), (((/* implicit */long long int) arr_38 [i_12] [i_11] [i_3] [i_1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned char)130)) - (117)))))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_20 [i_11])))))));
                            arr_50 [i_0] [i_1] [i_3] [i_11] [i_0] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)0))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [i_1 + 2] [i_0])) ? (1248281389850472743LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            arr_55 [i_0] [i_3] [i_13] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_3]))))) / ((-(min((((/* implicit */int) (unsigned char)245)), (arr_32 [i_13] [i_11] [i_3] [i_1] [i_0] [i_0]))))));
                        }
                        arr_56 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_13 [i_3 - 3] [i_1 + 2] [i_1])))));
                    }
                    arr_57 [i_0] [i_1] [i_3] = ((/* implicit */short) ((var_1) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_3] [i_1] [i_3] [i_0] [i_3] [i_0])), (((unsigned long long int) -676179491650384741LL)))))));
                }
                for (signed char i_14 = 1; i_14 < 13; i_14 += 4) 
                {
                    arr_61 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 17557826306048LL)))) <= ((~(((arr_60 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_0] [i_0])))))))));
                    var_34 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */_Bool) 286829541)) && (((/* implicit */_Bool) arr_59 [i_14] [i_14] [i_1] [i_0]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))))), ((+((-(var_10)))))));
                }
                arr_62 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (-4772427853368297132LL)))) > (var_7))) ? (((((/* implicit */long long int) ((/* implicit */int) ((1601734296) >= (((/* implicit */int) (unsigned char)236)))))) | (-1248281389850472762LL))) : (((((/* implicit */_Bool) 2257715643143267272LL)) ? (-1248281389850472762LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))))));
            }
        } 
    } 
    var_35 *= ((/* implicit */unsigned char) var_0);
}
