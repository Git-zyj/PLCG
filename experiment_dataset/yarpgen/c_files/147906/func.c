/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147906
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(32256)))) ? (max((((((/* implicit */unsigned int) 32256)) & (var_0))), (((/* implicit */unsigned int) min((var_9), (var_8)))))) : (max((((/* implicit */unsigned int) var_6)), (((67855701U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */_Bool) (short)10993);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)16] [(signed char)0])) ? (((/* implicit */int) (short)23932)) : (((((/* implicit */int) (short)23913)) | (arr_7 [(signed char)13] [i_1] [(signed char)13]))))) == (((/* implicit */int) (short)23913)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)16] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [(signed char)0] [i_0])) ? (min((var_4), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned int) max((32256), (arr_7 [(short)8] [(unsigned short)15] [i_3])))))), (min((((/* implicit */unsigned int) (signed char)105)), (28U)))));
                    }
                    arr_12 [i_1] [i_1] [i_2] [13ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (0LL)))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 3])))) > (((((/* implicit */_Bool) arr_4 [(short)23] [i_1 - 4] [i_1 + 2])) ? (((/* implicit */int) (short)-23913)) : (-32256)))));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_21 [i_4] |= ((/* implicit */int) var_4);
                                arr_22 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)65472)) ? (((((/* implicit */_Bool) (unsigned short)20897)) ? (arr_1 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44639))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (32265) : (1383221226)))))), (((((/* implicit */_Bool) ((arr_16 [(signed char)16] [(signed char)16] [13LL] [(signed char)16]) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((~(arr_19 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_6])))))))));
                                var_19 = ((/* implicit */_Bool) max((((short) ((((/* implicit */_Bool) (signed char)127)) ? (arr_18 [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 4] [i_5 - 3] [i_6 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2966))) / (-8099905863496825296LL)));
                                arr_28 [i_0] [i_1] [i_1] [i_7 + 1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-75))))) - (((/* implicit */int) ((32265) != (((/* implicit */int) arr_6 [i_1] [i_1] [i_8]))))))), (max((min((1383221229), (667975240))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_4] [i_7] [(unsigned short)16])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */int) var_11)) | (((((/* implicit */_Bool) (short)-23927)) ? (arr_18 [i_0] [i_4] [i_7 + 1]) : (-1957217422)))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [(signed char)5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_4] [13] [i_4] [i_1 + 1] [i_1 - 3])) ? (arr_20 [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [18LL] [(signed char)9] [i_1] [15] [i_1 + 2] [i_1 + 1]))))) == (max((arr_20 [i_1 + 4] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_20 [i_1 - 2] [i_1] [(_Bool)1] [i_1 + 2])))));
                }
                arr_30 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) 2514812148U)) > (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1 + 4])), (10671911150766501808ULL)))));
                var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1])) ? (((/* implicit */int) var_6)) : (arr_7 [i_1 + 2] [5LL] [i_1 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-17), ((signed char)-17)))))))));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)56876)) > (((/* implicit */int) (unsigned short)44640))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_6 [i_1] [i_0] [i_0])) : (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)2] [(unsigned short)2] [i_1] [i_0] [(unsigned short)2] [12ULL])))))))));
                var_24 = ((/* implicit */signed char) (-(min((max((var_0), (((/* implicit */unsigned int) (signed char)127)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(signed char)5] [(signed char)5] [(signed char)5])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
}
