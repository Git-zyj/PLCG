/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183322
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
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5507561636158107567ULL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)68)))) : ((-(((/* implicit */int) var_15))))))) ? (((/* implicit */int) max(((unsigned short)19517), ((unsigned short)46019)))) : (((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (2147483621))))));
            var_20 = (+(((/* implicit */int) (signed char)(-127 - 1))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) var_0);
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_2 - 3] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_3 [i_3 - 4] [i_3] [i_3])) : (min((((/* implicit */int) arr_0 [i_0])), (arr_7 [i_3] [i_0])))))));
                    arr_11 [i_3] [i_3] [i_0] [(short)4] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_0 [i_2 - 4]), (arr_0 [i_2 + 1])))), (((((/* implicit */int) ((((/* implicit */long long int) var_9)) < (1256197188235277207LL)))) / (((((/* implicit */_Bool) 1838934980U)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_9 [(signed char)1] [i_0]))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) var_0);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */int) arr_13 [i_4] [i_4])), (var_1))) & (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [(_Bool)1] [i_4]))))) : (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_0))))))))))));
    }
    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 10; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) arr_3 [i_5] [i_6] [i_7]);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 928755834U))));
                        var_25 ^= ((arr_24 [i_5 + 2] [i_8] [(signed char)9] [(signed char)9] [i_8]) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_5])) - (((/* implicit */int) min((var_8), (((/* implicit */short) arr_4 [i_5] [(unsigned char)1] [(short)10])))))))));
                        arr_27 [i_8 - 2] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned char) var_1);
                    }
                    arr_28 [i_5 - 3] [0] [i_5 - 3] = ((/* implicit */unsigned short) arr_15 [i_6]);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)12))));
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_27 ^= ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_5 - 3] [i_5 + 1] [i_5 - 3])) != (((/* implicit */int) arr_0 [i_5 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-20088)) < (((/* implicit */int) (short)-32759)))))) : (var_10)));
                        arr_32 [i_5] [i_5] [i_7 + 3] [i_7] [i_5 - 1] [i_9] = ((/* implicit */short) arr_23 [i_6] [i_7 - 1] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_35 [i_6] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_6 [i_5] [i_5]), (((/* implicit */long long int) arr_19 [6] [i_6])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (arr_20 [i_6]))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) >> (((((/* implicit */int) var_14)) - (86))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 3; i_11 < 9; i_11 += 1) 
                        {
                            arr_38 [i_5] [i_11] [(_Bool)1] [(signed char)9] [(_Bool)1] [(unsigned char)5] = ((/* implicit */_Bool) var_15);
                            arr_39 [i_11] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_7))))), ((-(var_10)))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_23 [i_5 - 3] [i_7 - 1] [i_11 - 3])) ? (arr_23 [i_5 + 2] [i_7 + 1] [i_11 + 3]) : (arr_23 [i_5 + 1] [i_7 - 1] [i_11 + 2]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1245852327)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned char)230))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((-1406574335550229905LL) < (((/* implicit */long long int) 4294967286U))));
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) var_2);
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (((+(((unsigned long long int) arr_20 [i_6])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (unsigned short)27749))) != (var_2))))))))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)244)) - (2083310048))))));
                    }
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_48 [i_5] [i_6] [i_6] [i_13] [i_5]))) << (((min((arr_47 [i_5 - 1] [i_6] [i_7] [i_13] [i_7]), (((/* implicit */int) arr_29 [i_5] [i_5] [i_7] [(signed char)9] [i_13] [9U])))) + (1936792662))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_24 [8ULL] [i_6] [i_6] [i_6] [i_6]) : (var_9)))) ? (max((arr_24 [i_5] [i_6] [i_7] [4] [(signed char)4]), (((/* implicit */unsigned int) arr_29 [1ULL] [i_6] [i_7 - 1] [i_5] [i_14] [(signed char)11])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_13] [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_36 [i_14 + 2] [i_13] [i_7] [i_13] [0LL]), (((/* implicit */unsigned char) var_5))))))))) ? (max((((/* implicit */unsigned long long int) arr_36 [i_7 - 1] [i_7 + 3] [i_7 - 1] [i_13] [i_7 + 2])), (arr_44 [i_7] [i_7 + 2] [i_7 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_7 [i_7] [(short)0]) : (((/* implicit */int) (short)16128))))) ? (((((/* implicit */_Bool) arr_20 [i_14])) ? (((/* implicit */unsigned int) arr_23 [0LL] [i_6] [(unsigned char)11])) : (var_10))) : ((~(3889058895U))))))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 1) 
                        {
                            arr_51 [i_5] [i_6] [i_5] [i_6] [i_15] [i_5] = ((/* implicit */unsigned char) 3000877280U);
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_36 [i_5] [i_5] [i_7 + 3] [i_13] [i_15]))));
                            var_36 ^= ((/* implicit */_Bool) var_5);
                            arr_52 [i_5] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_18 [i_5] [i_6] [i_7 + 1])), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_30 [i_15] [i_13] [5LL] [i_6] [i_5])) : (arr_8 [i_5 - 3])))) ^ (arr_6 [i_5 - 2] [i_15 - 2])))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_37 = ((((/* implicit */_Bool) 2733617734390883648LL)) ? (((((/* implicit */_Bool) 16159223271075905775ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_43 [i_6] [4U] [i_16])), ((unsigned short)41221)))))) : (((/* implicit */int) (_Bool)1)));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((272735048U) + (4294967262U))) >= (((/* implicit */unsigned int) arr_47 [10] [i_13] [(signed char)8] [i_6] [i_5])))))));
                        }
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_1 [i_5]))))) ? (arr_6 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_33 [i_5] [i_5] [i_5] [i_5]))))));
                    }
                    var_40 += ((((/* implicit */_Bool) max((arr_42 [i_5 + 2] [i_7 - 1] [(_Bool)1] [(_Bool)1]), (arr_42 [i_5 - 3] [i_7 - 1] [i_7 - 1] [i_7])))) ? (((arr_42 [i_5 - 3] [i_7 + 2] [i_7 + 2] [i_7 - 1]) / (((/* implicit */int) var_4)))) : (arr_42 [i_5 - 3] [i_7 + 3] [10] [i_7 - 1]));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_17 = 3; i_17 < 11; i_17 += 4) 
        {
            arr_58 [i_5] [i_5 + 2] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_50 [i_17] [i_17] [i_17] [i_5] [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)4)))))))), (min((var_13), (((/* implicit */unsigned short) (unsigned char)145))))));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    {
                        var_41 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_17 + 1] [7ULL])) ? (arr_60 [i_17 + 1] [6]) : (arr_60 [i_17 - 3] [i_19])))) < (((((_Bool) arr_42 [i_5] [i_5] [i_18] [i_19])) ? (arr_15 [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_45 [i_17] [i_17 - 1] [i_17] [3U] [i_5 - 3] [i_5])))))));
                        arr_64 [i_5] [4U] [i_5] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-2)) ? (((((/* implicit */_Bool) arr_47 [i_5 - 2] [i_5 + 2] [i_17] [i_17 - 2] [i_17 - 3])) ? (arr_24 [i_19] [i_18] [i_17 + 1] [i_5 - 3] [i_5]) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) arr_23 [i_5 + 1] [i_17] [i_17]))));
                        /* LoopSeq 2 */
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                        {
                            arr_67 [i_5] [(signed char)6] [i_18] [i_19] [i_20] = ((/* implicit */long long int) (~(((int) (short)-3197))));
                            arr_68 [i_5] [i_5 - 3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) ((-1215774097) / (((/* implicit */int) (unsigned short)30187))))), (var_2))));
                            arr_69 [(_Bool)1] [4ULL] [i_18] [(signed char)0] [i_18] = ((/* implicit */short) var_4);
                        }
                        for (signed char i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
                        {
                            arr_74 [i_5] [i_21] = ((/* implicit */long long int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) * (12939182437551444049ULL))), (((12961377953300430884ULL) * (((/* implicit */unsigned long long int) 2074652721U))))))));
                            var_42 = ((((/* implicit */_Bool) min((arr_71 [i_5] [i_5] [i_5 - 1] [i_17 + 1] [i_18] [i_19] [i_21]), (arr_47 [i_17 - 1] [i_5 - 2] [i_18] [5] [i_21])))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_19 [i_18] [(signed char)2])))))) < (((((/* implicit */_Bool) 5485366120409120733ULL)) ? (3896034052945538487LL) : (((/* implicit */long long int) 1215774084))))))));
                        }
                        var_43 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)11)))) ? (((/* implicit */int) ((short) arr_30 [i_19] [i_5 - 2] [i_17] [i_5 - 2] [i_5]))) : (((((/* implicit */_Bool) 348546498)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)-75))))));
                    }
                } 
            } 
            arr_75 [(short)11] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_2) * (((/* implicit */unsigned long long int) arr_18 [i_5] [8] [i_17])))) : (((/* implicit */unsigned long long int) ((((arr_45 [i_17] [(short)6] [i_17] [(_Bool)1] [(_Bool)1] [i_5]) + (2147483647))) << (((-1841915608) + (1841915609)))))))));
        }
        var_44 ^= ((/* implicit */long long int) var_12);
        var_45 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3102300708U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [0LL] [i_5 + 2] [0LL] [i_5] [i_5] [(_Bool)1] [i_5 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))))) < (((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) 11U)), (5485366120409120732ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
