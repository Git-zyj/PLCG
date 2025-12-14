/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176339
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
    var_11 = ((/* implicit */int) 3749951362U);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) 3749951362U);
                    var_13 = ((/* implicit */unsigned char) arr_3 [i_2]);
                    var_14 = ((/* implicit */short) 5285791084017926918ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) <= (18446744073709551615ULL)))), ((+(arr_11 [(unsigned short)2] [i_2] [(_Bool)1] [i_4]))))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1ULL), (((/* implicit */unsigned long long int) (unsigned short)44149))))) && (((/* implicit */_Bool) (unsigned short)6017))));
                                arr_17 [i_0] [i_0] [7LL] [i_1] [i_2] [i_3 - 4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) -2147483638));
                                var_16 = ((/* implicit */int) (unsigned char)123);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] [i_5] [6U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((arr_2 [i_5]), (((/* implicit */unsigned char) arr_19 [i_6] [i_5]))))), (((unsigned short) arr_19 [i_0] [i_5]))));
                    var_17 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) -2147483638)), (var_1)))));
                    var_18 = max((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_12 [i_0] [i_0] [11ULL] [i_5] [5] [i_6])))), ((-(((/* implicit */int) arr_12 [i_0] [i_6] [i_0] [i_5] [i_5] [i_0])))));
                    arr_26 [i_0] [i_0] = ((/* implicit */signed char) arr_20 [i_6] [i_5] [i_0]);
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2274665604U)) ? (min(((-(arr_3 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)25))))))) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551613ULL) <= (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551614ULL)))))))));
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) var_10)))))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (3749951362U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_9 [i_0] [i_0] [i_0] [3U]) % (((/* implicit */int) var_0))))), (arr_14 [8LL] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) max((arr_7 [i_0] [(unsigned char)3] [(unsigned char)3]), (((/* implicit */unsigned int) var_8))))), (18446744073709551600ULL)))));
    }
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(8ULL))))));
        var_21 -= ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) var_1);
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_37 [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((((arr_20 [i_10] [i_10] [i_10]) - (((/* implicit */int) var_0)))) % (((((/* implicit */_Bool) 475400130U)) ? (((/* implicit */int) (unsigned short)6017)) : (((/* implicit */int) (unsigned short)24))))));
                var_23 = arr_24 [i_8] [i_9];
                var_24 -= ((/* implicit */unsigned int) 18446744073709551614ULL);
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3749951362U)) ^ (var_7)))) ? (var_1) : (((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */unsigned long long int) var_7)) : (16921303899665417119ULL)))));
            }
            /* LoopNest 2 */
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_26 = var_0;
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_32 [i_8] [i_8] [i_8])), (var_9))), (max((var_9), (((/* implicit */unsigned int) (unsigned char)29))))))) <= (((((arr_18 [(unsigned char)5] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)12)))))))));
                        var_28 ^= ((/* implicit */_Bool) max((18446744073709551598ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((arr_35 [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((-2147483621) <= (((/* implicit */int) (_Bool)1)))))) % (arr_34 [i_11 + 1])));
                        }
                    }
                } 
            } 
            arr_46 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_8] [i_9] [i_8] [i_8] [i_9] [i_8]))))) <= (var_9)));
        }
        var_31 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)2884)), (330261468)));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                var_32 -= ((/* implicit */unsigned char) ((15679306396402913274ULL) - (((/* implicit */unsigned long long int) 536608768))));
                /* LoopSeq 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_33 = arr_9 [i_15] [i_14] [i_8] [i_16];
                    arr_54 [i_8] [i_14] [i_15] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 2 */
                    for (long long int i_17 = 1; i_17 < 8; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_17])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_15] [i_8])))) || (((/* implicit */_Bool) arr_55 [i_16] [i_16] [i_15] [i_14] [i_16])))))) | (458752U))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1337374530173833071LL), (((/* implicit */long long int) var_10))))) ? ((~(max((((/* implicit */unsigned long long int) arr_49 [i_16] [i_14] [i_14] [i_8])), (arr_18 [i_14] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_32 [i_17] [i_17 - 1] [i_17 - 1])), (var_6)))))));
                        arr_58 [i_8] [i_8] [i_17] [i_8] [i_8] = ((/* implicit */unsigned long long int) max(((!(((-4640621224432518433LL) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((((((/* implicit */_Bool) var_6)) ? (4ULL) : (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8] [(unsigned char)10]))))))))));
                    }
                    for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) min((max((max((((/* implicit */int) var_4)), (1012172844))), (((/* implicit */int) (unsigned short)16176)))), (((/* implicit */int) var_6))));
                        arr_63 [i_8] [i_14] [i_14] [i_16] [9ULL] = ((/* implicit */unsigned long long int) var_10);
                        arr_64 [9ULL] [i_14] [i_15] [i_16] [i_18] [i_18] = ((/* implicit */unsigned short) arr_19 [i_16] [i_8]);
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536608768)) ? (((/* implicit */unsigned int) -536608768)) : (3128812081U)))) ? (-330261441) : (((/* implicit */int) (unsigned char)7))));
                    arr_67 [i_8] [8] [i_8] [i_8] = ((/* implicit */short) var_10);
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_62 [i_8] [i_14] [i_15] [i_19] [i_19])) != (max((arr_44 [i_8] [i_8] [i_14] [i_15] [i_19] [i_19] [i_19]), (arr_0 [i_8])))))) == ((+(arr_20 [i_8] [i_19] [i_15])))));
                    var_39 = ((/* implicit */unsigned int) min((((-330261468) + (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 330261476)) <= (12443393761828646821ULL))))));
                }
                arr_68 [i_8] [i_8] [i_8] [i_15] = ((/* implicit */signed char) (unsigned char)0);
            }
            arr_69 [i_8] [(unsigned short)8] [i_8] = ((((/* implicit */_Bool) max((11030344898406201603ULL), (arr_61 [i_14] [i_14] [7LL] [(unsigned short)2] [i_8] [(unsigned short)2])))) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) arr_36 [i_8])));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_73 [i_20] = ((/* implicit */unsigned long long int) 3749951362U);
            arr_74 [i_20] [i_20] [i_20] = max((((/* implicit */unsigned long long int) min(((unsigned char)86), (((unsigned char) var_9))))), (min((((/* implicit */unsigned long long int) ((576460752303423487LL) % (((/* implicit */long long int) 3128812078U))))), (17891214011087412885ULL))));
        }
    }
    var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-65)), ((unsigned char)239))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) / (4393751543808ULL)))))) ? (((var_10) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 536608787)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (18446739679958007820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_4)))))))) ? (var_2) : ((+(min((18286534501900382954ULL), (((/* implicit */unsigned long long int) var_5))))))));
}
