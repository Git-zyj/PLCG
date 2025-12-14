/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133932
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
    var_10 = min((var_6), (((/* implicit */long long int) var_5)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [(signed char)1] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)24))))), (min((((/* implicit */long long int) var_8)), (var_4)))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_7))))))) == (((((/* implicit */_Bool) var_8)) ? ((~(var_3))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_6)))))))))));
        arr_3 [6] [6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_7)))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_3))) : (((((var_3) | (((/* implicit */unsigned long long int) var_6)))) & (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_12 -= ((/* implicit */unsigned short) (unsigned char)130);
                    var_13 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
    {
        arr_12 [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_10 [i_3])), (var_0)))) ? (var_1) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) var_6))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_11 [i_3])) : (var_6))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))))))) ? (var_3) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))), (((/* implicit */unsigned long long int) var_7)))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 4; i_4 < 22; i_4 += 2) 
        {
            arr_15 [i_4] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((/* implicit */long long int) max((arr_11 [i_3 - 1]), (((/* implicit */unsigned int) var_8))))) : (max((((/* implicit */long long int) (signed char)12)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_10 [i_3 - 1]))))) : (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) min((var_8), (((/* implicit */short) var_5))))))) : (((/* implicit */int) ((max((var_1), (var_9))) == (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)8456)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)86)), ((unsigned char)93))))))));
                        arr_27 [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(9223372036854775807LL))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (7915227222626088569LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))));
                        arr_28 [i_8 + 2] [i_6] [i_6] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)32)) ? (5868410856554982826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) == (min((var_3), (((/* implicit */unsigned long long int) var_2)))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_5] = (unsigned short)4511;
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (short i_10 = 3; i_10 < 14; i_10 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */int) ((min(((-9223372036854775807LL - 1LL)), (var_6))) == (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))))), ((-(max((((/* implicit */int) arr_14 [i_5] [i_5])), (139987851))))))))));
                    arr_36 [i_5] [i_9] [i_5] [i_9] = ((/* implicit */int) var_3);
                    var_18 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_32 [i_9] [i_10 - 3] [i_10 + 2]))))), (min((arr_26 [i_9] [i_10 + 4] [i_10 + 4] [i_10 + 1]), (((/* implicit */unsigned long long int) arr_32 [i_10] [i_10 - 3] [i_10 - 1]))))));
                }
            } 
        } 
        arr_37 [i_5] [i_5] = ((/* implicit */unsigned char) var_9);
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 4; i_11 < 16; i_11 += 2) 
        {
            for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) (unsigned char)19))))), (((((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_11] [i_5])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) var_5))));
                        var_20 = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 3 */
                        for (signed char i_14 = 4; i_14 < 17; i_14 += 3) 
                        {
                            arr_49 [i_14 - 3] [i_11 - 1] [(unsigned short)13] [i_13] [i_5] [i_14] = max((((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)62)) == (((/* implicit */int) var_0))))))), (((((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) -1)) : (max((((/* implicit */unsigned int) var_7)), (arr_16 [i_5]))))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_8)))) == (arr_35 [i_14])));
                            var_22 = ((/* implicit */short) var_7);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            arr_52 [i_11] [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) arr_42 [i_5] [i_11 - 1])), (var_4))))))));
                            var_23 = min((((/* implicit */unsigned long long int) min((-653626849), (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (_Bool)1)));
                        }
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            arr_55 [i_13] [i_12] [i_13] [i_12] [i_16 - 1] = ((/* implicit */short) var_3);
                            arr_56 [i_5] = ((/* implicit */unsigned short) arr_35 [i_12 + 1]);
                            var_24 ^= ((/* implicit */unsigned char) arr_54 [(unsigned char)12] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_16 - 1]);
                            arr_57 [i_5] [i_5] [i_12 - 1] [i_13 - 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_44 [i_5] [i_11 + 1] [i_11 + 1] [i_13 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_4)));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (8731120011240981249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_5] [i_5] [i_5] [i_5] [i_5]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_5]) ? (1818072403) : (((/* implicit */int) var_8))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_54 [i_11] [i_5] [i_11] [i_13] [i_13])), (var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_11 - 2] [i_11 - 2])) + (((/* implicit */int) var_2))))))) : (min((arr_39 [i_11 - 2] [i_12 - 1]), (((/* implicit */unsigned long long int) (unsigned short)7458)))))))));
                        var_27 += ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        } 
    }
}
