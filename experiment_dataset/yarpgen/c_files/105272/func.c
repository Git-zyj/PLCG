/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105272
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
    var_13 = ((/* implicit */signed char) var_6);
    var_14 = ((1151361454638110045LL) + (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)11471)) ? (((/* implicit */int) (short)-17989)) : (((/* implicit */int) (short)17996)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)15] [(signed char)15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-17989))));
                                arr_15 [(unsigned char)0] [i_2] [i_3] [i_1] |= ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned short)28907)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (short)-17989))));
                        arr_19 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max(((((-(((/* implicit */int) (unsigned short)8085)))) | (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8085)))))))), (max(((-(((/* implicit */int) (unsigned short)8076)))), (((/* implicit */int) (short)-30243))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_16 *= ((/* implicit */unsigned short) max(((~((~(-8083538189681924026LL))))), (((/* implicit */long long int) (short)17988))));
                            var_17 ^= ((/* implicit */signed char) min((var_1), (max((arr_8 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)14655))))));
                        }
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2 + 2] [i_0] [i_2 + 2] [i_0] [i_0])) >> (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-48)), (var_7)))) ? (((/* implicit */int) ((unsigned short) arr_21 [i_0] [(unsigned char)9] [i_2] [i_1 - 2] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            arr_27 [i_0] [i_0] [1ULL] [i_5] [(unsigned short)20] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8085)) != (((/* implicit */int) (short)31744))));
                        }
                        arr_28 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_25 [(unsigned short)5]));
                    }
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        var_18 -= ((/* implicit */short) arr_12 [i_0] [(short)2] [i_1] [i_0] [8LL]);
                        arr_31 [i_0] [i_1] [i_0] [i_8 - 1] = ((/* implicit */unsigned long long int) (short)30261);
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17995))) : (1391718805686121211ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37962)))));
                        var_20 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) var_6)))));
                        arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)31744))))) == (var_4)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */long long int) (unsigned short)27573);
                        arr_38 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned short)48413)))));
                        var_21 = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)30)), ((short)-30243)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) == (arr_36 [13LL] [i_0] [19ULL] [(unsigned char)21])))) : ((+(((/* implicit */int) (short)-31745))))))), ((~(max((((/* implicit */long long int) (unsigned short)65535)), (var_4))))));
                        var_22 = ((/* implicit */unsigned short) (unsigned char)66);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_2))));
}
