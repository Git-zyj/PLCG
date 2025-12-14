/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177381
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = arr_1 [i_0];
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_0])))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -7865989945064298569LL))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))))) ? ((-(((unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159)))))));
            var_23 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (short)-1)), (arr_2 [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-52)) | (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))))) ? (((/* implicit */int) (short)32766)) : ((~(((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) 761785614U))))))));
            arr_5 [i_1] = ((/* implicit */long long int) ((unsigned int) (unsigned char)243));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) arr_1 [i_5 + 1]);
                            var_25 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_3 [i_5 - 1] [i_5 - 1] [i_4])) * (((/* implicit */int) (signed char)0)))));
                        }
                    } 
                } 
            } 
            arr_15 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551597ULL))))) * (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) 7865989945064298552LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])), (547217561)))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4824469008887296591LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (arr_8 [i_0])))) ? (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)15)))) : (min((arr_0 [i_0] [i_2]), (arr_0 [i_0] [i_0])))))) ? (-4824469008887296591LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) != (547217576))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_24 [i_0] [i_2] [i_6] [i_7] &= ((/* implicit */long long int) (~(min((arr_22 [i_2] [i_6]), (((/* implicit */unsigned int) arr_6 [i_0] [i_7] [i_7]))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_0])) ? (((/* implicit */int) arr_20 [i_7] [i_6] [i_2] [i_0])) : (((/* implicit */int) arr_20 [i_7] [i_6] [i_2] [i_0]))))) >= (10795423157402103436ULL))))));
                        var_28 = ((((/* implicit */_Bool) (~(arr_21 [i_0] [i_0] [i_0] [i_0])))) ? (min((3117349979545860901ULL), (4056560384965972860ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 281474976710592LL)) || (((/* implicit */_Bool) (~(795589990622538979ULL))))));
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) (short)0);
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned int) (!(arr_1 [i_9])));
                            var_32 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 69805794224242688ULL))));
                        }
                    } 
                } 
            } 
            var_33 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_0] [i_0]))) : (0ULL))))));
            arr_34 [i_0] [i_8] = ((unsigned char) 2669231464U);
        }
        for (signed char i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_16 [i_0] [i_0]))));
            arr_37 [i_12] = ((/* implicit */unsigned short) (+(((var_1) >> (((/* implicit */int) ((_Bool) var_19)))))));
            var_35 *= ((/* implicit */signed char) (unsigned char)112);
            arr_38 [i_12] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) + (4824469008887296591LL)));
            arr_39 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_12])) ? (((/* implicit */unsigned long long int) arr_16 [i_12] [i_0])) : (5702827427561709891ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12] [i_12] [i_0]))) / (8767897151981712929ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0])) >= (0)))), (min((arr_11 [i_0] [i_12]), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)243)))) >= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
        }
        arr_40 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 3; i_13 < 10; i_13 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
            {
                arr_45 [i_13] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) / (arr_43 [i_0] [i_0] [i_13 + 1] [i_14])));
                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)223)))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21ULL)) ? (var_18) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_13] [i_15]))) : (((long long int) arr_29 [i_15] [i_13 + 2] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32746)) ? (17038655872459968799ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11594)))));
                            var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */_Bool) arr_32 [i_17] [i_17] [i_0] [i_0] [i_13 - 3] [i_13 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_17] [i_13 - 2] [i_17] [i_17] [i_13 - 2] [i_13 + 4]))))));
                            var_40 ^= ((/* implicit */long long int) ((2285315059U) | (((unsigned int) var_4))));
                        }
                    } 
                } 
                var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_13] [i_15]))))) : (var_14)));
            }
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */short) 2147483640);
                arr_58 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) arr_11 [i_13 + 1] [i_13]))));
            }
            var_43 ^= ((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_42 [i_13 + 3]))));
            /* LoopNest 2 */
            for (long long int i_19 = 1; i_19 < 11; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    {
                        arr_65 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3868337627895094985ULL)) && (((/* implicit */_Bool) 13250803478413987171ULL))));
                        arr_66 [i_19] = ((/* implicit */unsigned long long int) ((int) 11479209922649598228ULL));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((arr_31 [i_19 - 1] [i_19 + 3] [i_19] [i_19]) + (arr_29 [i_19 + 1] [i_19 - 1] [i_19 + 3] [i_19]))))));
                    }
                } 
            } 
        }
    }
}
