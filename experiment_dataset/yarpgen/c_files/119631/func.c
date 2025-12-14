/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119631
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
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned char) ((((unsigned int) var_10)) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_3 [i_0 - 3]))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (signed char)118)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 4; i_3 < 23; i_3 += 3) 
                {
                    arr_13 [i_0] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) var_1);
                    var_16 = ((/* implicit */long long int) (unsigned short)57779);
                }
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_18 [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2277834994U)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) (-(((arr_15 [i_0] [i_0]) ? (((/* implicit */int) (short)-12920)) : (((/* implicit */int) var_10))))));
                        arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (short)-12920)))));
                        var_18 -= (short)12920;
                        arr_22 [(unsigned short)21] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)35306))))) + (var_7)));
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((1216145685) - (var_4))));
                        arr_27 [i_0] [i_1] [i_2] [i_4] [i_6] = ((/* implicit */_Bool) (unsigned char)60);
                        var_20 = ((/* implicit */unsigned int) arr_10 [(unsigned char)22] [i_2] [i_1]);
                        var_21 = ((/* implicit */unsigned short) ((arr_20 [i_0 - 1]) ? (((/* implicit */int) (_Bool)0)) : (var_6)));
                    }
                }
                for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    arr_30 [i_0] = ((/* implicit */int) ((unsigned int) ((var_4) >= (((/* implicit */int) (unsigned short)35296)))));
                    arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_29 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 1] [i_0] [i_0 + 3]);
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12921)) ? (((/* implicit */int) (short)12920)) : (((/* implicit */int) ((-4571432819567351747LL) > (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)-12923)) + (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_0 - 1]))));
                }
                var_24 &= ((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35306)))) + (((/* implicit */int) var_8)));
                arr_32 [i_2] [i_1] [i_0] [i_0] = (+(((/* implicit */int) arr_16 [i_0 + 3] [i_0 + 2] [i_0] [i_0] [i_2 - 1])));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_25 = var_8;
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned char i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_39 [i_1] [i_1] [i_1] [(short)7] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) var_11));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [7] [i_0 - 1] [i_0 + 1] [i_0 + 3]))));
                            var_27 ^= ((/* implicit */unsigned long long int) (short)-27584);
                            arr_40 [i_1] = ((/* implicit */unsigned long long int) arr_29 [i_9 - 1] [i_1] [i_8] [i_0 - 3] [i_10 + 1] [i_0]);
                        }
                    } 
                } 
            }
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
            {
                var_28 += ((/* implicit */signed char) min((max((((arr_8 [i_0] [i_1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (arr_23 [i_0] [7ULL] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((unsigned short) (_Bool)0)))));
                var_29 = ((/* implicit */unsigned char) (short)12927);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((arr_33 [i_0] [21LL] [i_12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [21LL] [i_12] [(unsigned short)10] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    arr_46 [i_0] [21ULL] [i_1] [i_11] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)12922)) ^ (((/* implicit */int) arr_28 [i_0] [i_0] [12ULL] [12ULL] [i_12] [i_12]))));
                    var_30 = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_12] [i_11] [i_0] [i_0] [i_0])) - (var_4))) >= ((+(((/* implicit */int) arr_14 [i_1] [(unsigned char)17]))))));
                }
                arr_47 [i_0] [i_0] [i_0] [i_0] = ((short) var_4);
                var_31 = ((/* implicit */signed char) var_8);
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
            {
                arr_51 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */unsigned char) max((max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) ^ (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13])))))))));
                arr_52 [i_0] [i_1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)87))))) ? (max((var_5), (((/* implicit */unsigned long long int) max((arr_36 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 3]), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [i_13] [i_0])))));
            }
            var_32 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2] [i_0])) ? (arr_9 [i_0 + 2] [i_0] [i_1]) : (arr_9 [i_0 + 1] [i_1] [i_0])))));
        }
        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
        {
            arr_55 [i_0] [i_14] [i_14] = arr_14 [i_0] [i_14];
            arr_56 [i_0] = ((/* implicit */unsigned short) ((short) 2147483647));
        }
        /* vectorizable */
        for (unsigned int i_15 = 3; i_15 < 23; i_15 += 4) 
        {
            var_33 += ((/* implicit */_Bool) 6731337482173159495ULL);
            var_34 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)12922))))));
            var_35 = ((/* implicit */unsigned short) (unsigned char)146);
            var_36 = ((/* implicit */unsigned long long int) ((_Bool) (short)25396));
        }
    }
    var_37 = ((/* implicit */_Bool) (+(((int) var_5))));
}
