/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16233
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
    var_14 |= ((/* implicit */signed char) ((long long int) (~(min((var_1), (((/* implicit */long long int) var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((short) (+(((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                    arr_8 [i_0] [i_0] [i_0] [16U] |= ((/* implicit */unsigned short) 4294967295U);
                }
                /* LoopSeq 4 */
                for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    var_15 *= ((((/* implicit */long long int) ((/* implicit */int) ((var_0) == (((/* implicit */long long int) arr_9 [i_0] [i_0])))))) < (min((((/* implicit */long long int) 1944698325U)), (var_1))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_2), (448257870U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_4]), (((/* implicit */signed char) arr_10 [i_1] [i_0] [i_5])))))) : (max((var_1), (((/* implicit */long long int) 217993236U))))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_0] [i_3] [i_0] [i_5])), ((short)1379)))) ? (arr_3 [i_0] [i_0] [i_0]) : (((((unsigned int) arr_5 [i_4] [i_1] [i_3] [i_3])) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1830165386))))))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_18 &= ((/* implicit */unsigned short) 562949953421311LL);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))) : (var_13)))) ? (min((((/* implicit */long long int) 1040187392U)), (-576460752303423488LL))) : (var_13)))) ? (min((((var_8) / (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) (signed char)98)))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_15 [i_1] [i_0]))))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_5), (arr_15 [i_0] [i_0]))))))) ? (max((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_7] [i_8] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_7] [i_8]))) : (var_9))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)12)), (arr_16 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1356)))));
                        }
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_6]))) ? (((/* implicit */int) min((arr_5 [i_0] [i_0] [i_1] [i_6]), (arr_5 [i_1] [i_1] [i_1] [i_1])))) : ((((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_2)) ? (-576460752303423463LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_11)))), (-576460752303423472LL)));
                }
                for (int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_8) - (arr_17 [i_9] [i_1] [i_0])))) ? (((/* implicit */int) (unsigned short)47800)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89)))))))));
                    var_23 = max((max((min((arr_17 [i_0] [i_1] [i_9]), (576460752303423448LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0])));
                    var_24 = ((/* implicit */_Bool) min((min((((((var_9) + (9223372036854775807LL))) >> (((/* implicit */int) var_5)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_9] [i_1] [i_0])) : (((/* implicit */int) (short)4394))))))), (((/* implicit */long long int) (signed char)79))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned char) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_2))) <= ((+(448257893U)))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((_Bool) arr_27 [i_11 + 2] [i_11 + 1] [i_11 - 1])))));
                            arr_33 [i_11] [i_0] [i_9] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) -7129885462243983799LL))) || (((/* implicit */_Bool) (signed char)-114)));
                        }
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_0]))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_30 = arr_11 [i_12] [i_9] [i_9] [i_0] [i_1] [i_0];
                        arr_36 [i_0] [i_1] [i_0] [i_0] [i_12] = ((/* implicit */_Bool) (+(((long long int) var_10))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (min((((/* implicit */unsigned int) (short)-1356)), (1944698311U)))))) ? (min(((~(1032192U))), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_33 = min((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0])), (min((((/* implicit */long long int) ((signed char) 1944698338U))), ((+(var_13))))));
                }
                var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) 49575593)) == (13U)));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) - (7264596592356729849LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14583)) ? (arr_16 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((((min((var_1), (arr_17 [i_1] [i_0] [i_0]))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-4394)) + (4424))) - (29))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2365829547U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1]))) : (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (min((arr_28 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) -1389424563))))))));
                /* LoopNest 3 */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                var_36 = var_6;
                                arr_48 [i_0] [i_1] [i_14] [i_14] [i_0] [i_16] = ((/* implicit */short) (~((~(min((((/* implicit */long long int) arr_41 [i_0] [i_1] [i_15] [i_16])), (arr_17 [i_16] [i_1] [i_1])))))));
                                var_37 = ((/* implicit */long long int) arr_42 [i_0]);
                                var_38 = ((/* implicit */signed char) ((min((var_6), (arr_37 [i_0] [i_1] [i_1] [i_1]))) ? (min((var_9), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_14] [i_1] [i_0]))) < (3818703698U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
