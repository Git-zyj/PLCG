/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17390
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
    var_18 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))))))))));
    var_19 = ((/* implicit */short) max((((unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-23113)), (max((-152115616), (1147887169))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) max((arr_0 [i_0]), (((/* implicit */long long int) var_13)))))) ? (min((((/* implicit */long long int) ((unsigned short) var_17))), (min((((/* implicit */long long int) 1147887169)), (arr_0 [i_0]))))) : (((/* implicit */long long int) ((max((arr_1 [(_Bool)1]), (((/* implicit */unsigned int) var_5)))) - (min((arr_1 [i_0]), (((/* implicit */unsigned int) -1147887148))))))))))));
        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (var_17) : ((~(var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)24129)) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22117)) ? (3209847527U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23113)))))) : (((var_7) << (((3268502414234963140LL) - (3268502414234963079LL)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) 1840125827))))) ? (arr_1 [i_0]) : (arr_1 [15U])))) <= (((unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                arr_12 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((short) arr_9 [i_2 - 1]))), (((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */long long int) -1147887148)) : (arr_0 [i_2 - 1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (0) : (((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1147887146)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 + 1]))));
                        arr_20 [i_2] = ((/* implicit */unsigned int) ((int) arr_7 [i_2] [i_2 - 1] [i_2 - 1]));
                        var_22 = ((/* implicit */short) ((unsigned short) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                        arr_21 [i_0] [i_2] [i_2] [i_3] [i_4] = ((var_17) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 + 1]))));
                        arr_22 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_4] [i_4]))));
                    }
                    arr_23 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((int) var_1));
                    arr_24 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_2 - 1]))) : (arr_7 [i_0] [i_0] [i_2 - 1])));
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_29 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_2] [i_0] [i_1]))) : (var_12)))) || (((/* implicit */_Bool) var_12)))) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2]))) : (arr_18 [i_0] [i_0])))) : ((-(var_6)))));
                    var_23 += min((min((((/* implicit */long long int) arr_6 [i_2 - 1])), (max((((/* implicit */long long int) var_10)), (arr_9 [i_0]))))), (((/* implicit */long long int) 579514442U)));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_18 [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_28 [i_0] [i_1] [i_2] [i_2])))))) : (max((min((arr_8 [i_0] [i_0] [i_2]), (-7427011827129721238LL))), (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) arr_6 [14])) : (arr_9 [i_1])))))));
                    arr_30 [i_0] [i_1] [i_2 + 1] [i_2] = ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) ? (arr_28 [i_2] [i_0] [i_1] [i_2]) : (max((((/* implicit */long long int) var_16)), (-3756200941215370594LL))))) | (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 1147887169)))))));
                    arr_31 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_27 [i_0] [i_2 + 1] [i_2] [i_5]))) > (((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */int) var_11)), (-1147887170))) : (((/* implicit */int) arr_26 [i_0] [i_2] [i_2] [i_2 + 1]))))));
                }
                arr_32 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_8 [i_2] [i_1] [i_2 + 1]) : (6208281520691687784LL))) << (((((/* implicit */int) var_11)) - (1)))));
            }
            for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-23113)) ? (((/* implicit */long long int) arr_7 [i_6 + 3] [i_6] [i_6])) : ((-9223372036854775807LL - 1LL)))) << (((min((arr_25 [i_6 - 1] [i_6] [i_6 + 3] [i_6] [i_6 + 2]), (arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 3]))) + (7058141417185905801LL)))));
                var_26 = ((/* implicit */unsigned int) ((((_Bool) arr_25 [i_0] [i_1] [i_6 + 2] [i_6 + 2] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_6 + 2] [i_6 + 2] [i_6 + 2])) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) arr_27 [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 1]))))) : ((-(arr_25 [i_0] [i_0] [i_6 + 1] [i_6 - 1] [i_6])))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_27 = ((/* implicit */short) max((var_27), ((short)-23121)));
                    var_28 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((1147887163) < (((/* implicit */int) (unsigned char)231)))) ? (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)362)))) : (((/* implicit */int) ((var_17) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))))))), (max((((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_7] [i_6] [i_1])), ((short)23113)))), (max((((/* implicit */unsigned int) var_2)), (var_15)))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_43 [i_0] [i_1] [i_6] [i_6] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(arr_38 [i_8] [(_Bool)1] [(_Bool)1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_41 [i_0] [i_0] [i_0] [i_6 + 3] [i_7] [i_8]))));
                        arr_44 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_6 - 1]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_5))))) ? (((unsigned int) arr_16 [i_0] [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) ((723565368U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1])))))))));
                        arr_45 [i_6 + 1] [i_7] [i_6 + 1] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)8882))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-120)), (arr_42 [i_0] [i_0] [i_0] [i_0])))) : (max((var_7), (((/* implicit */unsigned long long int) arr_36 [i_1])))))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) (unsigned short)53897)), (arr_11 [i_7])))))));
                        arr_46 [i_0] [i_0] [i_6] [i_7] [i_8] = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8] [i_7] [i_6 + 3] [i_0])) + (-1991499017)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_7] [i_1] [i_1] [i_0] [i_0])) ? (arr_42 [(signed char)6] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_1])) : (arr_28 [i_0] [i_1] [i_6] [i_1]))))), (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_7] [i_6 + 1] [i_1] [i_0]))) : (min((19LL), (((/* implicit */long long int) var_16)))))));
                    }
                    var_29 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_27 [i_0] [i_6 + 1] [i_6 + 2] [i_7])))));
                    arr_47 [i_0] = ((/* implicit */unsigned int) min(((((-(arr_38 [i_0] [i_0] [i_0] [i_6] [i_7]))) - (((/* implicit */unsigned long long int) (-(var_17)))))), (((unsigned long long int) var_3))));
                }
                var_30 = ((/* implicit */unsigned char) min((min((arr_37 [i_6] [i_6 + 2] [i_1] [i_0]), (arr_37 [i_0] [i_6] [i_6] [(unsigned char)7]))), (min((arr_37 [i_6] [i_1] [i_0] [i_0]), (arr_37 [i_0] [i_1] [i_6] [i_6])))));
            }
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                var_31 = ((min((((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1))))))) > (max((185411237U), (((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_9] [i_9])))));
                arr_51 [i_0] [i_1] [i_9] = ((/* implicit */long long int) (-(var_1)));
                arr_52 [i_9] = ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_9])) ? (((/* implicit */int) arr_50 [i_0] [i_1] [i_9] [i_9])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
            }
            arr_53 [i_0] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (short)32744)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_9 [i_0]))))), ((-(max((3423706857968940900LL), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]))))))));
        }
    }
    var_32 = ((/* implicit */unsigned long long int) ((var_15) << (((min((((((/* implicit */_Bool) var_9)) ? (-4943511091207020991LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((var_8) / (((/* implicit */long long int) var_15)))))) + (4943511091207021007LL)))));
}
