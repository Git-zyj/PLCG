/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109479
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((1465510063) - (1465510063)))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned short)14620)) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) ((unsigned short) 14339214609374221544ULL))) ? (((/* implicit */unsigned int) 859224756)) : (2801429772U)))));
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2147483647U)) : (14339214609374221544ULL)))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_2))))))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_1)), (((max((4107529464335330071ULL), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) && (arr_0 [i_0] [i_0]))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (!((!((_Bool)0)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
        {
            arr_6 [(_Bool)1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14620))) : (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_0] [4U]) : (arr_3 [2ULL] [i_0] [2ULL])))));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [6]))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)0)))))) & (((((/* implicit */_Bool) var_2)) ? (12459315919858405513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ^ (((((/* implicit */_Bool) var_4)) ? (((11618213949075078744ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29480))))) : (((/* implicit */unsigned long long int) min((arr_3 [8ULL] [8ULL] [0]), (((/* implicit */unsigned int) var_8))))))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_4])) : ((+(((/* implicit */int) var_0))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(4294967295U))), (max((((/* implicit */unsigned int) (_Bool)0)), (var_9)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((arr_1 [i_3] [i_3]), (arr_1 [i_4] [i_4])))))))));
                        arr_15 [i_3] [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 1] [i_4] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_3] [i_3] [i_3] [i_2 - 1] [(unsigned char)2] [i_4])), ((unsigned short)11966)))) ? (max((var_5), (((/* implicit */int) arr_7 [i_3])))) : ((+(((/* implicit */int) var_6)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (int i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_5] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_11 [i_0] [i_2] [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 2]))))) ? (((arr_18 [i_2] [i_5] [i_7 + 1] [i_7 - 1] [i_0] [i_7]) / (arr_18 [i_7] [i_7] [i_7 + 2] [i_7] [i_0] [i_7 - 3]))) : (arr_18 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_0] [i_7 - 2])));
                            arr_26 [i_0] [i_0] [i_0] [i_6] [i_6] [i_7 - 1] [(signed char)6] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 14436069430253112353ULL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_2]))))), (max((((/* implicit */unsigned char) arr_11 [i_7 + 1] [(unsigned short)6] [(unsigned char)4] [(unsigned char)11] [i_0] [(unsigned char)4])), (arr_4 [i_0])))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), (var_8)))) : (((/* implicit */int) ((short) arr_3 [(unsigned short)1] [(unsigned short)1] [i_0])))))))) : (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 14436069430253112353ULL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_2]))))), (max((((/* implicit */unsigned char) arr_11 [i_7 + 1] [(unsigned short)6] [(unsigned char)4] [(unsigned char)11] [i_0] [(unsigned char)4])), (arr_4 [i_0])))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), (var_8)))) : (((/* implicit */int) ((short) arr_3 [(unsigned short)1] [(unsigned short)1] [i_0]))))))));
                        }
                    } 
                } 
            } 
            arr_27 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0])), (6828530124634472870ULL)));
        }
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_8] = ((/* implicit */int) (short)12197);
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_8 + 1] [i_8] [i_8 - 1] [i_8] [i_8 + 2]))))) < (max((((/* implicit */unsigned int) ((signed char) 17U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (3U)))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) arr_18 [i_0] [0] [i_8 - 2] [i_8 - 1] [0] [i_0])) ? (6828530124634472872ULL) : (((/* implicit */unsigned long long int) 1473175208)))))))));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1473175212) + (arr_32 [i_9] [i_9])))) ? (min((((/* implicit */unsigned int) var_1)), (arr_33 [i_9] [i_9]))) : (((((/* implicit */_Bool) (-(-7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) var_6)), (arr_33 [i_9] [i_9])))))));
        var_19 -= ((/* implicit */int) ((max((4107529464335330058ULL), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31882))))), ((~(arr_33 [i_9] [i_9]))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned char)189))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((4107529464335330072ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29479))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8291419157922690142LL) - (((/* implicit */long long int) ((/* implicit */int) (short)23194)))))) ? (((arr_38 [i_10] [i_10]) + (var_9))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)21)))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_47 [i_13] [i_13] [i_10] [i_13] [i_10] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_2), (((/* implicit */short) var_1)))))))), (((((/* implicit */_Bool) var_2)) ? (arr_36 [i_12] [8LL] [i_13]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_42 [i_10] [i_11 + 1] [i_10] [i_13])), (arr_38 [i_13] [i_13]))))))));
                                arr_48 [i_11] [i_11] [i_12] [i_10] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((int) (signed char)-53))) : (((arr_38 [i_12] [i_11]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_11] [i_11])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [i_11]))) : (arr_46 [1ULL] [i_11] [1ULL])))) ? (max((6828530124634472872ULL), (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11])))) : (((/* implicit */unsigned long long int) 8236884040177947823LL)))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))), (arr_44 [i_11] [i_12] [i_11])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_53 [i_11] [i_11] [i_11] [12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_40 [i_10] [i_11] [i_12] [i_15])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_52 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 + 2]) + (((/* implicit */int) arr_41 [i_11 + 3] [i_11 + 3]))))) * (max((10639649050193864559ULL), (((/* implicit */unsigned long long int) 3259979748U))))));
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) 1034987547U)) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-4947))))))));
                        arr_56 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 6878579105847926504LL)) ? (var_3) : (((/* implicit */long long int) var_5))))))) * (((((/* implicit */unsigned long long int) min((3561650770869929172LL), (((/* implicit */long long int) arr_38 [i_11] [i_11]))))) / (arr_36 [i_11] [i_11] [i_11])))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3779))) != (18446744073709551594ULL))))));
    }
}
