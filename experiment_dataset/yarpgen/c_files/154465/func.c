/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154465
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) (~(-487664959730056067LL)))) : (max((((/* implicit */unsigned long long int) (signed char)-26)), (var_13))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 6; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -487664959730056067LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) var_11)))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099511627775LL)) ? (487664959730056067LL) : (((/* implicit */long long int) 251658240U))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_9)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_14)), (232394617)))) : (max((((/* implicit */long long int) -527863116)), (1099511627775LL)))));
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(max((var_2), (((/* implicit */unsigned int) 982740168))))))), ((-(((var_1) ? (var_0) : (576460752303423480LL)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_20 |= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 251658240U)) ? (((/* implicit */unsigned long long int) 4043309055U)) : (arr_5 [i_0] [i_1] [i_4])))) ? (((2147483647U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))))) : (((/* implicit */unsigned int) (+(981338357))))))));
                            var_21 &= ((/* implicit */unsigned char) 5092554440702289358LL);
                            arr_16 [i_1] [i_1] [4LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((var_7), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (-487664959730056083LL)))))));
                        }
                        var_22 = ((/* implicit */int) (-((-(arr_4 [i_4] [i_1])))));
                        var_23 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((4043309056U), (((/* implicit */unsigned int) -4))))), (max((((/* implicit */unsigned long long int) var_4)), (var_13))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) (_Bool)1))))), (-3719049232987419257LL))))));
                        var_24 = ((/* implicit */signed char) 4043309058U);
                    }
                    for (short i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_2] [i_1]) * (min((max((var_13), (((/* implicit */unsigned long long int) (unsigned char)191)))), (((/* implicit */unsigned long long int) (-(4294967295U))))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((long long int) var_8))))), (6621763223865361699ULL))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 8; i_7 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(-3273050529346968445LL))))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_7 + 1] [i_0] [i_0] [i_2])) != (((/* implicit */int) var_5))));
                        arr_24 [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_29 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))));
                            var_28 = 2147483646;
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 ^= (_Bool)0;
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) 4347632132367134755LL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned char)7))))))) <= (((((((/* implicit */int) arr_26 [2U] [2U] [2U] [i_2] [i_2] [(unsigned short)3])) != (var_11))) ? (var_9) : (((/* implicit */unsigned int) 34998546))))));
                        var_31 = ((/* implicit */unsigned short) max((((unsigned long long int) 12U)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((3) * (((/* implicit */int) var_1))))), (((var_12) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((2507514805U), (((/* implicit */unsigned int) 2047358576)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])))) && (((((/* implicit */_Bool) 4294967283U)) && (((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1]))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (-(3965747769U)))) : (0ULL))))));
                        arr_39 [1] [i_1] [i_1] = var_4;
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12)))))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_42 [i_11] [i_10] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_43 [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) arr_7 [i_0] [i_1] [i_0]));
                            arr_44 [i_2] [i_11] |= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) <= (-4584291309507624321LL)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            arr_48 [i_1] [i_1] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((251658237U) * (var_2))) - (1236983105U)))));
                            arr_49 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(10450928990781455750ULL))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_35 -= ((/* implicit */signed char) (short)11794);
    var_36 &= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) min((var_13), (((/* implicit */unsigned long long int) var_3)))))), (((((/* implicit */_Bool) var_0)) ? ((+(16646144))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10450928990781455735ULL)))))))));
}
