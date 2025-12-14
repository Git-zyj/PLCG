/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17746
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-124)), (var_10))))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26003))))))) != (var_6))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) 854373094))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((((/* implicit */_Bool) -854373095)) ? (4480801402046289767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15297))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [(signed char)12] [1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) ((_Bool) max((arr_7 [i_3] [i_1 - 1] [i_3] [i_4]), (arr_7 [i_2] [i_1 + 2] [i_2] [i_0]))));
                                var_14 = arr_5 [i_1 + 1] [(_Bool)1];
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_1 - 2] [i_1 + 3])))) ? (((unsigned long long int) arr_5 [i_1 + 2] [i_1 + 2])) : (((/* implicit */unsigned long long int) (-(arr_5 [i_1 - 2] [i_1 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_2] [i_5] [(unsigned short)14] [2ULL] [i_5])) < (4152853814U))))) : (arr_13 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1 + 3] [(signed char)10]))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1]))))) | (var_5)))))));
                        var_17 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        arr_16 [i_5 - 1] = ((/* implicit */unsigned short) min((17720154055630729664ULL), (((/* implicit */unsigned long long int) 142113492U))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_8);
                        var_19 ^= ((/* implicit */signed char) arr_8 [i_1 + 2] [(signed char)4] [i_6]);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_17 [i_1 + 2] [i_1 + 1] [i_1] [(unsigned char)12] [i_1 - 2] [12U])))) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4152853830U)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_8 [i_1] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) min((var_8), (arr_10 [i_6] [(unsigned short)6])))) : (((((/* implicit */_Bool) var_7)) ? (7337153135225147836ULL) : (4480801402046289771ULL)))))));
                    }
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_21 = ((-854373095) - (854373095));
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 3])) ? (var_1) : (var_6)))) ? (((arr_20 [i_0] [14U] [i_2] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_2] [i_1 + 2] [i_0]))) : (min((arr_19 [i_0] [i_1] [i_2] [6]), (arr_15 [(unsigned char)2] [(unsigned short)14] [i_7]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [i_2] [10U]))))), ((-(var_1))))))));
                        arr_24 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_0] = ((/* implicit */unsigned int) var_11);
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_28 [i_0] [i_1] [7U] [i_1] [i_8] = ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) -709995684)) : (min((((/* implicit */unsigned int) var_7)), (4152853787U))));
                        var_23 = var_1;
                    }
                    var_24 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(var_4)))) ? (4152853825U) : ((-(3888495750U)))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((3357871205621530206ULL) % (((/* implicit */unsigned long long int) 142113481U)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_26 = min((max((var_9), (((/* implicit */unsigned long long int) var_5)))), (min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5992834354810772749ULL)) ? (((/* implicit */unsigned int) 1249277056)) : (4294967295U)))))));
                        arr_40 [i_0] [i_11] [10U] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_6 [(unsigned short)2] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_10] [i_9])))))) >= ((~(18446744073709551615ULL))))))) ^ (((((/* implicit */unsigned long long int) 15)) - (arr_15 [i_10] [(unsigned short)5] [i_10])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_27 = ((/* implicit */int) (unsigned short)0);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_3))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_47 [i_0] [i_0] [i_10] [(unsigned short)5] = ((/* implicit */unsigned long long int) arr_46 [i_0] [i_9] [i_10] [i_13]);
                        arr_48 [i_10] [i_10] &= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)14537)) / (((/* implicit */int) (unsigned short)61810)))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_9] [i_10] [i_13]))) < (((((/* implicit */_Bool) arr_37 [i_0] [i_0] [6ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_9] [i_10] [i_13]))) : (arr_13 [(_Bool)1] [(unsigned short)4] [i_13] [i_10] [(unsigned short)7] [i_13]))))))));
                        var_29 = ((((/* implicit */_Bool) 13965942671663261844ULL)) ? (705631023U) : (((/* implicit */unsigned int) 333971789)));
                        arr_49 [1] [i_0] [i_10] = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    var_30 = arr_22 [i_10] [i_9] [i_0];
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) 142113485U)) : (4480801402046289757ULL))), ((~(var_9)))))) || (((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_9] [1U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_9] [i_10] [i_10]))) : (4480801402046289771ULL))))));
                    arr_50 [i_0] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 142113481U)) ? (((((/* implicit */unsigned int) 553499342)) + (4102962533U))) : (2897880887U)));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 3) 
    {
        arr_53 [6] = ((/* implicit */unsigned short) ((unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_7 [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14])))));
        arr_54 [(signed char)7] = ((/* implicit */int) 33488896U);
        arr_55 [8U] = 1780257493U;
        var_32 = ((/* implicit */int) (~(4480801402046289759ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_33 = ((/* implicit */signed char) (((+(((arr_9 [i_14 + 2] [i_14 + 2]) ? (arr_5 [(signed char)6] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_14 + 1] [i_14] [i_14])) | (((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_14 + 2] [i_14] [i_14])))))));
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_35 [(unsigned short)13] [i_15] [i_14 - 1] [i_14 - 1]), (((/* implicit */unsigned long long int) 4294967295U))))) ? (((((/* implicit */_Bool) arr_10 [i_14 + 2] [i_14])) ? (arr_14 [i_14] [i_14] [i_14] [i_15] [i_15]) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [(unsigned short)13] [11U] [i_15] [i_15]) == (var_9)))))))) ? (((((/* implicit */_Bool) 142113494U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (4859369832063725100ULL))) : (((/* implicit */unsigned long long int) ((var_0) + ((+(var_6))))))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
    {
        var_35 &= ((/* implicit */signed char) 13587374241645826514ULL);
        arr_62 [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_59 [i_16])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) arr_59 [i_16])), (var_10))))) >> (((4480801402046289757ULL) - (4480801402046289702ULL)))));
        var_36 = ((/* implicit */int) ((unsigned long long int) max((3352521094938646506ULL), (4480801402046289778ULL))));
        var_37 = ((/* implicit */unsigned long long int) ((1142300763U) & (((/* implicit */unsigned int) 2056279116))));
        var_38 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((4152853801U) != (var_8)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [9]))) : (min((arr_60 [i_16] [i_16]), (arr_60 [i_16] [i_16])))));
    }
}
