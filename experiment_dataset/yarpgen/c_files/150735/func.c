/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150735
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
    var_10 ^= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) ^ (((/* implicit */int) (signed char)-58))))) | (var_1)));
            var_12 ^= ((/* implicit */signed char) ((arr_2 [i_0] [i_1] [i_0 + 2]) * (((/* implicit */unsigned int) var_9))));
            var_13 = ((/* implicit */int) (signed char)55);
        }
        for (int i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) - ((-(((/* implicit */int) arr_1 [i_0] [i_2]))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) (_Bool)1)) << (((var_1) - (3451294372418194306LL)))))));
        }
        for (int i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((int) arr_7 [i_0]));
            arr_10 [12U] [10LL] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48001))))) ? (arr_4 [i_0 - 1] [i_3] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])))) % (((((/* implicit */int) (_Bool)1)) * (17)))));
        }
        for (int i_4 = 2; i_4 < 14; i_4 += 3) /* same iter space */
        {
            arr_13 [(unsigned char)10] [(unsigned char)10] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) ^ (16007689298079098849ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33060))) == (arr_2 [i_0] [i_4 + 2] [i_4 + 2]))))) : (arr_2 [i_4 - 1] [i_0] [i_0]));
            arr_14 [i_0] = ((/* implicit */long long int) ((arr_12 [i_0 + 3] [i_4 - 2] [i_0]) ? (((/* implicit */int) arr_12 [i_0 + 3] [i_4 - 2] [i_0])) : (var_9)));
            arr_15 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 2] [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
        }
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) / (arr_2 [6U] [i_0] [i_0 - 1]))))));
        arr_16 [i_0] = ((/* implicit */int) arr_11 [i_0] [i_0 + 3] [i_0 + 3]);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (var_4))))))));
        arr_17 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) var_6)) * (((/* implicit */int) arr_7 [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) var_6))) + (2147483647))) >> ((~(4294967267U)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                arr_26 [i_6] [i_6] [i_7] |= (signed char)36;
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_5])))))) ? (-9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)5])))));
                arr_27 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (!(arr_21 [i_6])));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) % (((((/* implicit */int) arr_18 [i_7])) & (((/* implicit */int) arr_18 [i_6])))))))));
                var_22 = ((/* implicit */int) (+(max((var_7), (((/* implicit */long long int) arr_21 [i_6]))))));
            }
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 3; i_9 < 17; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_38 [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) arr_22 [i_6] [i_8] [i_6])), (min((var_1), (((/* implicit */long long int) 27))))))));
                            arr_39 [i_5] [12ULL] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_2)), (var_1)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                var_23 ^= ((/* implicit */unsigned short) var_1);
                arr_46 [i_5] [i_12] [(signed char)2] = ((/* implicit */unsigned short) var_9);
                var_24 = ((/* implicit */unsigned int) var_5);
                var_25 |= ((/* implicit */short) ((var_9) % (((/* implicit */int) ((((/* implicit */int) arr_22 [i_5] [i_11] [(unsigned short)18])) <= (((/* implicit */int) arr_43 [(signed char)13])))))));
            }
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (unsigned char i_14 = 4; i_14 < 20; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_9)))) ? (((/* implicit */int) (unsigned short)56131)) : (((/* implicit */int) arr_21 [i_14 - 4])))))));
                        var_27 = ((/* implicit */long long int) ((var_4) / (((/* implicit */int) var_6))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_51 [0ULL] [i_15] [i_5] [i_5] [i_5] [i_15])) : (((/* implicit */int) (unsigned char)24)))) - (101))))) <= (((((/* implicit */int) arr_40 [i_15] [i_15 - 1] [i_15 - 1])) ^ (((/* implicit */int) arr_31 [i_5] [i_15 - 1] [i_15 - 1]))))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) arr_36 [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_5])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_24 [i_5] [i_15 - 1] [i_5] [i_5]))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
    }
    for (unsigned int i_16 = 2; i_16 < 12; i_16 += 3) 
    {
        arr_57 [i_16] [i_16 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_16 + 1])) ? ((((+((-2147483647 - 1)))) / (((/* implicit */int) var_2)))) : (min((((((/* implicit */int) arr_50 [i_16 - 2])) * (((/* implicit */int) (unsigned char)92)))), (((/* implicit */int) var_2))))));
        arr_58 [i_16] [i_16] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_53 [i_16 - 1] [i_16 - 2])))), (((((/* implicit */int) arr_53 [i_16 + 1] [i_16 - 1])) % (((/* implicit */int) arr_53 [i_16 + 1] [i_16 - 1]))))));
        arr_59 [i_16] [i_16] = ((/* implicit */unsigned short) ((min((arr_50 [i_16 - 1]), (arr_50 [i_16 - 2]))) ? (((/* implicit */int) max((arr_50 [i_16 - 1]), (arr_50 [i_16 + 1])))) : ((~(var_3)))));
    }
}
