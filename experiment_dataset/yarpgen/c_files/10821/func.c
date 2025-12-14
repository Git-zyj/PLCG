/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10821
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
    var_11 = ((/* implicit */unsigned char) ((((0U) < (6U))) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = 4528907007873634861LL;
        var_12 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))), (var_3)));
        var_13 += ((min((((var_1) + (((/* implicit */long long int) 4294967290U)))), (9205968775371445442LL))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)41))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) max((var_4), (var_4)));
                        var_15 = ((/* implicit */int) ((unsigned char) min((arr_9 [i_1] [i_2] [i_4]), (arr_9 [i_1] [i_2] [i_3]))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29095)) ? (((/* implicit */unsigned int) max((arr_11 [0LL] [(unsigned short)14] [i_3] [i_2] [i_4]), ((+(((/* implicit */int) (unsigned short)3))))))) : (min((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_3] [i_3] [i_4])), (arr_5 [i_4])))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [(unsigned char)17] [i_2] [i_3] [i_5] [i_6])) ? (0ULL) : (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)215)), (arr_11 [(unsigned short)1] [i_2] [i_2] [i_2] [i_2]))))));
                            arr_18 [(_Bool)1] [i_3] [i_5] [i_6] = arr_4 [i_1];
                        }
                        arr_19 [i_1] [i_2] [i_3] [i_2] [i_2] = ((((arr_16 [i_1] [i_1] [i_3] [i_1] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? ((+(min((((/* implicit */long long int) arr_15 [i_1])), (arr_3 [i_2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))));
                    }
                    arr_20 [i_2] [i_2] [i_3] |= ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) (signed char)-48)) ? (arr_11 [1LL] [i_1] [(short)0] [i_1] [(short)18]) : (1084959473)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            arr_23 [i_1] [20ULL] [i_1] = ((/* implicit */unsigned long long int) var_7);
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) (+(9650213843254176834ULL)))) ? ((+(((/* implicit */int) (signed char)-127)))) : (((/* implicit */int) ((signed char) arr_5 [i_1]))))) / (((/* implicit */int) (short)-32749)))))));
            arr_24 [i_1] = ((/* implicit */short) (((((+(arr_8 [i_7]))) == (((/* implicit */unsigned int) min((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) arr_17 [i_1] [i_1] [(unsigned char)9] [i_1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)69)), ((unsigned short)14))))) : (arr_3 [(unsigned char)3])));
        }
        for (int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            arr_27 [i_8] = ((/* implicit */unsigned int) arr_10 [(_Bool)1]);
            arr_28 [i_1] [i_8] [2U] = ((/* implicit */_Bool) (short)29095);
        }
        for (int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
        {
            arr_31 [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -829136794078699329LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
            arr_32 [i_9] [i_1] [i_1] = ((/* implicit */short) arr_12 [i_9] [i_9] [i_9] [i_1] [i_1]);
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22568)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))))));
                var_19 = arr_14 [i_9] [i_9] [i_9] [6LL] [(unsigned short)20] [i_9];
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10902)) / (((/* implicit */int) (signed char)48))));
                            var_21 = ((/* implicit */signed char) arr_8 [i_9]);
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_3), (((/* implicit */unsigned long long int) arr_8 [i_1])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_9] [i_10] [i_11] [i_12])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_11])) / (-163964959))))));
                        }
                    } 
                } 
            }
            for (int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_23 = ((/* implicit */short) (((((+(((/* implicit */int) (signed char)127)))) + (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_9] [(unsigned char)9] [i_13] [i_14])) ? (((/* implicit */int) arr_4 [i_14])) : (((/* implicit */int) arr_36 [i_1] [i_9] [i_13] [i_13] [i_13]))))))));
                    arr_43 [(unsigned short)22] [(unsigned short)22] [i_13] [i_13] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) arr_25 [i_1] [i_9]))), (min(((+(-9223372036854775794LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_1] [i_9] [i_13] [i_14])) == (((/* implicit */int) (unsigned short)53607)))))))));
                    var_24 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(var_9)))), (((((/* implicit */_Bool) arr_11 [i_14] [i_13] [i_9] [16LL] [i_1])) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) : (18446744073709551615ULL)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_25 [i_1] [i_14])), ((short)-3211)))) || (((/* implicit */_Bool) ((unsigned char) arr_25 [i_1] [i_14])))))))))));
                }
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((signed char) (short)-32745))) / (((((/* implicit */int) arr_35 [i_15] [i_15] [i_13] [i_15] [i_13])) + (((/* implicit */int) var_5))))))));
                    arr_48 [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_11 [i_15] [i_1] [(short)5] [i_1] [i_1]) < ((+(((/* implicit */int) (signed char)(-127 - 1)))))))) / (((min((arr_10 [13U]), (((/* implicit */int) (short)3211)))) / (((/* implicit */int) (short)-3211))))));
                    var_27 = arr_36 [i_1] [i_9] [i_9] [i_13] [i_15];
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(min((10177427203471511721ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967291U)))))))))));
                }
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                {
                    arr_52 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 5757950911164430726ULL))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [i_9] [i_13]))) == (var_1))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        arr_55 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_9])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) -163964941)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */int) (unsigned short)13896)) : (((/* implicit */int) arr_25 [i_9] [i_9]))))) || (((/* implicit */_Bool) (short)7643))))) : (((/* implicit */int) arr_30 [(signed char)21]))));
                        arr_56 [i_1] [i_9] [i_13] [i_13] [i_16] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_5))) || (((/* implicit */_Bool) (unsigned short)577)))) || (((/* implicit */_Bool) ((unsigned int) max((arr_14 [i_1] [i_9] [i_13] [i_1] [(short)17] [i_17]), (((/* implicit */long long int) arr_33 [i_1] [i_16] [i_17]))))))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9])) || (((/* implicit */_Bool) 11U))))), (((arr_10 [i_16]) / (arr_10 [i_17]))))))));
                    }
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 19U)) ? (arr_8 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1] [i_9] [i_13]))))) < (((((/* implicit */_Bool) (unsigned short)716)) ? (3052943623U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_13])))))))) < (((/* implicit */int) (unsigned char)255))));
            }
            arr_57 [i_1] [i_1] [16ULL] = ((/* implicit */int) (+((+((+(1185839025U)))))));
        }
        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)22567), (((/* implicit */short) (_Bool)1)))))) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64820))) : (0ULL)))))) || (arr_53 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned short) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) + (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)39)), ((unsigned short)45425))))))))))));
    var_33 = ((/* implicit */short) var_5);
}
