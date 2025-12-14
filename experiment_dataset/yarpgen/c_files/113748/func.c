/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113748
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_18 = ((long long int) var_11);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [3U] [i_4] [i_2] |= ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (unsigned char)233)))));
                                var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_4 - 1] [i_4] [i_4 - 2] [(unsigned short)0])))));
                                arr_14 [i_0] [i_0] [(unsigned char)8] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(var_4)));
                                var_20 = ((/* implicit */short) var_7);
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [12U] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_6 - 3])) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_0] [i_6 + 3])));
                        var_22 -= ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_1)))));
                    }
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min(((+((+(var_9))))), (((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)75)), ((unsigned short)65530))), (((/* implicit */unsigned short) max((var_5), (var_6))))))))))));
                        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)37))));
                        var_25 *= ((/* implicit */unsigned short) (~((~(((((/* implicit */int) (unsigned char)187)) << (((9679428742149819417ULL) - (9679428742149819397ULL)))))))));
                    }
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_8] [6U] [i_5] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))), (var_10)))));
                        var_27 = ((/* implicit */signed char) (-(((((/* implicit */int) max((var_0), ((signed char)-60)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
                        arr_27 [12ULL] [12U] [12ULL] [i_8] |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15))));
                        var_28 -= ((/* implicit */_Bool) (-((-(arr_21 [i_8 - 1] [6U] [i_8 - 1] [i_8 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_29 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) 4842435102214155656LL)) ^ (arr_22 [(short)3] [i_5] [(unsigned char)1]))) : ((-(arr_1 [i_1] [i_9])))))));
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) -8930834214999959082LL))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [(unsigned short)0])), (arr_31 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((+((~(arr_2 [i_0])))))));
                                var_32 -= arr_10 [i_0] [(unsigned char)1] [i_5];
                            }
                        } 
                    } 
                    var_33 = (-(((unsigned int) 0LL)));
                }
                var_34 += ((/* implicit */signed char) var_2);
                /* LoopNest 3 */
                for (unsigned int i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 4; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 4; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(signed char)3] [i_12 - 4])) ? ((-(((((/* implicit */long long int) arr_33 [i_0] [4LL] [i_1] [11] [(unsigned char)6] [i_13] [i_13 - 4])) | (arr_31 [5LL] [i_11 + 1] [i_1] [i_0]))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) arr_39 [i_13] [i_12 + 3] [5] [(short)5] [i_1] [i_0])))))))));
                                var_36 -= ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                } 
                var_37 = arr_38 [3LL] [i_0] [i_0] [i_0] [i_1] [i_1];
                arr_43 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_22 [i_1] [i_0] [i_0]) >= (arr_5 [i_0]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */int) (~((((-(var_1))) | (((/* implicit */long long int) max((((/* implicit */int) var_11)), (var_4))))))));
    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) > (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (int i_14 = 1; i_14 < 11; i_14 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                for (unsigned int i_17 = 2; i_17 < 12; i_17 += 1) 
                {
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (_Bool)0))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_55 [i_15] [i_15])))) < (((/* implicit */int) max((arr_52 [i_14 + 2] [i_14 + 1]), (arr_52 [i_14 + 2] [i_14 + 1])))))))));
                        var_42 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) var_8)) : (var_4)))))), ((-(var_13)))));
                        var_43 = ((/* implicit */short) var_12);
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11; i_18 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((short) (unsigned char)9)))));
        var_46 = ((/* implicit */long long int) 2630296636U);
    }
}
