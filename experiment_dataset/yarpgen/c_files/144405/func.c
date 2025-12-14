/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144405
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
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-101)) == (-780755529))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) && (((/* implicit */_Bool) 0U))))) == (((/* implicit */int) ((var_14) < (780755529)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 780755528)) || (((((/* implicit */int) arr_3 [(short)4] [i_1] [i_1 + 1])) > (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2]))))))) : (((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)30769)) || (((/* implicit */_Bool) var_5))))))))))))));
                    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (4725195875753310601ULL)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0])))))) % (((arr_0 [i_2] [3U]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [16LL] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_5 - 1] [i_3])) && (((/* implicit */_Bool) arr_18 [i_3] [15U] [i_5] [(short)12] [i_5 - 2]))))) < (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_5] [i_5 - 2] [i_3] [i_5 + 1]), (((/* implicit */long long int) arr_18 [i_3] [i_4] [i_5] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) (short)31099)) >= (arr_13 [i_3] [i_4] [i_4])))))) : (((/* implicit */int) max((arr_12 [i_3 - 1] [i_5 - 2] [i_3]), (arr_12 [i_3 - 1] [i_5 - 2] [i_3]))))));
                            var_21 = ((/* implicit */unsigned int) ((long long int) (~(4725195875753310601ULL))));
                            var_22 = ((_Bool) ((((((/* implicit */_Bool) var_9)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_3] [i_4] [i_4] [i_4] [14U] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] [16ULL]))));
                            arr_27 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) & (-134217728))), (((/* implicit */int) max((arr_16 [i_3] [i_3 - 1] [i_5 + 2] [i_6] [i_6] [i_8]), (((/* implicit */short) arr_24 [1ULL] [i_5 - 3] [i_5] [i_3 - 1] [i_8])))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_3] [i_4] [(short)6] [i_6] [i_3] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_5] [i_5 - 1] [i_5 - 2] [i_5 + 2] [i_3])) * (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)65535)))))))) ? (((13721548197956241015ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 134217727)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)61)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_29 [i_3 - 1] [i_5 + 2])) != (arr_9 [14U]))) ? ((~(((((/* implicit */_Bool) arr_9 [(unsigned short)12])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (short)4055)))))) : (((/* implicit */int) arr_28 [(unsigned char)8] [i_4] [i_5 - 2] [i_6] [(unsigned short)14])))))));
                            arr_31 [i_3] [i_9] [(_Bool)1] [i_3] [i_9] [i_4] [i_5] = ((/* implicit */unsigned int) ((signed char) ((var_14) >= (((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_3 + 1] [9])))));
                            arr_32 [(signed char)18] [i_4] [i_5] [i_6] [2] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_18 [18LL] [i_9] [i_5 + 1] [i_3 - 1] [18LL]))))) ? (((((((/* implicit */_Bool) (unsigned short)0)) ? (13242774991260004396ULL) : (6336848358949798450ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1022)) / (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [(_Bool)0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_21 [i_3 - 1] [i_4] [i_5] [i_5] [i_6] [i_9])), (arr_16 [i_3 + 1] [i_3 + 1] [i_4] [i_5] [i_6] [i_9])))) ? (((((/* implicit */_Bool) arr_25 [(unsigned char)12] [i_6] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (10U))) : (((arr_25 [(_Bool)1] [i_4] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                        {
                            var_24 *= ((/* implicit */unsigned long long int) (short)-4069);
                            arr_35 [(signed char)11] [i_4] [i_3] [i_6] [2ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -134217717))) ? ((-(258214099U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (2855214553U)))) ? (((/* implicit */int) arr_24 [i_10] [15LL] [i_3 + 1] [i_4] [i_3 + 1])) : (((((/* implicit */int) arr_29 [i_4] [(short)2])) + (((/* implicit */int) (signed char)(-127 - 1))))))))));
                        }
                        arr_36 [i_3] [20] [(signed char)13] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) 280564703U))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [4LL] [i_4] [i_4] [i_4] [i_4])) << (((arr_20 [i_3] [i_11] [i_5 + 3] [(unsigned char)10] [i_4] [i_5]) - (2782081845U)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_10) + (((/* implicit */unsigned long long int) var_14)))) >= (((/* implicit */unsigned long long int) ((unsigned int) var_1))))))))))));
                        arr_39 [i_3] [i_4] [i_5 - 1] [i_3] [i_5 - 3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((long long int) arr_37 [i_3 + 1] [i_3] [i_5 - 2] [i_5] [(unsigned short)17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_25 [i_3] [i_3] [i_4])))) : (258214099U)));
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        arr_42 [i_3] [i_3] = ((/* implicit */short) var_11);
                        arr_43 [i_12] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [i_5] [(_Bool)1] [i_12] [i_12])) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_12])) ? (861669386U) : (arr_15 [i_3 + 1] [3ULL] [i_3] [i_3 - 1]))) : (((/* implicit */unsigned int) arr_13 [i_3] [i_3 + 1] [i_5 - 3])))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)8)) * (((/* implicit */int) (unsigned char)242))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
                    }
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) min((arr_10 [(_Bool)1]), (((/* implicit */signed char) (_Bool)1))))) ? (536870911U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_37 [i_5] [20LL] [i_5 + 3] [20LL] [i_3]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (2855214553U))))))))))));
                    var_28 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_3]))))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : ((((_Bool)1) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_5] [i_4] [0U])) ? (((((((/* implicit */_Bool) 4003170755U)) ? (((/* implicit */int) arr_28 [(signed char)0] [i_3 - 1] [i_4] [i_5] [4U])) : (((/* implicit */int) arr_8 [(short)8])))) + (((/* implicit */int) var_7)))) : (arr_9 [2]))))));
                }
            } 
        } 
    } 
}
