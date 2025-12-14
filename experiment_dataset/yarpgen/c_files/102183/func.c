/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102183
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -5148135131086964995LL))) ? (((unsigned long long int) min((arr_3 [i_0]), ((signed char)-95)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                    var_20 = ((/* implicit */int) (unsigned char)31);
                    arr_8 [(signed char)9] [17] [i_2 + 1] |= arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 2];
                    arr_9 [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-5587361574370522861LL) : (-5587361574370522836LL)));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    arr_13 [i_3] [(unsigned char)20] [i_3] |= ((/* implicit */signed char) (~(((((/* implicit */int) ((short) 5587361574370522836LL))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))))))));
                    arr_14 [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (arr_15 [i_1] [i_1])));
                    arr_17 [i_0] [i_1] [i_1] &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (-5148135131086964995LL))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_4] [i_5 - 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) + (var_10)));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_4] [i_5 + 2])))))));
                    }
                }
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_18 [i_1] [i_6] [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 *= ((((/* implicit */long long int) ((((/* implicit */_Bool) -5587361574370522810LL)) ? (((/* implicit */int) var_3)) : (var_16)))) > (-5148135131086964995LL));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1]) || (arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18091633791476244517ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                            arr_34 [i_9] [i_7] [(_Bool)1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((-5148135131086964995LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40593)))));
                            arr_35 [14ULL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -5587361574370522861LL);
                        }
                        var_27 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1U)) ? (70368744177663ULL) : (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((var_19) ? (((/* implicit */long long int) 4294967295U)) : (arr_16 [i_7 + 1]))))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned long long int) (signed char)-24)))));
                        var_30 ^= ((/* implicit */signed char) (+(2276130532282151251LL)));
                    }
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (max((((((/* implicit */_Bool) (signed char)107)) ? (arr_4 [i_6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-92)) && (((/* implicit */_Bool) 1847950735U))))))))))));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_10])) : (((/* implicit */int) (unsigned short)49152))));
                    arr_39 [i_0] [i_0] [(unsigned char)3] [i_0] &= ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7189))))));
                    var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_33 [i_10] [i_1] [i_0] [i_0]))));
                }
                for (signed char i_11 = 1; i_11 < 23; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_44 [i_0] [(unsigned char)16] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_43 [i_11 - 1] [i_1])) << (((/* implicit */int) arr_43 [i_0] [i_0])))) - (((/* implicit */int) ((unsigned char) (~(arr_22 [i_0] [i_1] [(unsigned char)1])))))));
                        var_34 *= ((/* implicit */unsigned short) (!((!((!(var_15)))))));
                        var_35 ^= ((/* implicit */signed char) var_14);
                        var_36 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_24 [i_11 - 1] [i_12 - 1])))));
                    }
                    var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) & (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (max(((~(-1LL))), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_11 - 1] [i_11 + 1]))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_10)) + ((-(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))))))))));
    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)64))))) <= (var_10))))));
}
