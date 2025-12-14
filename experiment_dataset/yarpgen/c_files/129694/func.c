/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129694
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_2 + 1] |= ((/* implicit */unsigned int) ((min((min((13966974038673301468ULL), (((/* implicit */unsigned long long int) (unsigned short)29866)))), (max((4479770035036250141ULL), (((/* implicit */unsigned long long int) arr_5 [(signed char)1])))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_2 + 1] [i_1] [i_3 - 1] [(_Bool)1]), (arr_4 [i_2 + 1] [13ULL] [i_3 - 1] [i_1])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 += ((/* implicit */short) 4479770035036250141ULL);
                            arr_14 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_3 - 1] [i_3 - 2])), (max((72040001851883520ULL), (arr_12 [(short)1] [i_0 - 2] [i_2 + 1] [14LL] [(unsigned char)7])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [(signed char)2] [i_3] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (max((4479770035036250148ULL), (((/* implicit */unsigned long long int) var_13))))));
                            var_18 = ((/* implicit */_Bool) max((max((13966974038673301480ULL), (((/* implicit */unsigned long long int) arr_5 [i_2])))), (((4479770035036250144ULL) & (arr_10 [i_2 + 1] [i_2 + 1])))));
                        }
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6473722560785060422ULL)) || (((/* implicit */_Bool) (short)24585))));
                            arr_22 [i_0] [i_1] [i_6] = ((/* implicit */short) arr_4 [(unsigned char)12] [i_3 + 1] [i_0] [i_2 + 1]);
                            var_20 = ((/* implicit */unsigned short) 13966974038673301468ULL);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            arr_25 [i_0 - 2] [i_7] [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_2 + 1]))))), (max((4479770035036250144ULL), (max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [i_0])), (13966974038673301452ULL))))));
                            arr_26 [i_0] [i_0 - 1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) min((2352188797U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4479770035036250144ULL)) || (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-14)), (arr_1 [(short)2] [i_7 + 2])))))))));
                        }
                        var_21 *= ((/* implicit */short) max((13966974038673301486ULL), (max((arr_21 [(_Bool)1] [(_Bool)1] [i_2] [i_3 - 1] [i_3] [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_16 [i_0 - 2] [i_0 - 2] [(unsigned char)5] [i_0] [(short)6]))))));
                        arr_27 [i_2] [i_3 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_23 [i_0 - 1])), (min((13966974038673301479ULL), (((/* implicit */unsigned long long int) arr_19 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        arr_30 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */short) 0ULL);
                        arr_31 [i_8] [i_1] [i_2 + 1] [i_8] = ((/* implicit */signed char) ((arr_12 [i_0] [i_1] [i_2] [i_0] [i_8 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0])))));
                        arr_32 [i_8] [(signed char)13] [i_8] [(signed char)12] [(signed char)12] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (short)24593)));
                    }
                    for (short i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            arr_39 [i_10 + 1] [(short)3] [(short)3] = ((/* implicit */unsigned long long int) max((min((2352188790U), (((/* implicit */unsigned int) arr_20 [i_9 + 1] [i_9 + 1] [i_10] [i_10 + 2] [8LL])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_2] [i_2] [i_2] [i_9 - 1])) & (((/* implicit */int) arr_11 [i_2 + 1] [2U] [2U] [10LL] [i_2] [i_2 + 1])))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((min((max((13966974038673301480ULL), (13966974038673301492ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (var_10)))))), (max((arr_10 [i_0 - 1] [i_10 - 1]), (min((arr_13 [i_9 + 1] [(unsigned char)9] [i_2] [i_9] [i_1]), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_1])))))))))));
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_14))));
                    }
                    arr_40 [i_0] = ((/* implicit */_Bool) min((min((3560783828U), (((/* implicit */unsigned int) arr_2 [i_0 - 2])))), (((/* implicit */unsigned int) arr_36 [i_0 - 2]))));
                    arr_41 [i_0] [i_0] [i_2] [(signed char)4] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)31971)), (max((arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_2] [i_2 + 1] [i_1]))))));
                    arr_42 [i_0] [(unsigned char)2] = ((/* implicit */long long int) min((min((13966974038673301479ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_0 - 1] [i_1] [i_0 - 1]) & (arr_6 [i_2] [i_2] [(short)5] [i_0]))))));
                    var_24 = ((/* implicit */unsigned short) 2911735205U);
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 3) 
    {
        arr_46 [i_11] = ((/* implicit */unsigned char) (signed char)28);
        var_25 *= ((/* implicit */unsigned long long int) (unsigned short)15356);
        var_26 += max((min(((short)-32743), (((/* implicit */short) var_11)))), (((/* implicit */short) arr_43 [12ULL])));
    }
    var_27 = ((/* implicit */_Bool) var_10);
}
