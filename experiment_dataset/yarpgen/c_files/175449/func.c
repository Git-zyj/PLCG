/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175449
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9057866496726180787ULL)) ? (((/* implicit */int) (unsigned char)152)) : (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))));
    var_15 = ((/* implicit */short) ((var_11) & (((/* implicit */long long int) max((((((/* implicit */int) var_4)) % (((/* implicit */int) var_1)))), (((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */unsigned long long int) (((-((+(((/* implicit */int) (unsigned char)112)))))) - (((/* implicit */int) (unsigned short)29798))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3 + 2] [i_0 - 1])) ? (arr_0 [i_3 - 2] [i_0 + 1]) : (arr_0 [i_3 - 1] [i_0 + 1])));
                        var_17 = ((/* implicit */int) var_2);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_19 [1U] [1U] [i_6] [i_5] [(unsigned char)15] [6] [i_0] &= ((/* implicit */short) ((arr_14 [i_0 + 2] [i_0 + 1]) ? (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1]))));
                            arr_20 [(signed char)6] = ((/* implicit */unsigned int) ((int) var_4));
                        }
                    } 
                } 
            } 
            var_18 += ((arr_1 [i_0 + 2]) && (((/* implicit */_Bool) var_9)));
            arr_21 [8] [8] [i_1] = ((/* implicit */unsigned char) var_12);
        }
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((arr_14 [i_0 + 1] [i_0 + 2]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) min((arr_14 [i_0 + 2] [i_0 + 1]), (arr_14 [i_0 + 1] [i_0 - 1])))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_21 += ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (arr_23 [17] [i_7]))) ? (((((/* implicit */_Bool) 9292098075089196646ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)-21830)))), (max(((+(((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned char)83))))))));
        arr_24 [i_7] = ((/* implicit */unsigned int) arr_23 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8232222844268556724ULL)) ? (arr_9 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 1; i_10 < 8; i_10 += 2) 
            {
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_11 [i_8] [i_9] [i_10]))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14455334003849144479ULL)) ? (10214521229440994891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42473)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_12)));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 2; i_12 < 10; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1436553540U))));
                        arr_41 [i_8] [i_8] [i_9] [i_11] [i_11] [i_13] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_15 [i_13] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1]))));
                    }
                    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_39 [i_8] [i_8] [i_11] [i_12 - 2] [i_8])) / (((/* implicit */int) var_9)))) % (((var_6) ? (((/* implicit */int) arr_28 [i_8] [i_8] [i_12 + 1])) : (((/* implicit */int) arr_16 [i_12] [i_9] [i_9] [i_9] [i_9] [i_8]))))));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            arr_50 [i_16] [i_15] [3] [(unsigned short)2] [i_8] = ((/* implicit */unsigned long long int) arr_26 [i_8]);
                            arr_51 [(signed char)10] [i_9] = ((/* implicit */short) arr_15 [i_8] [i_9] [i_14] [i_15] [i_16] [i_16]);
                        }
                    } 
                } 
                var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [4ULL])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_31 [i_8]))));
                var_28 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
            }
        }
    }
}
