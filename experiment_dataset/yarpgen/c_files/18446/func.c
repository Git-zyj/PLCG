/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18446
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_7))))) & (((unsigned long long int) (short)2606)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((_Bool) (_Bool)1))))))));
        var_20 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (((var_13) >> (((((/* implicit */int) var_6)) + (5714)))))))), (max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
    }
    var_21 = ((/* implicit */signed char) min(((~(var_13))), (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_2] [4ULL] [i_2] [i_3] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) (unsigned char)116)))))) : (16265859556906988320ULL)))));
                        arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)125)))))) * (((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_4])))) * (((((/* implicit */int) (short)0)) / (((/* implicit */int) (unsigned char)120))))))));
                        var_22 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_9)))), (var_17)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) 2180884516802563295ULL);
                            var_24 = ((unsigned short) ((0U) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65517)) && (((((/* implicit */_Bool) (short)10061)) && (((/* implicit */_Bool) var_12))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((-4231321637499220153LL) <= (((/* implicit */long long int) arr_14 [i_1 - 3] [i_1 - 1] [i_1 + 1] [i_1 - 2]))))) ^ ((~(((/* implicit */int) ((unsigned short) var_11)))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((unsigned char) var_6));
                            var_27 = ((/* implicit */unsigned int) ((2180884516802563296ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((_Bool) arr_5 [i_1 - 2] [i_2]))))))));
                            arr_22 [i_2] [i_3] [i_3] [9ULL] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0) < (((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_7 - 1] [i_7])))))));
                            arr_23 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) arr_17 [i_1] [i_2] [i_1 + 2] [i_1 - 1] [(signed char)3] [i_2] [i_1 + 2]))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_26 [i_1 + 3] [i_2] [i_5] [i_8] [i_8]))) | (((/* implicit */int) (!(((/* implicit */_Bool) 2180884516802563296ULL)))))))) % (min((((/* implicit */unsigned long long int) arr_19 [i_1] [i_2] [i_3] [i_1 - 1] [i_3] [i_8])), ((+(2180884516802563314ULL)))))));
                            arr_27 [i_1] [i_1] [i_1] [i_2] [i_1 + 3] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2180884516802563302ULL)))) ? (min((((/* implicit */int) ((unsigned char) var_17))), (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)58461)) : (((/* implicit */int) (_Bool)1))))));
                            var_29 = ((/* implicit */long long int) min((var_15), (((/* implicit */unsigned short) ((((var_18) ? (arr_4 [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_3] [13LL] [i_5] [i_1] [i_1 - 2]))))) > (var_4))))));
                            var_30 ^= ((/* implicit */unsigned char) var_9);
                        }
                        var_31 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2180884516802563327ULL))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_6 [i_5])))))));
                        var_32 = ((/* implicit */_Bool) ((((var_9) >> (((((/* implicit */int) var_10)) - (8506))))) >> (min(((+(((/* implicit */int) (unsigned char)158)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (arr_26 [i_3] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_3]))))))));
                        arr_28 [i_1 + 2] [(unsigned short)0] [i_2] = ((long long int) var_16);
                        var_33 = ((/* implicit */unsigned long long int) var_5);
                    }
                    arr_29 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)140))))), (var_14)))), (var_1)));
}
