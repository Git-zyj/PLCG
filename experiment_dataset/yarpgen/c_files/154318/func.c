/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154318
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
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1499693786)))) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [(short)4] = ((/* implicit */signed char) var_3);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */int) (+(((unsigned int) (!(((/* implicit */_Bool) (signed char)3)))))));
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 + 2] [i_3 + 2])) < (((/* implicit */int) arr_10 [i_3]))))), ((short)-13484)));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) (signed char)127);
                        arr_16 [(_Bool)1] [i_4] [i_2] [(short)19] = ((/* implicit */_Bool) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_1] [(short)1] [(signed char)3] [i_4]))) - (var_15))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4])) < (((/* implicit */int) arr_13 [i_4] [i_1 - 1]))))))))));
                        var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2 - 3]), (((/* implicit */unsigned short) arr_13 [i_0] [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((var_11), (((/* implicit */unsigned int) (unsigned char)0))))))) ? (((min((((/* implicit */unsigned long long int) var_5)), (arr_12 [i_0] [i_1] [i_2] [i_4] [i_4 - 1] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (signed char)-7)))))))) : (((((/* implicit */_Bool) ((arr_4 [i_2] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (var_13) : (var_13)))));
                    }
                    var_19 += ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0 - 1] [i_0])) | (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_0]))))) < (((7141374613108614080ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) (-(((unsigned long long int) arr_9 [i_0] [i_0 - 2] [i_0] [i_0]))));
                                var_21 += ((/* implicit */long long int) (+(((/* implicit */int) (signed char)80))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    arr_24 [i_0] [i_1 - 1] [i_1] [i_7] = ((/* implicit */_Bool) (+(arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_7])));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2697098815U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_11)));
                    arr_25 [i_0] [i_0] [i_1] [i_7] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_7 + 1] [i_1] [i_1 + 1]))));
                }
                arr_26 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1 - 1]) / (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) arr_13 [i_0] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9223372036854775807LL)))) : (max((max((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_1])), (arr_4 [i_1] [i_0]))), (((/* implicit */long long int) arr_18 [i_0] [16U] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        for (unsigned short i_9 = 3; i_9 < 8; i_9 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [i_9 + 1] [i_9 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -256)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)108)))))));
                arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6945)) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) -9223372036854775807LL))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -9223372036854775807LL)) / (arr_21 [i_8] [i_9] [i_9] [(_Bool)1]))))))) % (((((/* implicit */int) var_12)) | (((int) var_12))))));
                arr_35 [i_8] [i_9] = ((/* implicit */int) max((arr_18 [i_8] [i_9] [i_8]), (((/* implicit */short) (unsigned char)135))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((var_24), ((~(-9223372036854775800LL)))));
                    arr_44 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_42 [i_10 - 1]))))) ^ ((-(((/* implicit */int) arr_42 [i_10 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))))));
                                var_26 *= ((/* implicit */unsigned short) ((max((var_14), (((/* implicit */int) arr_39 [i_11 + 1])))) == ((-(((/* implicit */int) arr_14 [i_10 + 2] [i_12] [i_14] [i_14] [i_13]))))));
                                arr_49 [i_10 - 1] [i_11] [i_12] [i_13] [(unsigned char)10] [i_12] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_39 [i_10])), (8U)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 3; i_15 < 9; i_15 += 4) 
                    {
                        var_27 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_40 [i_11] [i_12]))));
                        arr_52 [i_11] [i_11] [i_12] [i_15 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 9866593256868825252ULL)) ? (((/* implicit */int) arr_10 [i_15 + 2])) : (((/* implicit */int) var_10)))), ((+(((/* implicit */int) arr_10 [i_15 + 3]))))));
                        arr_53 [i_10] [i_11] [i_12] [i_15 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_36 [i_11 + 3] [i_10 + 2])))))));
                    }
                }
            } 
        } 
    } 
}
