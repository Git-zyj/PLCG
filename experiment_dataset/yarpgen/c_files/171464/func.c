/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171464
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24494)) << (((9781001142226506072ULL) - (9781001142226506068ULL)))));
    var_19 += ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((unsigned short) 11291796115103011433ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)24494)))) : (var_0)));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 1] [i_2]))) : (2641430871392131600LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)52809))));
                    var_23 = (~(((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1 - 1])));
                    var_24 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)52820)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521)))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_5] [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
                                var_26 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 11551064996464185003ULL)))));
                                arr_21 [i_0] [3] [i_3] [i_0] [i_5] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)12718))))));
                                var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65532)) >> (((var_4) + (6091296430748373290LL))))) / (((/* implicit */int) arr_9 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11291796115103011452ULL)) ? (1956096811870620322LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_26 [i_0] [i_1] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_25 [i_0])) ? (11291796115103011452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0])))))));
                    var_29 ^= ((/* implicit */unsigned long long int) -3056158336138653906LL);
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6] [(unsigned short)2] [(_Bool)1]))) >= (7154947958606540164ULL)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29278)) && (((/* implicit */_Bool) 11291796115103011470ULL)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_1] [i_0 + 1]))))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)0)))))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_30 [i_7] &= ((/* implicit */unsigned short) (((~(max((((/* implicit */int) (unsigned short)29278)), (13088297))))) % (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)203)))))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29248)) ? (4232367465U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))) >> ((((-(((unsigned int) (_Bool)1)))) - (4294967278U))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 0U)))) || (((_Bool) (unsigned short)65535)))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((unsigned int) 0U))))) : ((~(7154947958606540163ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 3; i_9 < 8; i_9 += 4) 
                    {
                        arr_37 [(unsigned short)2] [i_6] [(unsigned short)2] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 240350061407311061LL)) ? (8665742931483045549ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_34 = ((/* implicit */unsigned short) (!((!((_Bool)1)))));
                        var_35 = ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0 - 1] [i_1] [i_0] [4LL]))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) ^ (var_5)))) && ((_Bool)1)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_41 [i_0 - 1] [i_1 - 1] [i_10])) : (((/* implicit */int) var_1))))) != (((((((/* implicit */int) arr_11 [i_1] [i_6] [i_11])) != (((/* implicit */int) arr_40 [i_0 - 1] [i_6] [i_10] [i_11])))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11] [i_6] [i_10] [i_6] [i_6] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1 + 2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (signed char)-118))))) < (((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_48 [i_0] [(unsigned char)0] &= ((/* implicit */_Bool) (((!(((((/* implicit */int) (unsigned short)65526)) == (((/* implicit */int) (unsigned short)55315)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)36302)))) : ((-(((unsigned int) (unsigned short)32767))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            {
                                arr_53 [i_0] [i_13] [i_12] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */unsigned char) max((max(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (unsigned short)36288)) : (((/* implicit */int) (signed char)127))))))), (((4069080523U) - (max((225886773U), (1451206934U)))))));
                                arr_54 [i_0] [i_0 - 1] [i_12] [i_0] [i_0] [i_13] [i_14] = (((~(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [4LL] [i_13] [i_12]))) : (6729863566149960169LL))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) < (((6027625356852014715LL) + (var_17))))))));
                                var_38 = ((/* implicit */unsigned char) (~(var_16)));
                            }
                        } 
                    } 
                }
                var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_3))));
            }
        } 
    } 
}
