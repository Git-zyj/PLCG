/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154665
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
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-14768))) + (-2221822114855406780LL)));
                            arr_14 [i_0] [i_1] [i_2] [i_2 + 1] [i_3] [i_0] [i_4] = ((/* implicit */short) ((arr_1 [i_4 + 1]) + (((/* implicit */int) ((((/* implicit */_Bool) -2221822114855406795LL)) || (((/* implicit */_Bool) (unsigned char)208)))))));
                        }
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2 + 1] [i_0] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3] [15LL]))))) ? (2221822114855406779LL) : (((/* implicit */long long int) (-(arr_1 [i_2 + 1]))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1])))))));
                            arr_18 [i_0] [i_3] [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_1] [i_0] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_0] [i_0 + 2] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_16 [i_0 - 2] [i_0] [i_5] [i_3])) : (((((/* implicit */int) arr_7 [i_0] [(_Bool)1])) & (((/* implicit */int) (unsigned short)36888)))));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_6] [i_2 - 1] [i_3] [i_6 - 2]))));
                            arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6] [(unsigned short)12] [i_0] [i_2 - 1] [i_0] [i_1] [i_0 - 3])) ? ((+(((/* implicit */int) (short)7445)))) : (((/* implicit */int) arr_2 [i_0 - 1]))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57113)) ? (7381819802144457162ULL) : (((/* implicit */unsigned long long int) 2221822114855406764LL))));
                            arr_23 [i_1] [i_0] [i_3] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (short)14768)))));
                        }
                        arr_24 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_6 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)191)))))));
                        arr_25 [i_0] = ((/* implicit */int) ((signed char) ((1870496807U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)2757))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0 - 1])))))));
                        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-2221822114855406753LL)))) + (((unsigned long long int) var_12))))) ? (max((((/* implicit */int) min((arr_2 [i_2]), (arr_9 [(_Bool)1] [(short)3])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (short)-30644)) : (((/* implicit */int) (unsigned char)226))))));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_2 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 2])) | (((/* implicit */int) (short)-14768))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_2] [(short)20])) ? (((/* implicit */int) arr_28 [i_8] [i_8] [(short)15] [i_1] [i_0])) : (((/* implicit */int) arr_7 [(signed char)4] [i_1])))))) : (((/* implicit */int) max((arr_29 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0] [i_2 - 3]), (((/* implicit */short) arr_4 [i_2] [i_2 - 2] [i_8])))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)19286)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (short)-1302))));
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) -2221822114855406742LL)))))));
                            arr_34 [i_0] [i_2 - 2] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_0 + 1]))))));
                        }
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_26 = ((((/* implicit */_Bool) (unsigned char)58)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 + 2] [i_1] [i_2] [i_2] [(short)7])) ? (((/* implicit */int) arr_29 [(unsigned char)13] [i_8] [i_2] [i_1] [i_0 + 1])) : (arr_32 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-11983)) < (((/* implicit */int) (short)19450))))) : (((/* implicit */int) ((short) (unsigned short)49908))))) : ((+((+(arr_27 [i_0] [i_0]))))));
                            var_27 = ((/* implicit */short) 2221822114855406755LL);
                        }
                        for (signed char i_11 = 2; i_11 < 18; i_11 += 1) 
                        {
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2221822114855406766LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32764)))))) ? (((/* implicit */int) max((arr_16 [i_0 - 3] [(unsigned short)8] [i_11 + 2] [i_11]), (arr_16 [i_0 - 1] [4] [i_11 - 2] [i_11 + 1])))) : ((-(((/* implicit */int) arr_16 [i_0 - 3] [(signed char)10] [i_11 - 2] [i_11 - 1]))))));
                            arr_39 [(short)20] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2])) >> (((((/* implicit */int) ((signed char) arr_38 [i_11 + 1] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_1]))) - (70)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_44 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_10 [0ULL] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_2 + 2])))));
                            var_29 = (i_0 % 2 == zero) ? (((/* implicit */short) (((((~((~(((/* implicit */int) arr_33 [i_0 - 1] [i_1] [i_0 - 1] [i_8] [i_12] [i_2 + 2] [i_0 - 1])))))) + (2147483647))) << (((((/* implicit */int) arr_43 [(signed char)10] [i_0] [i_8] [i_1] [i_0] [i_0 - 1])) - (168)))))) : (((/* implicit */short) (((((~((~(((/* implicit */int) arr_33 [i_0 - 1] [i_1] [i_0 - 1] [i_8] [i_12] [i_2 + 2] [i_0 - 1])))))) + (2147483647))) << (((((((((/* implicit */int) arr_43 [(signed char)10] [i_0] [i_8] [i_1] [i_0] [i_0 - 1])) - (168))) + (136))) - (23))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((14885762118910164651ULL), (((/* implicit */unsigned long long int) ((int) arr_33 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]))))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-30905)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                        var_32 ^= ((/* implicit */short) ((((/* implicit */int) max((arr_40 [i_2 + 1] [i_1] [i_2 + 2] [(unsigned short)16] [i_0 + 2]), (arr_40 [i_2 - 2] [i_0] [i_2] [(unsigned short)16] [i_0 - 3])))) + (((((/* implicit */int) arr_40 [i_2 - 2] [i_1] [(signed char)6] [(short)4] [i_0 - 3])) + (((/* implicit */int) arr_40 [i_2 + 2] [i_1] [i_2 + 2] [(_Bool)1] [i_0 + 2]))))));
                    }
                    arr_45 [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0]))))) ? ((-(((/* implicit */int) (unsigned char)173)))) : ((+(((((/* implicit */_Bool) (unsigned short)8423)) ? (((/* implicit */int) (short)-30905)) : (((/* implicit */int) (short)-32324))))))));
                    arr_46 [i_0] [i_0] [i_2] = (~(min((((((/* implicit */_Bool) arr_29 [i_0 + 1] [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_37 [i_2 - 3])) : (((/* implicit */int) arr_29 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_43 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2])), ((unsigned short)46226)))))));
                }
            } 
        } 
    } 
    var_33 = min((((/* implicit */short) ((min((7381819802144457162ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8423)))))), (var_10));
}
