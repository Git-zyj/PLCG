/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189303
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((var_12) & (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) -1916385077))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1])))) ? (max((var_13), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) >> ((((+(((/* implicit */int) (signed char)127)))) - (101))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (((2138127463365537777LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46913))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((var_3) - (12807597839670123733ULL))))))));
                        var_20 = ((/* implicit */signed char) ((unsigned int) (unsigned char)253));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (var_8)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_1] [i_2] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))), (max((((/* implicit */unsigned long long int) 3891573144U)), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */short) (+(((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                        var_23 += (((~(((/* implicit */int) var_14)))) - (((/* implicit */int) arr_10 [i_6] [i_6 - 2] [i_1] [i_6])));
                        var_24 = ((/* implicit */_Bool) ((unsigned int) var_11));
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22584))) / (arr_18 [i_0] [(unsigned short)7] [i_1] [i_1] [i_7] [8])))) ? (var_12) : ((+(var_2))))), (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1])) ? (arr_18 [4U] [i_1 + 1] [i_1] [i_2] [i_2] [i_7]) : (((/* implicit */unsigned long long int) (-(590880231))))))));
                        var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_17 [i_2] [i_1] [i_1] [i_0])) & (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    var_27 &= (+(403394152U));
                    var_28 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_12 [i_0] [i_1 - 1]))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (_Bool)1);
    var_30 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_8 = 3; i_8 < 8; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22584))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_8 + 1] [i_9])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_25 [i_8]))))) : (((/* implicit */int) arr_25 [i_9])))) : (((/* implicit */int) ((((/* implicit */_Bool) -2138127463365537777LL)) || (((/* implicit */_Bool) arr_25 [(unsigned short)8])))))));
                var_32 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(arr_21 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)42951)) != (((/* implicit */int) arr_22 [i_8])))))) : (((long long int) var_8))))));
            }
        } 
    } 
}
