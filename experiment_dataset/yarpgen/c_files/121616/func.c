/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121616
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
    var_18 = ((/* implicit */unsigned char) ((signed char) var_2));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_8 [i_3] = ((/* implicit */short) min((max((((/* implicit */long long int) (~((-2147483647 - 1))))), (-9059912499281870879LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_0])) : (var_11))))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            var_19 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) -557330368)), (4520612795919480881ULL))) / (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_0] [i_0] [i_3])))));
                            arr_12 [i_3] = ((/* implicit */unsigned char) (+(557330371)));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46406))))) ? (((/* implicit */unsigned int) -557330374)) : (((((/* implicit */_Bool) -557330393)) ? (min((((/* implicit */unsigned int) (unsigned short)19135)), (4187445263U))) : (251319907U)))));
                            var_21 -= ((/* implicit */unsigned long long int) (~(var_11)));
                            arr_15 [i_5] [i_0] [i_3] [i_3] [i_5] [i_3] [i_5] = ((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)493)) ? (((/* implicit */long long int) -557330362)) : (1933718842250918430LL))) : (((/* implicit */long long int) (~(4043647384U)))))))));
                            var_22 -= ((/* implicit */int) (short)511);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (signed char)-54))));
                        }
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) min((min(((~(-1933718842250918458LL))), (((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (6268425824735576141LL))))), (((/* implicit */long long int) (~((-(((/* implicit */int) var_0)))))))));
                            arr_19 [i_3] = ((/* implicit */short) var_17);
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) (unsigned char)190);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? ((+(arr_21 [i_1] [i_3] [i_2] [i_1] [i_0]))) : (((/* implicit */long long int) min((arr_22 [i_2] [i_3] [i_3] [i_3] [i_7]), (((/* implicit */unsigned int) ((arr_13 [i_7] [i_1] [i_3] [i_3] [i_7] [i_3]) >= (6268425824735576153LL)))))))));
                            var_27 |= ((signed char) 4294967292U);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (4611686018427387903LL))))));
                                var_28 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)707)), (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)41971), (((/* implicit */unsigned short) (short)32750)))))) : (var_6)))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(((long long int) var_7)))) / (((/* implicit */long long int) (+(3135355355U))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (int i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            var_30 *= ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)56017)), (-4611686018427387884LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)112)) : ((-(((/* implicit */int) (unsigned short)15)))))))));
                            arr_37 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = (~(((/* implicit */int) (signed char)36)));
                            var_31 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_0 [i_11 - 1])) : (((/* implicit */int) (short)-4524)))), (((/* implicit */int) arr_0 [i_11 - 2]))));
                            var_32 *= ((/* implicit */signed char) arr_21 [i_10] [i_10] [i_10] [i_10] [i_10]);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_34 [i_0] [i_1] [i_2] [i_2] [i_10] [i_11]), ((unsigned short)65517))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-60))) : (arr_14 [i_11] [i_11] [i_11 - 2] [i_11] [i_11])))));
                        }
                        for (int i_12 = 3; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) 2460462553U)) ? (((/* implicit */long long int) var_16)) : (-1529530986101136200LL)))));
                            var_35 = ((/* implicit */unsigned char) ((int) ((-10LL) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_12 - 2] [i_10] [i_12 + 1] [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 19; i_13 += 3) /* same iter space */
                        {
                            var_36 += ((/* implicit */short) var_4);
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) 4294967289U)) ? (var_14) : (((/* implicit */int) (unsigned char)112)))))))));
                            arr_44 [i_0] [i_0] [i_2] [i_10] [i_13] [i_13] [i_1] = ((/* implicit */int) (unsigned short)30355);
                            var_38 = ((/* implicit */int) ((unsigned short) var_9));
                        }
                    }
                }
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (max((((/* implicit */long long int) (_Bool)0)), (-4285263022828942506LL))))))));
                arr_45 [i_0] = ((/* implicit */unsigned int) (((~(1731299710))) & (((/* implicit */int) ((3796279143849766129LL) > (5892288903095302517LL))))));
                /* LoopSeq 1 */
                for (int i_14 = 3; i_14 < 19; i_14 += 2) 
                {
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (short)-6727)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)32765)))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            {
                                var_41 = ((-3796279143849766139LL) + (((/* implicit */long long int) (-(((int) (short)-32752))))));
                                var_42 ^= min((((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_16])) ^ (((/* implicit */int) (signed char)49)))), (((/* implicit */int) (short)32740)));
                                arr_54 [i_14] [i_1] [i_16] [i_14] [i_15] = ((/* implicit */unsigned char) 2147483625);
                            }
                        } 
                    } 
                    var_43 |= ((/* implicit */long long int) (short)-21229);
                }
            }
        } 
    } 
    var_44 |= ((/* implicit */unsigned short) var_1);
    var_45 = ((/* implicit */int) var_9);
    var_46 -= ((/* implicit */short) ((int) var_17));
}
