/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123834
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), ((unsigned short)57455)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((unsigned int) arr_0 [i_1] [i_1]))))) ? (((arr_3 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0])))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_2 [i_0]) - (((var_11) ? (4720611022007773778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_1 [i_2]);
                var_21 -= ((/* implicit */short) arr_1 [i_2]);
                arr_12 [i_3] [i_2] &= ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_4))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30923)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_19 [i_5]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (1583602356U))))))) | (arr_9 [i_6])));
                    var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5 - 1] [i_5 - 1])) ? (max((-1073741824), (((/* implicit */int) (unsigned short)8063)))) : ((~(((/* implicit */int) var_14)))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_25 [i_4] [i_8 - 1] [i_5 - 1] [i_5 - 1] [i_6] [i_7]), (arr_29 [i_5] [i_5] [i_5] [i_5 - 1] [(signed char)0] [i_8 - 2] [i_8 - 2])))), (((arr_25 [i_4] [i_7] [i_6] [i_5 - 1] [i_8] [i_6]) ? (402653184U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_5 - 1] [i_5 - 1] [(signed char)2] [i_8 - 1] [i_8])))))));
                                arr_30 [i_8] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_5 - 1]))))) * (max((min((arr_20 [i_4] [i_5 - 1] [i_7] [i_8]), (((/* implicit */unsigned int) (unsigned short)65530)))), (((/* implicit */unsigned int) ((arr_20 [i_4] [i_5] [i_6] [i_7]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-27493))))))))));
                                var_24 = ((((/* implicit */_Bool) max((18072412575333533668ULL), (((/* implicit */unsigned long long int) ((arr_1 [i_5]) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27493))) != (var_17))))) : (((((/* implicit */_Bool) arr_17 [i_6] [i_8 + 1] [i_6])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (arr_19 [i_8])))) : (arr_28 [i_4] [i_5] [i_6] [i_8] [i_8]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)31)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((7052642433114176456LL) != (((/* implicit */long long int) arr_9 [i_5 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) arr_14 [i_4] [i_5 - 1])) : (((/* implicit */int) (signed char)43))))))))) : (((max((((/* implicit */unsigned long long int) (unsigned short)57453)), (2675138298028780562ULL))) >> (((((5470923647952740984ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (5470923647952741337ULL)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_7) ? (((/* implicit */int) var_3)) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_0 [i_5 - 1] [i_5 - 1])) ? (arr_0 [i_5 - 1] [i_5 - 1]) : (arr_0 [i_5 - 1] [i_5 - 1])))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)33366))))))) ? ((((!(((/* implicit */_Bool) arr_15 [i_6] [i_9])))) ? (((/* implicit */unsigned long long int) (+(arr_10 [i_6] [i_5])))) : (((((/* implicit */_Bool) var_8)) ? (3831348457025661197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_6])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (3831348457025661197ULL)))))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((arr_32 [i_4] [i_4] [i_4] [i_5] [i_6] [i_9]), (var_0)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned short)57455))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_16)))))) % ((+(arr_10 [i_9] [i_5])))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        arr_36 [i_4] [i_5] [i_5 - 1] [i_6] [i_10] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)));
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)19735)) : (var_2))), ((+(arr_9 [i_5])))))) ? (min(((~(((/* implicit */int) (unsigned short)43775)))), (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_9)) * ((-(((/* implicit */int) var_12))))))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)895)) || (((/* implicit */_Bool) 65535))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43770)) || ((_Bool)1))))) * ((-(15771605775680771050ULL))))))))));
                        arr_37 [i_4] [i_5] [i_6] [i_6] [i_10] [i_10] = ((/* implicit */_Bool) min(((-(((arr_13 [i_10]) + (((/* implicit */int) var_3)))))), (((/* implicit */int) arr_17 [i_4] [i_5] [i_4]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [i_5] [i_11] [i_4] [i_4])) * (((/* implicit */int) arr_29 [i_4] [i_5] [i_5] [i_6] [i_11] [i_6] [i_11]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_6] [i_5] [i_6]))))) ? ((-(((/* implicit */int) arr_3 [i_4] [i_11])))) : (((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                        var_33 = ((/* implicit */unsigned short) max((arr_10 [i_4] [i_6]), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)1))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned short) arr_42 [i_12])))));
        var_35 -= ((/* implicit */unsigned int) arr_41 [i_12] [i_12]);
        var_36 &= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    }
    for (short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
    {
        arr_45 [i_13] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 72057594037927935ULL)) || (((/* implicit */_Bool) var_8))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56483)) - (((/* implicit */int) var_7))))), (arr_42 [i_13])))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                {
                    arr_53 [i_14] [i_15] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_43 [i_14]), (arr_40 [i_14]))))) - (0ULL))), (((/* implicit */unsigned long long int) (-(8150311443908494430LL))))));
                    var_37 ^= ((/* implicit */unsigned int) ((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_47 [i_15] [i_14] [i_15])) : (((/* implicit */int) arr_48 [i_13] [i_15]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15])))));
                    arr_54 [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_55 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_13] [i_14]))))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_8)))) * (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_41 [i_13] [i_13])) - (32)))))))));
                }
            } 
        } 
    }
}
