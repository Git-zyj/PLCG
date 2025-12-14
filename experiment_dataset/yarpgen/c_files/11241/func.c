/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11241
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_10))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) var_9)), (var_16)))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((arr_7 [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) != (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2])) || (((/* implicit */_Bool) arr_7 [i_3] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1])))))) : (((long long int) (unsigned short)23155)))))));
                        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [17ULL])))))) ? (max((var_19), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) min((arr_8 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_2] [i_1] [i_3]))))))));
                        var_23 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6610305491620518515LL)) | (3277120559210193198ULL)))) ? (min((var_2), (var_19))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) | (-1154073865355960882LL));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_24 = (~((~(var_19))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (((((/* implicit */_Bool) -6610305491620518515LL)) ? (-1154073865355960884LL) : (-6610305491620518515LL)))))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)-1))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), ((unsigned char)43)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_4))))));
            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_0] [i_5] [i_0])) >> (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) - (35))))) < ((+(((/* implicit */int) arr_13 [i_0] [i_5] [i_0]))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_19)))) ? (1766331011U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-116)))))))) ? (max((((/* implicit */unsigned long long int) 2528636285U)), (((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (arr_12 [i_0] [i_5] [i_5])))))));
        }
        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(signed char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_14))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))))))), (arr_6 [i_0] [i_0] [i_0] [(unsigned short)12])));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)198))))), (var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_6)))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_4))))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (14391)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (8541765493390441325LL)))))));
    var_30 *= ((/* implicit */unsigned char) ((max((min((2564641742U), (((/* implicit */unsigned int) (signed char)3)))), (((/* implicit */unsigned int) var_1)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -2150623766988074226LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 3 */
    for (long long int i_6 = 3; i_6 < 21; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((arr_18 [i_8] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) var_9);
                        var_33 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (arr_19 [i_6] [i_6 - 2] [i_6 - 3]) : (var_14))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)3880)), (arr_24 [i_6] [i_6 + 1] [i_6]))))));
                        var_34 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_18 [15U] [i_7]))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */int) max(((unsigned short)2048), (((/* implicit */unsigned short) (unsigned char)125))))) : (((/* implicit */int) arr_24 [i_6 + 1] [i_7] [i_8]))))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_1))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [14LL] [i_7] [i_6 + 1] [10ULL] [i_6 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6 - 3] [i_6 - 3] [i_10] [i_6 - 3] [i_10] [(short)20])))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [i_6 - 3] [i_6 - 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) (short)26965))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (max((var_19), (((/* implicit */long long int) (signed char)1)))))))));
                                var_39 = ((/* implicit */unsigned short) var_13);
                                var_40 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)79)), (max((2305843009213693952ULL), (((/* implicit */unsigned long long int) var_0))))));
                            }
                        } 
                    } 
                    arr_32 [i_6] [5ULL] [i_8] = ((/* implicit */short) var_10);
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_7)))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (3007053022738124923ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned short)14513)) : (((/* implicit */int) (short)30548))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (var_17)))))))));
}
