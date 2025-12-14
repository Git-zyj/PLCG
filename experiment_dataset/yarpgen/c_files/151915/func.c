/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151915
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
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)57752)) : (arr_4 [i_0])))), (arr_5 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    arr_6 [i_1] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned int) (+(arr_4 [i_1])))), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_1 - 1]))));
                    var_16 = ((/* implicit */unsigned int) -733723549);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) (unsigned short)43792))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) var_12)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_2] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)0] [i_1 - 1] [i_1]))) : (arr_5 [i_0] [12ULL] [i_1] [i_0])))))));
                        arr_10 [i_0 - 1] [i_0 + 1] [i_1] [i_0 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2379990645389709745LL)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)6])) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_1 [i_2] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_3])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)57750))) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1])) ? (arr_4 [i_3]) : (arr_4 [i_3])))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_1] [0ULL] [i_1] = ((/* implicit */int) arr_8 [i_1 - 1] [i_4 - 1] [i_1]);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7783)))))));
                        arr_14 [i_1] [12LL] [i_4 - 1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_0]))));
                        var_18 = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) arr_12 [i_0] [i_0 - 1])), (arr_7 [i_0 + 1] [i_0 - 1] [i_1 + 1] [(signed char)7] [i_4 - 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 1] [i_1])) < (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_1])))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])), (8414542390247360742LL)))) ? (((/* implicit */int) min((arr_7 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)2] [i_4 - 1] [i_4 + 1] [i_4 + 1])) ? (var_6) : (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                    }
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        arr_17 [i_0 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1 - 1]))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (arr_4 [i_1 + 1])))) : (((/* implicit */int) ((arr_4 [i_1 + 1]) >= (arr_4 [i_1 - 1]))))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((1029384248U), (((/* implicit */unsigned int) (unsigned short)7783)))) : (((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */int) var_8))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((arr_20 [i_6 + 2]), (var_12)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4261952150U))))) : (arr_20 [i_6 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) 3356097282U)) || (((/* implicit */_Bool) 3356097290U)))))));
        arr_21 [i_6] = ((/* implicit */unsigned long long int) min((((unsigned int) arr_19 [i_6 + 2])), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_19 [i_6 + 2]), (arr_19 [i_6])))) >> (((((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (arr_20 [i_6]) : (((/* implicit */int) var_13)))) + (810149200))))))));
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_25 [i_8]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7])) ? (arr_25 [i_8]) : (var_6)))) : (max((2558666399U), (((/* implicit */unsigned int) arr_25 [i_7]))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_26 [i_7]), (arr_26 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8]))) : ((+(3907697624981358747LL)))));
            arr_27 [i_7] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_7]), (arr_26 [i_8])))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7])) ? (arr_25 [i_8]) : (arr_20 [i_8]))))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((long long int) 2091439085U)))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_20 [i_11 + 1]), (arr_20 [i_11 + 2])))) ? (((/* implicit */int) ((signed char) 1045990102U))) : (((/* implicit */int) arr_19 [i_11 + 2]))));
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_7])) ? (arr_22 [i_9]) : (((/* implicit */unsigned long long int) 457592144)))) >= (((/* implicit */unsigned long long int) ((arr_34 [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_7]) >> (((arr_20 [i_10]) + (810149214))))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_11 + 2] [i_11 + 1] [i_11 + 3] [i_11 + 3])))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-10))))), (((((/* implicit */_Bool) max((arr_28 [i_7]), (((/* implicit */long long int) arr_19 [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_36 [i_12] [i_11 + 3] [i_10] [(signed char)5] [i_12])) ? (((/* implicit */int) arr_29 [i_12] [i_10] [i_7])) : (((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [i_11]))))))));
                            arr_40 [(unsigned short)14] [i_7] [i_10] [i_7] [i_7] [i_7] [i_7] &= (-(((((/* implicit */_Bool) arr_34 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 - 1])) ? (arr_25 [i_11 - 1]) : (arr_25 [i_11 - 1]))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10])) ? (arr_22 [i_7]) : (((/* implicit */unsigned long long int) arr_25 [i_7]))))) ? (((/* implicit */long long int) arr_32 [i_12] [i_7] [i_7])) : (max((((/* implicit */long long int) (signed char)120)), (-1493024196622039036LL)))))))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_23 [i_9]) | (arr_23 [i_9])))) ? (max((((/* implicit */long long int) arr_23 [i_7])), (arr_28 [i_9]))) : (((/* implicit */long long int) ((unsigned int) arr_32 [i_7] [i_7] [i_7]))))))));
        }
        arr_41 [i_7] [i_7] = ((/* implicit */long long int) arr_32 [i_7] [i_7] [i_7]);
        var_28 &= (signed char)122;
    }
}
