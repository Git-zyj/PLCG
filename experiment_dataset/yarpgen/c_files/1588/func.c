/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1588
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 4]))) | (arr_1 [i_0 + 3])))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)4])) + (((/* implicit */int) var_7))))), ((-(var_11))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1]), (((/* implicit */long long int) ((int) var_0)))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_15 [i_1] [i_2] [i_1] [i_1] = (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (((/* implicit */int) (short)19362)) : (((/* implicit */int) arr_10 [(unsigned char)3] [i_2] [i_2])))));
                    var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((arr_12 [i_2]) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (short)-15099)))));
                    var_15 = ((/* implicit */signed char) ((arr_10 [i_1] [i_2] [i_3]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_2 + 3]))))) : (((int) arr_11 [i_3 + 1] [(unsigned char)7] [i_2 - 3] [i_2 + 3]))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-20613), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (min((var_10), (var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1558399617)))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (_Bool)1)))) : (arr_8 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? (max((3337466733910343694ULL), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))))));
        var_17 += ((/* implicit */short) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-20632))))))) == (((unsigned int) 434897382073840970ULL))));
    }
    var_18 = ((/* implicit */short) -5821284238780368196LL);
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        arr_18 [i_4] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) > (((/* implicit */int) min((((/* implicit */unsigned short) (short)20614)), ((unsigned short)63625)))))))) == (((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_17 [i_4]) : ((-(arr_17 [i_4])))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 18; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_22 [i_5] [i_5] [i_4]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_20 [i_4] [i_5])) : (4294967295U)))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) + (680994923U)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) arr_17 [i_4])) / (18446744073709551615ULL)))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (short i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_0 [i_7]))));
                        var_23 = ((unsigned char) arr_11 [i_8] [i_8] [i_9] [i_10]);
                        var_24 = ((/* implicit */short) var_9);
                        var_25 += ((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_7]);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) arr_9 [i_7] [i_8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))))));
                    }
                } 
            } 
        } 
        var_27 += ((/* implicit */unsigned char) arr_0 [i_7]);
        /* LoopSeq 3 */
        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            arr_36 [i_11] = ((((((/* implicit */_Bool) 18011846691635710659ULL)) ? (((/* implicit */int) arr_3 [i_11])) : (((/* implicit */int) arr_3 [i_7])))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (11767137833796921560ULL)))) != (((/* implicit */int) max(((short)-6878), (arr_3 [17U]))))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        arr_41 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (signed char)-26)))) > (((/* implicit */int) ((unsigned char) arr_8 [i_7])))))) - (((/* implicit */int) (!(arr_10 [i_11] [i_13] [(signed char)11]))))));
                        var_28 = ((/* implicit */short) max(((+(var_6))), ((-(((int) arr_23 [i_11]))))));
                        var_29 = ((/* implicit */int) ((11605197810396655181ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_13] [i_13])))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((arr_1 [i_7]) > (arr_1 [i_11]))))))));
                    }
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_45 [i_14] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)6] [i_14])) ? (arr_20 [i_14] [i_14]) : (((/* implicit */int) arr_19 [i_14] [(signed char)16] [i_7]))))) ? (((((/* implicit */_Bool) 1663048441)) ? (((/* implicit */unsigned long long int) 5821284238780368191LL)) : (1832579414469144394ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(4ULL)))) && (((/* implicit */_Bool) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14]))))))));
            var_31 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_42 [i_14] [i_7]))) >= (arr_33 [i_7] [i_14])));
            arr_46 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) (unsigned char)233))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_7]), (((/* implicit */unsigned short) (short)24)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (3ULL) : (((/* implicit */unsigned long long int) 4294967276U))))) ? (((12250470321705368657ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (arr_14 [i_7] [i_7])))))))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_1 [i_7])) + (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))) ? ((~(((((/* implicit */_Bool) arr_44 [i_14] [i_7])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(unsigned char)11] [i_14] [i_14]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) 434897382073840960ULL)))));
        }
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_1)), (arr_33 [i_7] [i_15]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) min((arr_29 [i_15] [i_7] [(unsigned char)2]), (((/* implicit */short) arr_49 [i_15] [i_7])))))));
            arr_50 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) arr_23 [i_7]))))) : (arr_17 [i_7])));
        }
    }
}
