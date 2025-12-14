/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16895
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
    var_14 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((int) var_8))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (3953751908572672711ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_2] [7LL])))) ? (((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_1 + 3] [i_0]) ? (((int) arr_8 [i_0] [i_1 + 3] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)2)))))))) : (max((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) + (2147483647))) >> (((105553116266496LL) - (105553116266479LL)))))), (arr_1 [i_2 + 1])))));
                    arr_10 [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_1 + 2] [i_1 + 2])), (arr_1 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1 + 1] [i_2 - 1] [(_Bool)1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_3 [i_1]))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (signed char)20)) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) 105553116266496LL))))), (((int) (unsigned char)98)))) : (((arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_3]) ? (((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6])) : (((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6]))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */long long int) (-(((arr_15 [i_3]) << (((arr_13 [i_6]) + (1555692777)))))))) - (arr_16 [i_4] [i_3])));
                        arr_24 [i_3] [i_3] [(short)7] [i_5] [i_4] [i_3] = max((((/* implicit */long long int) ((((int) arr_16 [i_3] [i_4])) != ((-(arr_22 [(unsigned short)8] [i_6] [i_5] [i_4] [i_3])))))), ((+(-7678822415039490245LL))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6591098609210976305ULL)) ? (((/* implicit */int) arr_25 [i_3] [i_5 + 1] [(unsigned char)8] [i_7] [7U] [i_4])) : (((/* implicit */int) arr_25 [i_3] [i_5 + 1] [i_3] [i_7] [i_7] [i_4]))))) ? (((5197210644870699834LL) & (7678822415039490245LL))) : (((/* implicit */long long int) arr_15 [i_3]))));
                        var_19 = ((/* implicit */unsigned int) ((unsigned char) arr_17 [i_7]));
                    }
                    arr_28 [(short)13] [i_4] [i_5] = ((/* implicit */long long int) min((2147483620), (((/* implicit */int) (unsigned char)203))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        arr_31 [i_8] = ((((/* implicit */_Bool) (unsigned char)185)) ? (arr_18 [0U] [i_8] [0U]) : (arr_18 [(unsigned char)7] [i_8] [i_8]));
        var_20 = ((/* implicit */unsigned int) arr_12 [i_8]);
        var_21 = ((/* implicit */unsigned short) ((arr_27 [i_8] [i_8] [i_8] [i_8]) ? (var_1) : (((/* implicit */unsigned long long int) arr_16 [i_8] [i_8]))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (unsigned int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_41 [i_10] [i_10] [(_Bool)1] = ((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_25 [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 + 2])) : (((/* implicit */int) arr_38 [i_10] [i_11 - 1] [i_10] [i_8] [i_10])));
                        var_22 = ((arr_37 [i_8] [i_9 + 3] [i_9 + 3] [i_11 + 2] [i_10]) & (arr_37 [i_11 + 1] [i_11 + 2] [i_10] [i_9 - 2] [i_8]));
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            arr_44 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(unsigned char)4] [i_9 + 2] [i_9 - 1] [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_40 [i_8] [i_9 - 2] [i_10] [i_9] [i_11 - 1]))));
                            arr_45 [i_8] [(_Bool)1] [i_10] [i_10] [i_12] [i_10] [i_8] = ((((/* implicit */int) ((-138699389944300214LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))))) / (((((/* implicit */_Bool) arr_20 [(unsigned char)6])) ? (arr_37 [i_8] [i_9] [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_39 [i_8] [i_9] [i_10] [i_11])))));
                            arr_46 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((long long int) arr_36 [i_10] [i_9 + 2] [i_9 + 1] [i_9 - 2]));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9])) >> (((241708765U) - (241708742U)))))));
                            arr_51 [i_10] [(unsigned char)14] [i_8] [i_10] [i_9] [i_9 - 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [12U] [i_9] [i_10] [i_11] [i_13])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_10] [i_11] [(_Bool)1])))))) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) ((arr_18 [i_10] [i_10] [i_13]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_11] [i_10]))))))));
                            var_24 += ((/* implicit */unsigned int) ((var_7) != (((/* implicit */int) ((_Bool) (_Bool)0)))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            arr_54 [i_8] [i_9] [i_9] [(unsigned char)13] [i_10] [i_9] [10ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [1LL])))))) * (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (6601361913416817982LL)))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned char) (+(arr_37 [i_14] [i_11] [i_10] [i_9] [i_8])))))));
                            var_26 -= ((/* implicit */long long int) (~(arr_37 [i_9 + 3] [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2])));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_9]) << (((7678822415039490248LL) - (7678822415039490241LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_8] [i_11] [(unsigned short)15])) || (arr_38 [i_10] [i_10] [i_10] [i_11] [i_14])))) : (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))))))));
                        }
                        arr_55 [i_10] [i_10] [i_10] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_20 [i_10])));
                        var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
}
