/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161468
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)90))))) : (((((/* implicit */int) (signed char)90)) ^ (((/* implicit */int) (signed char)-90)))))) ^ (min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-91)) / ((-(((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_9)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_1] [i_2 - 2] [5ULL] [i_4] [0LL] [i_4] = ((/* implicit */unsigned long long int) min((3549865361U), (((/* implicit */unsigned int) (unsigned short)57780))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37510)) | (((/* implicit */int) (short)3072))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_8))))))) : (((/* implicit */int) (signed char)90))));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (signed char)83)))))) + ((+(arr_12 [i_0] [i_1] [i_1] [2] [2]))))), (((/* implicit */long long int) var_9))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) var_1)), (max((arr_4 [i_0] [i_2]), (((/* implicit */int) var_1))))))))));
                    arr_15 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))), (var_6)))) || (((/* implicit */_Bool) ((unsigned char) arr_2 [i_2 + 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            arr_22 [(signed char)10] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (_Bool)0))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_7] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_7 - 1] [i_5] [i_5]))) : (((unsigned int) var_3))));
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_6])) ? (((/* implicit */int) arr_23 [i_8 - 1] [(short)3] [i_8] [i_8])) : (2147483647)));
                            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (2668170040245584129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_5])) >= (((/* implicit */int) arr_21 [i_5]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */int) arr_28 [i_5] [i_6] [(short)14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5]))) : (arr_18 [i_5])));
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_5] [i_5] [i_5]))));
            }
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+(745101934U))))));
                    var_23 = ((arr_29 [i_5] [i_6] [i_11]) != (var_7));
                    var_24 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_21 [i_12])) || (((/* implicit */_Bool) var_9))))));
                }
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (745101935U)));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_47 [i_11] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15778574033463967485ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_11] [(unsigned short)13]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) 15778574033463967484ULL))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_43 [(_Bool)1] [i_6] [(signed char)22] [i_6] [(signed char)22]))));
                    }
                    for (int i_15 = 3; i_15 < 20; i_15 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((short) arr_45 [i_5] [i_6] [i_5] [(_Bool)1] [i_15 + 1] [i_5] [i_15])))));
                        var_28 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_23 [(signed char)10] [i_13] [22U] [i_6])))));
                        var_29 = ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) arr_27 [i_15 + 4] [i_15 - 1] [i_15] [i_15 + 4] [18LL])));
                        arr_51 [i_5] [i_11] [i_13] = ((/* implicit */long long int) var_10);
                        arr_52 [(unsigned short)1] [i_13] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (15778574033463967485ULL)));
                    }
                    var_30 = ((/* implicit */signed char) var_10);
                }
                /* LoopNest 2 */
                for (signed char i_16 = 2; i_16 < 23; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_16 - 2])) ? (var_4) : (var_4)));
                            var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [(unsigned char)15])) ? (((/* implicit */int) ((-764581050) >= (((/* implicit */int) arr_24 [i_5] [i_6] [i_11] [i_17]))))) : (((/* implicit */int) (!(arr_20 [i_5] [i_11] [i_5]))))));
                        }
                    } 
                } 
                var_33 *= ((/* implicit */_Bool) var_2);
            }
            var_34 = ((/* implicit */unsigned int) min((var_34), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) : (3549865355U)))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            for (long long int i_19 = 1; i_19 < 23; i_19 += 3) 
            {
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_5] [i_19] [i_19]))) >= (var_7)));
                    arr_66 [i_5] [i_19] [i_19] = ((/* implicit */signed char) ((((arr_54 [i_18] [i_19] [10U] [i_19 + 1]) + (2147483647))) << (((((var_4) + (1928038767))) - (16)))));
                    var_36 = var_9;
                }
            } 
        } 
    }
}
