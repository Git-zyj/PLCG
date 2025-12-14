/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127926
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
    var_20 ^= ((/* implicit */unsigned char) ((var_18) - (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_18))) - ((-(((/* implicit */int) (short)-2920)))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_18)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 |= max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] &= ((/* implicit */long long int) (signed char)(-127 - 1));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_2]))) : (126976U))))));
                        var_24 += ((unsigned short) (_Bool)1);
                        var_25 ^= ((/* implicit */short) arr_3 [i_0] [i_0]);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_2))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        var_27 += ((/* implicit */signed char) arr_3 [i_4 + 2] [i_1 - 2]);
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (short)29818)))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)16))))) ? ((+(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_2] [i_4])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) var_8)))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((short) (short)-32762))) + (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [(short)6])))))))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (short)32767))));
                                var_32 &= ((/* implicit */signed char) ((_Bool) (+(2147483647))));
                                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((long long int) ((arr_4 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_4 [i_2] [i_5])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 2] [i_2] [i_5] [i_6] [i_6]))))))));
                                var_34 |= ((/* implicit */unsigned long long int) (((-(arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_1 - 2] [i_1]))) >= (max((arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_5]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2])))));
                            }
                        } 
                    } 
                    var_35 += ((/* implicit */int) (+(arr_14 [i_0] [i_2] [i_2])));
                    var_36 |= ((/* implicit */_Bool) (-(-315325926)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_37 ^= ((/* implicit */short) 483718980);
                        var_38 ^= arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7];
                        var_39 |= ((/* implicit */int) ((signed char) -483718993));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_40 &= (!(((/* implicit */_Bool) max((654380785), (arr_2 [i_0 - 1])))));
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_7] [i_8] |= ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_7] [i_1])) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 2] [i_1])) ? (arr_20 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8309))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_18))));
                        }
                        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0] [i_2]))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) ((-620943894) != (620943894))))), (620943908))))));
                        }
                        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_44 += ((/* implicit */unsigned long long int) ((max((arr_21 [i_0 - 1]), (arr_21 [i_0 - 1]))) * (((((/* implicit */_Bool) arr_21 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_21 [i_0 - 1])))));
                            arr_32 [8LL] [i_1] |= ((/* implicit */short) max((((int) 620943908)), (((/* implicit */int) max((((/* implicit */short) (unsigned char)33)), ((short)32767))))));
                            var_45 ^= ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_0 - 1])), (((((/* implicit */_Bool) 4518867576823565835LL)) ? (315325926) : (((/* implicit */int) (unsigned short)47864))))))) : (((((/* implicit */_Bool) (unsigned short)59170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13061))) : (((((/* implicit */_Bool) (short)1456)) ? (var_13) : (((/* implicit */unsigned long long int) 620943893)))))));
                            var_46 += ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)33)))))))) / (((((/* implicit */_Bool) -483718981)) ? (2530210116U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_47 ^= ((/* implicit */short) ((signed char) 17285325836474994290ULL));
                        var_48 ^= ((short) ((int) -483718960));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */_Bool) max((var_49), ((!(((/* implicit */_Bool) (~((-(arr_16 [i_2] [i_1] [i_2]))))))))));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_30 [i_1 - 2] [i_0] [(unsigned short)23] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) (_Bool)0))))))))));
                        var_51 += ((/* implicit */unsigned long long int) ((((_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1202)) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_2] [i_12])) : (((/* implicit */int) arr_13 [i_0 - 1] [i_1] [8LL] [i_2] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0])), ((unsigned char)127))))) : (((unsigned long long int) (signed char)28)))))));
                    }
                }
            } 
        } 
    }
    var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) min((((/* implicit */long long int) ((short) ((((/* implicit */int) (short)6982)) * (((/* implicit */int) (signed char)70)))))), (((((/* implicit */_Bool) (+(-4367659599338324456LL)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-854619608) : (((/* implicit */int) var_10))))))))))));
}
