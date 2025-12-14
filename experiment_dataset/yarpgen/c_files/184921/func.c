/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184921
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
    var_20 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0 - 3] [i_0 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (_Bool)0)))));
        var_21 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) (+(((unsigned int) 3403002311U))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) / (((var_16) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_23 *= ((/* implicit */_Bool) ((unsigned int) ((signed char) arr_7 [i_1] [i_1 - 1])));
            var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-21549))) / (var_8)))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2164962508U)) ? (arr_4 [i_1] [i_1 + 4]) : (arr_4 [i_1 - 1] [i_1 + 1])));
        }
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                arr_15 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) (-(arr_7 [i_1 - 1] [i_1 + 2])));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)21549)) ? (arr_13 [i_1 + 3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)69))))));
                arr_16 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((((/* implicit */int) (short)-23694)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_8 [(unsigned char)9] [i_3] [i_4])))))));
            }
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (12457924500053439273ULL)))) ? ((~(((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 1])))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_28 *= ((/* implicit */unsigned char) ((int) ((((arr_4 [i_1] [2]) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))));
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                arr_23 [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)28490)))));
                var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2103058730)) ? (((/* implicit */int) (short)4248)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)-30674)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21548)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30656))) : (var_8)));
            }
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_26 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) var_9)))));
                var_31 = ((_Bool) arr_6 [i_1 - 2] [i_5] [i_7]);
                arr_27 [i_1] [i_1 - 2] [i_1] [i_5] = ((((/* implicit */int) arr_21 [i_1] [i_1] [i_7] [i_5])) >> (((/* implicit */int) arr_6 [i_1] [i_5] [i_7])));
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    var_32 *= ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)1))))));
                    var_33 = ((((/* implicit */_Bool) arr_28 [i_1 + 1] [4U] [i_1 + 2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)));
                    arr_35 [i_1] [i_5] = ((/* implicit */unsigned int) ((short) (_Bool)1));
                }
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                {
                    arr_38 [i_1 + 3] [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1869125011)) && (((/* implicit */_Bool) (short)21561))));
                    arr_39 [i_1] [i_1] [i_1] [i_1 + 2] [i_5] [i_1 + 1] = ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) ((signed char) var_19))) : (((((/* implicit */_Bool) (short)-29772)) ? (-1928433748) : (((/* implicit */int) (_Bool)1)))));
                    arr_40 [i_5] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_10])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-18910)))));
                    var_34 = ((/* implicit */_Bool) (unsigned short)8463);
                    arr_41 [(short)13] [(short)13] [(short)13] [i_8] [i_10] [i_5] = (-(arr_28 [i_1 - 2] [i_1 + 3] [i_1 - 2]));
                }
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_44 [i_1 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)21548))))) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : (((int) var_14))));
                    var_35 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 8378274992204947420ULL)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (signed char)23)))));
                }
                var_36 *= ((/* implicit */signed char) (_Bool)1);
            }
            /* LoopNest 2 */
            for (signed char i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                for (short i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    {
                        arr_52 [i_5] [i_12] [i_5] [i_5] [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((short) 1363375504));
                        var_37 *= ((signed char) (-(((/* implicit */int) (short)27918))));
                        var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_13 + 3] [i_1 + 1] [i_12])) : (((/* implicit */int) arr_32 [i_13 - 1] [i_13] [(signed char)14] [(signed char)14] [i_13 + 1] [i_13]))))));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_53 [i_1] [i_1 + 3] [i_1] [i_1] [i_1 - 2] [i_12 + 1]);
                            var_39 *= ((/* implicit */_Bool) (+(((/* implicit */int) (short)21561))));
                        }
                        for (long long int i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] [i_12] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)4))));
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), ((-(((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_5] [(_Bool)1] [i_5])) ? (8378274992204947420ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_60 [i_13] [i_12 - 2] [i_5] [i_5] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)87)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_1 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_1 - 2])) + (24700))))))));
            var_42 *= ((/* implicit */unsigned int) ((short) (_Bool)1));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_43 = ((/* implicit */unsigned short) min((var_43), (((unsigned short) (_Bool)0))));
                var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_1 + 1] [i_1] [i_1] [i_16] [i_16] [i_16] [i_17])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (_Bool)1))));
            }
            arr_66 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-61))))) ? (((/* implicit */int) arr_65 [i_1] [i_1] [i_1] [(unsigned short)2])) : (((/* implicit */int) ((signed char) (_Bool)1)))));
        }
        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-639)) ? (2681750669U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
    }
}
