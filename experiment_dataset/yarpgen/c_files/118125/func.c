/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118125
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((13ULL) ^ (18446744073709551585ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4121132658526359338LL)) ? (3163623573867792930LL) : (((/* implicit */long long int) -596562971))))))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_17 &= ((/* implicit */unsigned char) ((short) ((long long int) arr_1 [i_0 + 3])));
            arr_7 [i_0 - 2] [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1]);
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_0 - 2] = ((/* implicit */unsigned int) arr_3 [i_2]);
            var_18 = ((unsigned char) (~(((/* implicit */int) arr_9 [i_0 - 2] [i_2] [i_0 - 2]))));
            var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 11ULL)))) < (22ULL))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 1489641968U)) ? (991607479U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_0 - 1]))))))));
                var_21 *= ((/* implicit */unsigned short) ((int) 0ULL));
                arr_18 [i_0] [i_3 - 2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
            }
            for (short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                arr_21 [i_3 + 1] [i_3] [i_5] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? ((-(991607477U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_15))))))));
                arr_22 [i_5] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */int) ((short) var_9))) + (72))) - (18)))));
            }
            arr_23 [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3] [i_0 + 1] [i_0]))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_22 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6])) ? (arr_19 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6])))))) || ((!(((/* implicit */_Bool) (unsigned char)184)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 4; i_7 < 16; i_7 += 2) 
        {
            var_23 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)98)) / (((/* implicit */int) arr_14 [i_7 - 3])))) * (((/* implicit */int) arr_14 [i_6]))));
            var_24 = ((/* implicit */unsigned char) arr_2 [i_6]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) 860008008))), ((~(((/* implicit */int) arr_8 [i_7] [i_6] [i_6]))))))) ^ (((unsigned long long int) arr_30 [i_6] [i_7 + 1] [i_7 - 2]))));
            arr_31 [i_7] [i_6] [i_6] &= (+(((((/* implicit */int) (unsigned short)12982)) << (((2109681675U) - (2109681674U))))));
        }
        for (short i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                arr_38 [i_9] [i_9] [i_8] [i_6] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_34 [i_6] [i_8 - 1] [i_9])) >> (((((/* implicit */int) arr_34 [i_6] [i_8 - 1] [i_9])) - (171))))));
                arr_39 [i_9] [i_8] [i_8 + 2] [i_9] = ((/* implicit */int) ((min((1364302351U), (((/* implicit */unsigned int) arr_20 [i_8 + 2] [i_8 - 1] [i_8 + 2])))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_2)))) ? (min((((/* implicit */int) arr_0 [i_8])), (var_15))) : (((/* implicit */int) arr_37 [i_8 + 1] [i_8] [i_8 + 2] [i_9])))))));
            }
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_14))));
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
        {
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_15 [i_6]))) != (((/* implicit */int) ((3827608669U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                arr_47 [i_11 + 1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_11] [i_11 - 1])) ? (((/* implicit */unsigned long long int) arr_35 [i_10 + 2] [i_10] [i_11])) : (3ULL)));
                var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                arr_48 [i_6] [i_10 - 1] = ((int) arr_16 [i_10 + 2] [i_11 + 1]);
            }
            var_29 = ((/* implicit */unsigned int) ((short) ((unsigned short) var_1)));
            var_30 = ((/* implicit */signed char) ((int) var_14));
        }
        var_31 = ((/* implicit */int) ((unsigned char) ((long long int) arr_37 [i_6] [i_6] [i_6] [i_6])));
    }
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                arr_58 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_12] [i_13])) ? (((/* implicit */int) arr_50 [i_14] [i_12])) : (((/* implicit */int) arr_50 [i_13] [i_12]))));
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((unsigned char) arr_19 [i_14] [i_13] [i_13] [i_12])))));
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_64 [i_16] [i_16] [i_15] [i_14] [i_14] [i_13] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) -860008009)))));
                        arr_65 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) var_14);
                        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_13] [i_14] [i_16])) != (((/* implicit */int) arr_52 [i_16] [i_14] [i_13]))));
                    }
                    arr_66 [i_15] [i_14] [i_13] [i_12] = ((/* implicit */unsigned char) ((int) var_3));
                }
            }
            arr_67 [i_12] [i_13] = ((/* implicit */int) ((short) min((((/* implicit */signed char) ((12902382575711906851ULL) < (((/* implicit */unsigned long long int) arr_16 [i_12] [i_13]))))), (var_8))));
        }
        arr_68 [i_12] = ((/* implicit */unsigned int) ((unsigned char) 14680064U));
    }
    var_34 = ((/* implicit */unsigned long long int) var_11);
}
