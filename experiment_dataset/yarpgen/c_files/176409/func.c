/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176409
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
    var_16 = ((/* implicit */int) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (unsigned short)18877)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 13U)) ? (-3) : (((/* implicit */int) (signed char)8)))) : ((~(((int) -680252771))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (-680252754)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [9ULL])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) arr_3 [i_0]);
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-46))))) >> (((((/* implicit */int) var_7)) - (101))))))))));
            arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15331)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12813))))) ? ((+(arr_5 [(short)14] [i_1]))) : (((((/* implicit */int) ((unsigned short) var_7))) & (((((/* implicit */_Bool) -3748735386884989204LL)) ? (((/* implicit */int) (short)32315)) : (((/* implicit */int) arr_0 [i_0]))))))));
            arr_7 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */long long int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)17031)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)23622)))), (((/* implicit */int) ((short) (short)15329)))))) : (arr_4 [i_0] [i_1]));
        }
        for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            var_20 |= ((/* implicit */signed char) arr_0 [i_0]);
            var_21 += ((/* implicit */signed char) arr_9 [i_0]);
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 4; i_4 < 14; i_4 += 2) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) >> (((1802971522) - (1802971504)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_3] [i_4] [i_0]))) : (arr_10 [i_4 + 2] [i_3] [(short)7])));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((~(arr_10 [i_4] [i_4 - 3] [i_4 - 2]))) % (min((((/* implicit */unsigned int) -680252761)), (arr_10 [i_4] [i_4 - 2] [i_4 - 4]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    var_24 = ((/* implicit */signed char) ((4294967282U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(signed char)3] [i_0] [i_0])))));
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) arr_4 [(short)5] [i_3]);
                        arr_22 [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((_Bool) (signed char)-2));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_8))) == (arr_11 [i_4 + 3])));
                        arr_25 [i_0] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) != (-680252754))) ? (6784741731682187810LL) : (((/* implicit */long long int) -680252770))));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_3] [i_0] [i_8] [i_3] [i_4] = ((/* implicit */unsigned char) ((arr_15 [i_5] [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 1]) >> (((arr_15 [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) - (3840737910U)))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_5 [i_0] [i_3])));
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23622)) ? (721871349U) : (((/* implicit */unsigned int) arr_27 [i_8] [i_8] [i_5 - 1] [3U] [i_4] [i_3] [i_0]))))) ? (((18U) | (((/* implicit */unsigned int) -3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 680252782)) == (269330637U)))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        arr_33 [i_9] [i_5] [i_0] [i_3] [i_0] = ((/* implicit */long long int) var_13);
                        arr_34 [i_0] [i_4] [i_0] [i_3] [i_9] [i_0] [i_3] = ((/* implicit */short) var_13);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) 384)) ? (((/* implicit */int) arr_8 [i_4 - 3])) : (((((/* implicit */int) (_Bool)1)) % (268433408))))))));
                    }
                    var_29 = ((/* implicit */int) ((170078110685924743ULL) ^ (((/* implicit */unsigned long long int) 4025636656U))));
                }
            }
            var_30 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_17 [i_3] [i_0] [i_0] [i_0]), (arr_17 [i_3] [i_0] [i_0] [i_0])))), (-680252770)));
            arr_35 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (short)10724)) : (((/* implicit */int) var_7))))))))) | (((max((((/* implicit */unsigned int) var_3)), (3292251556U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0])))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34075)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-23616)))))))));
            arr_36 [(signed char)10] [i_3] = max(((unsigned short)58643), (((/* implicit */unsigned short) (signed char)85)));
        }
        var_32 = (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)-65)))))));
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        arr_39 [i_10] [i_10] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 721871354U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_3 [i_10]))), (((/* implicit */long long int) max((4294967294U), (((/* implicit */unsigned int) (short)9129))))))), (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_10])), ((+(((/* implicit */int) var_7)))))))));
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_14 [(short)11] [i_11] [i_11] [i_10]), (((((/* implicit */int) arr_26 [i_10] [i_10])) | (((/* implicit */int) (unsigned short)65535))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 7369859791093018904LL)) ? (((/* implicit */int) (short)-23615)) : (((/* implicit */int) var_9))))), (min((((/* implicit */long long int) arr_47 [i_12] [i_12])), (arr_46 [i_10] [(_Bool)1] [i_10] [15] [i_10] [i_12])))))));
                        /* LoopSeq 2 */
                        for (short i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) ((short) (signed char)43));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) 1U))));
                        }
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) (short)-10728);
                            var_36 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_15]))))), (((short) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (max((((/* implicit */unsigned long long int) max((-5461230832574488169LL), (((/* implicit */long long int) (_Bool)1))))), (min((arr_23 [i_15] [i_13] [i_12] [i_11] [i_10]), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3893003879U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_46 [i_15] [i_13] [i_12 + 2] [i_11] [i_10] [i_15]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))))))))))));
                        }
                        arr_55 [i_10] [i_12] [i_12] [i_13] = ((/* implicit */_Bool) (short)11548);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            arr_62 [i_16] = ((/* implicit */_Bool) -7369859791093018905LL);
            arr_63 [i_16] = ((/* implicit */unsigned int) ((arr_13 [i_16]) != (((var_3) ? (((/* implicit */int) (unsigned short)41146)) : (((((/* implicit */int) arr_44 [i_16] [i_16] [i_17] [i_16])) >> (((((/* implicit */int) (signed char)-95)) + (108)))))))));
        }
        arr_64 [i_16] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) ((arr_4 [i_16] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (_Bool)1)) % (912643736)))))));
        var_37 = ((/* implicit */_Bool) max((var_37), ((!(((/* implicit */_Bool) max((((/* implicit */short) arr_20 [i_16] [i_16] [i_16] [(short)7] [i_16])), ((short)19578))))))));
        arr_65 [3U] = (-((((!(((/* implicit */_Bool) 742986395U)))) ? (((arr_51 [i_16] [i_16] [i_16] [(_Bool)1] [i_16]) + (4294967282U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_40 [i_16] [i_16])) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_38 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (short i_18 = 0; i_18 < 23; i_18 += 2) 
    {
        for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
        {
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                {
                    var_39 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_68 [(unsigned char)20])), ((unsigned char)166)))) > (((/* implicit */int) max((var_15), (((/* implicit */signed char) arr_66 [i_20 - 1] [i_18])))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 34359738367LL))))) << (((arr_71 [i_18] [17LL] [(unsigned short)16]) + (6882983886277486762LL)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_75 [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_68 [i_18])) : (((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)-1)))))));
                        arr_76 [i_20] [i_20] [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_66 [i_18] [i_18])) | (((((/* implicit */_Bool) 1866615607)) ? (((/* implicit */int) (_Bool)1)) : (-1456492962)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54374))) : (((unsigned int) (_Bool)1)));
                    }
                    arr_77 [(short)1] [i_19] [i_20] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (unsigned short)57029)) ? (67108863) : (((/* implicit */int) arr_74 [i_18] [i_18] [i_19] [i_18] [i_20])))), (((((/* implicit */_Bool) (short)28382)) ? (((/* implicit */int) arr_74 [i_18] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) (signed char)2)))))), (((/* implicit */int) (_Bool)1))));
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (((-(((/* implicit */int) arr_72 [i_18])))) == (((((/* implicit */int) var_15)) >> (((7369859791093018913LL) - (7369859791093018895LL)))))))), (min((((/* implicit */unsigned short) ((((/* implicit */int) arr_72 [i_19 + 1])) > (((/* implicit */int) (unsigned char)167))))), (((unsigned short) (short)16927)))))))));
                }
            } 
        } 
    } 
}
