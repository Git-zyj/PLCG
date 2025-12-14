/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184443
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 - 1])), (min(((short)17155), (((/* implicit */short) (signed char)38))))))) : (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((1230712576U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 - 1])), (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1 - 2]) ? (((/* implicit */int) ((_Bool) arr_5 [i_1]))) : (((/* implicit */int) (signed char)3))));
        arr_7 [i_1 - 2] = ((/* implicit */short) arr_4 [i_1 - 1]);
    }
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (var_2) : (var_0)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    /* LoopSeq 3 */
    for (long long int i_2 = 3; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */short) arr_5 [i_2]);
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */long long int) arr_8 [i_2 + 1])), (var_3))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_4] [i_2] [i_2 + 1] [i_5] [i_3 - 3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-14))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_2 + 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5])))))));
                        arr_24 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_8);
                        arr_25 [i_5] [i_2] [i_5 - 2] [i_5 + 1] = ((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_5 + 1]));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(arr_17 [i_5 - 1] [i_4] [i_2]))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) (_Bool)1))))) ? (arr_27 [i_6 + 1] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2]))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [12ULL]))))) ? (max((max((((/* implicit */unsigned long long int) arr_22 [i_2] [i_2 - 3] [i_2 - 1])), (var_8))), (((/* implicit */unsigned long long int) arr_9 [i_6 - 1])))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) arr_21 [i_2] [i_3] [i_3] [i_4] [i_6 + 1])), (arr_9 [i_4]))))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (min(((short)-11087), (((/* implicit */short) var_9))))));
                        arr_32 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)1)) - (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_28 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2])) : (((/* implicit */int) (short)11086))))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3] [(_Bool)1] [i_3 + 1] [i_7])) - (((/* implicit */int) ((((long long int) (short)11081)) != (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_2 - 3] [i_2 - 3] [i_3] [i_2 - 3] [i_7])))))))))))));
                        arr_33 [i_2] [i_3 - 2] [i_7] [i_2] [i_3 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) != (((/* implicit */int) (signed char)8))))), (((((/* implicit */int) arr_5 [i_4])) - (((/* implicit */int) var_10)))))))));
                        arr_34 [i_4] [i_4] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) var_11)), (arr_17 [13U] [i_3] [i_4]))))), (max((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_10))))), (var_6)))));
                    }
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_2] [i_2] [i_4])))) ? (((unsigned long long int) arr_21 [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4])))))))))) ? (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-11087)))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) min((arr_20 [i_2 - 3]), (arr_20 [i_2 - 3]))))));
                }
            } 
        } 
        arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) (+(8795824586752LL)));
    }
    for (long long int i_8 = 3; i_8 < 13; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            for (signed char i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                {
                    arr_43 [i_8] [i_8 - 2] [i_8] = ((/* implicit */short) arr_20 [i_8 + 1]);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_50 [i_8] [i_8] [i_9] [i_8] [i_10] [i_11 - 2] [i_12] = ((/* implicit */short) max((((unsigned int) var_11)), (((/* implicit */unsigned int) (signed char)3))));
                                arr_51 [i_10 + 3] [i_8] [i_10 + 3] [i_8 + 1] [i_8] [i_8 + 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (arr_22 [i_12] [i_9] [i_8 + 1]) : (arr_12 [i_10 + 3]))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_28 [i_8] [i_9] [i_10] [i_11] [1LL])), ((-(((/* implicit */int) (short)-21119)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_36 [i_8] [i_8 + 1])))))), (((arr_4 [i_8 - 1]) % (arr_4 [i_8 + 1])))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (short i_14 = 3; i_14 < 13; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 13; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 3) 
                        {
                            {
                                arr_65 [i_8] [i_15 - 1] [i_15] [i_15] [i_14] [i_13] [i_8] = ((/* implicit */signed char) min((arr_64 [i_8 - 2] [2LL] [i_14] [i_15 - 1] [i_16 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_16 + 2])))))));
                                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))), (max((arr_27 [i_15] [i_13]), (((/* implicit */unsigned long long int) (short)5754))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
                                arr_66 [i_8] [i_15] [i_13] [i_13] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21130)) ? (((/* implicit */int) (unsigned short)32752)) : (((/* implicit */int) (unsigned short)32778))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8 + 1] [i_13]))) : (arr_17 [i_8 - 3] [i_13] [i_14 - 2])))));
                    arr_67 [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_16 [i_8] [i_8] [i_14 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) >= (((/* implicit */int) arr_40 [i_8] [(short)8]))))), (min((((((/* implicit */_Bool) var_2)) ? (arr_60 [i_8] [i_13] [i_13] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_46 [i_8] [(signed char)9] [9ULL] [i_14] [i_14] [i_13])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_17 = 3; i_17 < 13; i_17 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_17])) * (((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 1; i_18 < 11; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_80 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_18 + 3])) ? (arr_4 [i_19]) : (((/* implicit */long long int) ((((/* implicit */int) arr_36 [1LL] [i_19])) >> (((var_8) - (3204726003570175974ULL))))))));
                        arr_81 [(_Bool)1] [i_18] [6ULL] [i_18] |= ((/* implicit */_Bool) (~(3489194523140470778ULL)));
                        arr_82 [i_17] [i_18] [i_18 - 1] [i_17] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_17 - 3] [i_17] [i_18 + 2] [i_19 - 1])) | (((/* implicit */int) arr_11 [i_17] [i_19 - 1] [i_20]))));
                        arr_83 [i_19 + 1] [i_18] [i_20] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_17] [i_20] [6U] [i_20]))))) ? (((((/* implicit */_Bool) var_3)) ? (4294967295U) : (arr_60 [i_17 - 1] [i_18] [i_19 + 1] [i_19] [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30842)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((short) var_0));
        var_28 -= ((/* implicit */unsigned int) ((-6380565500147349654LL) < (-3341178829039732684LL)));
    }
    var_29 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11))))))));
}
