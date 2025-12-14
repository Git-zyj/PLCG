/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146712
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] [9U] [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-107)) ^ (arr_2 [i_3]))) | ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))))));
                            var_12 *= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((arr_8 [i_0]), (((/* implicit */unsigned long long int) var_5))))))));
                            arr_12 [i_0] [i_0] [(short)4] [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)13))))) + ((-(var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((var_0) << (((((/* implicit */int) (signed char)-107)) + (126)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)44489), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_7 [(signed char)4] [i_0] [i_0] [i_0]) > (min((((/* implicit */unsigned int) (unsigned short)21039)), (arr_7 [i_0] [11U] [i_1] [1]))))))));
                var_13 = ((/* implicit */unsigned int) (+((((~(arr_2 [i_0]))) | ((~(((/* implicit */int) arr_4 [(unsigned short)9]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_14 *= ((/* implicit */unsigned char) ((unsigned long long int) min((var_0), (((/* implicit */unsigned int) arr_15 [i_4 + 1])))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)107))))) ? ((+(arr_15 [i_4 + 1]))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_15 [i_4]) : (((/* implicit */int) arr_14 [i_4]))))))) >= (min((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) arr_15 [i_4 + 1]))))));
        var_15 = ((/* implicit */unsigned long long int) var_8);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_6] [i_6] [(signed char)10] [i_8] = ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5] [i_5])) ? (arr_22 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_22 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_24 [i_5] [i_7] [i_8] [i_8])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
                    }
                } 
            } 
            arr_28 [i_6] = ((/* implicit */short) var_3);
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 17; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        arr_36 [i_6] [i_6] = (~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))))));
                        arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2828826282055050696ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2393833671U)))) ? (((var_6) ^ (arr_31 [i_6]))) : (((/* implicit */unsigned int) var_1))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [i_5] [i_5] [17U] [i_6] [i_10] [i_11] = ((((/* implicit */_Bool) 15508346633493341146ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) : (arr_39 [i_9 - 1] [i_6] [i_6] [i_6] [i_6]));
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)100))));
                            var_18 -= ((/* implicit */_Bool) (+(arr_34 [i_9] [i_9 + 1] [3U] [i_9 - 1])));
                        }
                    }
                } 
            } 
            arr_43 [i_6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))) % (var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2U] [i_6])))));
            arr_44 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) arr_25 [i_5] [i_6] [i_6] [i_6]);
        }
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 15508346633493341146ULL)) ? (((/* implicit */int) (unsigned short)44489)) : ((-(((/* implicit */int) (signed char)100)))))))));
        arr_45 [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967292U))));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned int i_14 = 3; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                arr_57 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1] [15U] [i_13] [i_13] = ((/* implicit */unsigned short) (-((+(arr_56 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13])))));
                                var_20 ^= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_12] [i_13] [i_14 - 3] [i_14] [i_15] [i_12]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_50 [i_12] [i_13 - 1] [i_16])) : (var_1)))));
                            }
                        } 
                    } 
                    arr_58 [i_14 - 2] [i_13] [i_13] [i_12] = ((/* implicit */unsigned long long int) var_8);
                    arr_59 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((_Bool) (~((-(2765316258U))))));
                    arr_60 [i_12] [i_13] [i_14 - 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)15)), (-3125749208623659683LL)));
                    var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_12] [i_12] [(signed char)18])) ? (2031616U) : (((/* implicit */unsigned int) arr_55 [i_12] [i_13 - 1] [i_14] [i_12] [i_13]))))) ? (max((-1LL), (((/* implicit */long long int) 4292935680U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (2721658088U)))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_30 [i_17] [i_17] [i_17])))) + (2147483647))) >> (((((arr_24 [i_17] [(signed char)8] [i_17] [i_17]) ? (arr_7 [i_17] [i_17] [i_17] [1ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5013))))) - (807050001U)))))) - (max((var_6), (((/* implicit */unsigned int) arr_52 [i_17] [i_17] [i_17] [i_17]))))));
        arr_64 [(unsigned char)3] [i_17] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_6)) ? (arr_18 [6U]) : (arr_0 [i_17]))), (max((arr_18 [i_17]), (arr_0 [i_17])))));
        arr_65 [i_17] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (arr_34 [i_17] [i_17] [i_17] [i_17])))), (((((/* implicit */_Bool) arr_56 [(unsigned char)8] [i_17] [i_17] [i_17] [(unsigned char)8])) ? (7016936631396007062LL) : (arr_33 [i_17] [i_17] [(unsigned char)10] [i_17]))))), (((/* implicit */long long int) (short)-1))));
    }
}
