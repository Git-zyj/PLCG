/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141577
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
    var_12 = ((/* implicit */int) ((((((/* implicit */int) (signed char)3)) - (((/* implicit */int) (unsigned short)65535)))) != (((/* implicit */int) ((((((/* implicit */_Bool) 14235743121648600320ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) >= (((unsigned int) (unsigned short)0)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_1)), (var_11))), (((/* implicit */unsigned int) max(((_Bool)0), ((_Bool)0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4211000952060951296ULL), (((/* implicit */unsigned long long int) (signed char)110))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) var_8))))))) : (max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_4))))))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (141147006846127406LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (3691730295408126973ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) var_0)))))));
        var_15 |= ((/* implicit */long long int) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (((((/* implicit */_Bool) var_0)) ? (5651132390545376904ULL) : (((/* implicit */unsigned long long int) 141147006846127436LL))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (~(((long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~((-(((/* implicit */int) var_1)))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23143)) | (arr_12 [i_3] [i_3])))) ? (819884156U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)99)))))));
                                arr_16 [i_5] [i_5] [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))) * (arr_3 [(signed char)9])));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((_Bool) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4]))));
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(unsigned char)6] [i_2]))) ? ((~(2426080107113279697ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_11))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_11))))));
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned char)10))) ? ((+(var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8)))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((/* implicit */int) (!(((/* implicit */_Bool) -507129730))))))))));
                        var_24 &= ((/* implicit */short) var_0);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) arr_17 [20] [6U] [i_1] [i_7] [i_8 + 1] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)2] [(signed char)0] [i_3] [i_7] [i_8 + 1] [(_Bool)1])))))));
                            var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [(unsigned char)20] [i_8] [i_3 + 2] [i_8 - 1])) : (((/* implicit */int) var_4)))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1711432685U)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) (-(arr_19 [i_1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22221))) : (3388540306U)))));
                        }
                        var_29 = ((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_7] [19LL] [10U])) ? (arr_20 [i_1] [i_2] [i_3] [i_7] [i_1] [i_7]) : (-1069417290));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        arr_25 [i_9 + 1] [i_9] = ((/* implicit */unsigned int) var_5);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (int i_11 = 4; i_11 < 14; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    {
                        arr_34 [i_9] [i_11] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (((((/* implicit */_Bool) (unsigned short)65516)) ? (-141147006846127435LL) : (((/* implicit */long long int) 1422583854))))));
                        arr_35 [i_9 + 1] [(unsigned short)10] [i_11] [i_9] [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((4275936190U) | (4111392758U))) - (4292861939U)))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((var_11) - (114117843U)))))), (var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
