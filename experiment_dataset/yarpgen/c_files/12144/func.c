/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12144
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((int) max((((((/* implicit */int) var_15)) != (((/* implicit */int) var_15)))), ((_Bool)1))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65525)))))), (2147483627))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1] [i_4] [i_4] [0ULL] [i_4 - 1])) ? (arr_13 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50)))));
                                arr_17 [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) var_16));
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) != (var_13)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((unsigned int) var_16));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_3] [i_3 - 1] [(unsigned short)13] [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_13 [i_3] [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_0]))))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (-3333564771385285582LL)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (var_11)))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1] [i_6]))))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_6 + 1] [i_1] [i_0]))) ? ((+(((/* implicit */int) arr_5 [6U] [i_1] [i_1])))) : (((/* implicit */int) ((short) (signed char)-108)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [i_6] [i_0]))))) ? (((((/* implicit */_Bool) 8053063680ULL)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                }
                var_26 = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 3] [(unsigned char)6])) * (((/* implicit */int) arr_18 [i_0] [i_1])))))));
                var_27 += ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((unsigned int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (unsigned int i_8 = 4; i_8 < 18; i_8 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_27 [i_7] [i_7] [16U] = ((/* implicit */signed char) var_11);
                    var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned short) var_1))), ((-(((/* implicit */int) arr_21 [i_8])))))) << (((3109813717U) - (3109813714U)))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned long long int) ((2147483615) + (((/* implicit */int) (short)-2222))));
                                arr_33 [(signed char)8] [i_8] [(signed char)8] [i_9] [i_9] [i_8] [i_10] |= ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) var_12)), (var_0))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36673)) ? (((/* implicit */int) (_Bool)1)) : (-2147483599)))))) | (arr_26 [i_7] [i_8] [i_10] [i_10])));
                                var_30 = ((/* implicit */unsigned short) (+(4294967290U)));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    arr_36 [i_12] [i_7] [i_7] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_23 [i_7] [i_7] [i_12]))))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7]))))))))));
                    arr_37 [i_8] |= ((/* implicit */unsigned int) var_11);
                }
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) max((-9223372036854775805LL), (((/* implicit */long long int) ((max((arr_26 [i_14] [(unsigned char)13] [17U] [i_7]), (((/* implicit */unsigned long long int) var_9)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_7])))))))))));
                            var_32 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_26 [i_14] [(short)3] [(short)3] [(short)3]) - (((/* implicit */unsigned long long int) 4467570830351532032LL))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_34 [i_7] [i_7] [i_7])) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(unsigned short)20] [i_7] [(unsigned short)20])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
                var_33 *= arr_22 [i_8] [i_7];
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((unsigned int) ((unsigned int) ((long long int) var_4)))))));
            }
        } 
    } 
    var_35 *= ((/* implicit */unsigned int) max((9223372036854775804LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)14))) : (((/* implicit */int) (unsigned short)65518)))))));
    var_36 = ((/* implicit */unsigned short) (((((-(((long long int) var_11)))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned char) var_12))))) && (((/* implicit */_Bool) var_8))))) - (1)))));
}
