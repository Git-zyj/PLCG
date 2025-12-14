/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108654
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (unsigned short)11576))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((8147949006067290106ULL), (((arr_0 [i_0]) ^ (arr_0 [3ULL])))));
        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)250)))) ^ (var_3)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((arr_8 [i_0] [i_1]) / (((/* implicit */int) arr_5 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))) : ((-(arr_4 [i_1] [i_1] [i_0])))));
                    var_16 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) 7880955773095050044LL)) : (min((7563684283286674074ULL), (((/* implicit */unsigned long long int) (signed char)-69))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (signed char)48);
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-106))));
    }
    for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((10883059790422877541ULL), (18446744073709551614ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) || (((/* implicit */_Bool) var_6)))))) : (arr_12 [i_4])))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)16)) : (0)))) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) arr_10 [i_4 - 3])))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) * (((/* implicit */int) (short)1389))))))) ? ((-(max((((/* implicit */unsigned long long int) (signed char)-7)), (var_8))))) : (((((/* implicit */_Bool) (unsigned short)50899)) ? (((arr_12 [i_4 - 2]) - (arr_12 [i_4]))) : ((-(arr_12 [i_4])))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 639704741)), (max((arr_13 [i_4]), (((/* implicit */unsigned int) (unsigned short)65535))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)4153)), (var_1)))) ? (((/* implicit */long long int) max((arr_10 [i_4]), (4294967295U)))) : (((((/* implicit */_Bool) 2560581470U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_14 [(unsigned char)5]))))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_21 = ((/* implicit */signed char) var_5);
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) 7563684283286674074ULL);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((arr_9 [i_5]) - (arr_16 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_8 - 1] [i_8 + 1] [i_8] [i_7] [i_6] [i_5]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47005))) : (arr_18 [i_5] [3U])))))))) : (((((/* implicit */_Bool) ((2528761604U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (7563684283286674075ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4)))))))));
                        arr_24 [i_8 + 3] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_8 + 3] [i_8 + 2] [i_8] [i_8 + 3] [i_8 + 1] [i_5])) ? (max((7563684283286674061ULL), (((/* implicit */unsigned long long int) (short)-15215)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (7076795391688628536LL))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 8; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) var_1);
                    arr_33 [i_9] [i_10] [i_11] [i_11] = arr_8 [(short)9] [i_9];
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        arr_36 [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_10 + 3] [i_10 + 3] [i_10 + 2])) > (arr_31 [i_10 + 3] [i_10])));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 4; i_13 < 7; i_13 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((unsigned short) 0LL));
                            var_26 *= ((/* implicit */signed char) (unsigned char)1);
                        }
                        var_27 = ((/* implicit */unsigned char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))));
                        arr_39 [i_9] [i_9] [i_9] [i_9] |= ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9] [i_10 + 2] [i_9] [i_12])) ? (arr_22 [i_9] [i_9] [(signed char)8] [i_10 - 1] [(short)4] [(unsigned char)2]) : (arr_22 [i_9] [i_10] [i_11] [i_10 + 2] [i_11] [i_10]));
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_10] [i_11] [i_11] = ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) 83342461)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (max((((/* implicit */unsigned int) var_5)), (2528761605U)))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_17 [i_10 + 2] [i_10])))) && (((/* implicit */_Bool) max((max((11948846059830683671ULL), (11948846059830683679ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56152))) / (arr_10 [i_9])))))))));
                        var_29 = arr_37 [i_10] [i_9] [i_11] [i_10] [i_10] [i_9] [i_10];
                        var_30 = ((/* implicit */unsigned short) arr_19 [i_10 + 3] [i_10 + 1]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) max((((/* implicit */long long int) (signed char)(-127 - 1))), (8110585623988565597LL))))));
                        arr_46 [i_10] [3] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_21 [i_10 + 1])) ? ((+(((/* implicit */int) (unsigned short)29037)))) : (max((((/* implicit */int) arr_21 [2U])), (arr_8 [i_11] [11LL])))))));
                        var_32 += ((/* implicit */long long int) -1);
                        var_33 += arr_18 [i_10] [i_15];
                    }
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_49 [(signed char)5] [i_10] [i_10] [i_10] = ((long long int) 15490251096501541112ULL);
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_44 [i_9] [i_10] [i_10]))));
                        var_35 += ((/* implicit */signed char) 233018425U);
                        var_36 = ((/* implicit */int) arr_35 [i_9] [i_9]);
                    }
                    arr_50 [i_9] [8LL] [8LL] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_9] [i_10 + 2] [i_9] [i_11]))) + (var_8))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_42 [6ULL] [i_10 + 3] [i_11] [(signed char)7])) : (((/* implicit */int) arr_42 [(unsigned short)5] [i_10 + 3] [i_11] [i_9])))))));
                }
            } 
        } 
        var_37 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 18U)), (15431713664531809744ULL)));
    }
    var_38 = var_0;
}
