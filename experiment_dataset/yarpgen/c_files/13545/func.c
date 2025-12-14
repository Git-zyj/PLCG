/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13545
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
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((_Bool) max((arr_2 [i_0]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_10))))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_0 - 2] [i_2] [i_3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_4 [i_0] [(short)16]))))))))) > ((((-(var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [(unsigned short)2] [i_1] [(unsigned short)2] [20])), (arr_5 [11] [i_1 - 3] [i_2])))))))));
                        var_15 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [20ULL] [i_1] [i_2]))))))))));
                        arr_11 [i_0] &= ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [15U]))) ^ (arr_4 [21ULL] [(unsigned char)7]))))), (((/* implicit */long long int) ((min((var_0), (((/* implicit */unsigned int) arr_6 [14U] [i_2] [i_3])))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_10))))))))));
                        var_16 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_3 [i_3])), (var_3)))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((var_11), (((/* implicit */int) arr_10 [(short)20] [i_0 + 1] [i_2] [(short)6]))))) >= (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])) ? (max((arr_4 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_8 [i_0 - 1] [i_1] [i_3])))) : (max((((/* implicit */long long int) arr_6 [i_2] [i_1 - 2] [11U])), (arr_4 [6ULL] [i_3])))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_1])) || (arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_0]))) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [23LL])) : ((~(((/* implicit */int) var_6)))))) & ((+(((((/* implicit */int) arr_9 [i_0 + 1] [i_0])) % (((/* implicit */int) var_8))))))));
                        var_19 -= ((/* implicit */unsigned short) var_1);
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_16 [(unsigned short)2] [i_1] [i_1 + 1] [i_1 - 1])) + (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1 - 3] [i_0] [i_6])) ? (((/* implicit */int) arr_7 [14U] [i_1 - 3] [i_1])) : (((/* implicit */int) var_6))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((arr_0 [i_0 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_9)))) * (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                            var_22 = ((/* implicit */unsigned long long int) var_2);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))))));
                            var_24 = ((/* implicit */unsigned char) (+(var_0)));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) (+(max((((((/* implicit */unsigned int) var_11)) / (var_3))), (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_6] [i_8])))))))));
                            var_26 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [14ULL]))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1 - 2])) && (((/* implicit */_Bool) arr_9 [i_1 - 2] [i_0 - 1])))))));
                            arr_26 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_1] [i_0 - 2] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [10] [i_1 + 2] [i_5 + 2] [22] [i_8] [(_Bool)1] [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0 + 1] [i_1] [i_1] [i_6] [i_8])))))))) && ((!((!(((/* implicit */_Bool) var_1))))))));
                            var_27 = arr_17 [i_1 + 1] [9U] [i_1 + 1];
                        }
                        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [2U] [6U] [(unsigned char)22] [i_1] [i_0 - 1]))) % (max((((/* implicit */unsigned int) var_9)), (arr_18 [i_0 + 1] [(short)12] [i_0] [i_0 - 2]))))))))));
                            var_29 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) var_9)), (arr_15 [i_0] [22LL] [i_0] [i_0] [i_0 - 2]))) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_25 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_5 + 2] [i_5 + 3] [i_6] [(unsigned short)7])))))))) ^ (var_3));
                        }
                        var_30 = ((/* implicit */int) ((((/* implicit */int) arr_21 [(unsigned short)16] [i_1] [i_1 + 2] [i_5 + 4] [i_1 + 2] [2U])) == ((+(((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 23; i_10 += 4) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_1 + 2] [i_5] [i_10] [i_11 - 1] = ((/* implicit */short) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_18 [i_0] [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) var_12))))) % (max((((/* implicit */long long int) arr_32 [i_0 - 1] [(unsigned short)18] [0U])), (arr_0 [i_0 - 2])))))));
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10 - 2] [(short)21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0 - 2] [4ULL])), (var_0))), (((/* implicit */unsigned int) arr_15 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_5 - 1] [i_5 + 2]))))) || ((((-(var_0))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_5])) << (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 + 1] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                }
                arr_37 [i_0] = (-(((/* implicit */int) min((arr_23 [i_1 - 1] [i_1 + 2]), (arr_23 [(unsigned short)22] [i_1 + 2])))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) * (var_7)))) ? (var_7) : (((/* implicit */unsigned long long int) ((unsigned int) var_7))))));
}
