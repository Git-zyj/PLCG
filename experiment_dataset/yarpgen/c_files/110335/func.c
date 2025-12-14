/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110335
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))) : (((long long int) (+(((/* implicit */int) (unsigned char)155))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), ((unsigned char)113)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        arr_4 [i_0] = ((/* implicit */int) min((((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))), (((/* implicit */short) arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_13 ^= ((/* implicit */_Bool) ((int) 3377699720527872ULL));
        var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (var_0) : (var_0))) & (max((18443366373989023734ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (((unsigned int) (+(((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
        var_15 |= ((/* implicit */signed char) max((((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((unsigned char) var_4)))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_3))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_12 [i_2])) : (arr_11 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_4), (arr_10 [i_3])))))))) || (((((/* implicit */int) arr_10 [i_2 - 1])) == (arr_12 [i_2 + 1])))));
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 13; i_4 += 2) 
                {
                    arr_17 [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) min((arr_16 [i_2] [i_2] [i_4] [i_4]), (arr_16 [i_2] [i_3] [i_4] [i_4])))), (((unsigned char) arr_9 [i_4]))))) ? (((/* implicit */unsigned long long int) max((arr_11 [i_4 - 1] [i_2 - 1]), (((/* implicit */long long int) var_6))))) : (((arr_13 [i_2 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))));
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(max((var_2), (var_2)))))) | (max((max((((/* implicit */unsigned long long int) var_12)), (18443366373989023734ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (signed char)13)))));
                }
                arr_19 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (((((((/* implicit */_Bool) 18443366373989023743ULL)) ? (((/* implicit */unsigned int) 1529058069)) : (var_10))) >> (((((/* implicit */int) max(((unsigned char)112), ((unsigned char)121)))) - (109)))))));
                var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17961721488824743280ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32757)), ((unsigned short)34716))))) : (max((arr_11 [i_3] [i_2]), (var_11)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        arr_22 [i_5] = ((((((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (var_5) : (((/* implicit */int) (unsigned short)24174)))) > (((/* implicit */int) (unsigned short)41385)))) ? (((/* implicit */unsigned long long int) (~(arr_15 [i_5] [i_5] [i_5])))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5 - 1]))))));
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((4U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [6U]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10))))))) : (((((/* implicit */_Bool) arr_14 [i_5 + 1] [0])) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) max((var_12), (var_11))))))));
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned short)60404)) : (((/* implicit */int) (unsigned short)46983)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)139)) << (((((/* implicit */int) (unsigned char)241)) - (222)))))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5])))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [5]))) : (-5455344555998228340LL)))))));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 12; i_6 += 3) 
    {
        arr_27 [i_6] = var_12;
        var_21 = ((/* implicit */unsigned long long int) ((arr_16 [i_6 + 1] [i_6 + 1] [8U] [i_6]) ? (var_12) : (((/* implicit */long long int) arr_12 [i_6 + 3]))));
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_30 [i_7] |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)37640))));
        var_22 = max((-1LL), (((/* implicit */long long int) (short)32767)));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8])) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_31 [i_8]) : (arr_31 [i_8]))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_8])) ? (arr_31 [i_8]) : (9U)));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (int i_12 = 2; i_12 < 22; i_12 += 4) 
                        {
                            {
                                arr_49 [i_8] [i_8] [i_8] [i_12] = ((/* implicit */unsigned long long int) -8654760869784763382LL);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_36 [i_8]))) - (((var_9) ? (((/* implicit */int) (short)-7763)) : (((/* implicit */int) (unsigned char)99))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) ((arr_34 [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_39 [i_9 - 1] [i_8])));
                                arr_54 [i_10] |= ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) var_8);
        arr_55 [i_8] = ((/* implicit */unsigned int) ((long long int) arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]));
    }
}
