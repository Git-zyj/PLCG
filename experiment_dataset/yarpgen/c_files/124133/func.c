/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124133
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
    var_11 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((short) var_5))))) | (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                var_13 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_5))) == (min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */unsigned short) ((short) var_5));
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) var_4)), (arr_5 [i_2] [18U] [(unsigned char)18])))) == (((/* implicit */int) var_6))))), (var_4)));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_2 + 3] [(unsigned short)17] [i_2 + 3]))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [4] [i_2 + 1] [i_2]))) : (255ULL)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_16 += ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0] [i_0] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (min((var_1), (((/* implicit */long long int) ((unsigned int) (short)-9099)))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(_Bool)1] [i_2 - 2] [i_3 - 2] [i_3]))))) ? (((/* implicit */int) ((signed char) arr_6 [i_0] [i_2 - 2] [i_3 - 2] [i_2]))) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [i_2 - 2] [i_3 - 2] [(_Bool)1])), (arr_5 [i_0] [i_2 - 2] [i_3 - 2]))))));
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_2 + 4])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) ((_Bool) (unsigned short)25243))))), ((((~(((/* implicit */int) arr_0 [i_2 - 2])))) & (((/* implicit */int) arr_0 [i_3 - 2]))))));
                        var_19 -= ((/* implicit */signed char) var_6);
                    }
                    for (short i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                            var_20 = ((/* implicit */unsigned long long int) (short)-9099);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_21 -= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_4 + 2] [i_4 + 1])) == ((~(((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */short) ((_Bool) var_10));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((var_1) + ((-(var_1)))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12238457097832410987ULL)) ? (1620048132) : (((/* implicit */int) (unsigned char)168)))) | (((/* implicit */int) (signed char)-37))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_4 [i_1] [i_4 - 1])))))))));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (var_1) : (var_1))), (((/* implicit */long long int) (((_Bool)1) ? (arr_19 [i_0] [i_1] [i_2 + 4] [i_8] [i_8 - 1] [8LL]) : (arr_19 [i_1] [i_1] [i_2 + 4] [i_1] [i_8 - 1] [i_8 - 1]))))));
                        var_27 = ((/* implicit */unsigned long long int) var_1);
                    }
                    arr_27 [i_0] [i_1] [1LL] = ((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_0))) >> (((((((((/* implicit */int) arr_25 [i_0] [i_1] [i_0])) + (2147483647))) << (((arr_23 [i_0] [i_1] [i_1] [i_2]) - (973268607U))))) - (2147483547))))), (((/* implicit */unsigned int) arr_3 [i_1] [i_0]))));
                }
                for (short i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) (+(min(((-(var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_18 [i_1] [i_9] [(unsigned short)5] [i_0] [i_1] [i_0] [i_0])))))))));
                    var_29 |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_6 [i_9 + 1] [i_1] [i_1] [(unsigned short)11]))))))));
                }
                for (short i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_33 [i_10 + 4] [i_10] [i_10 + 2] [i_10 + 4])), (arr_1 [i_10 + 4])))) | (((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) var_5)), (((-1925027821) & (((/* implicit */int) (_Bool)1))))))), (((long long int) (!(((/* implicit */_Bool) 261535753U)))))));
                                arr_40 [i_12] [i_1] [i_10] [9U] = ((/* implicit */unsigned char) (-(arr_32 [i_10 + 3] [i_11 - 1] [i_11])));
                                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) var_2)))) / (arr_13 [i_0] [i_10] [i_11] [i_0])));
                                var_33 = (+(((unsigned int) (+(var_7)))));
                                arr_41 [i_12] [i_1] [i_10] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) + (((long long int) ((((/* implicit */_Bool) arr_15 [16LL] [16LL] [i_10] [i_11] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            {
                                var_34 -= max((min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_4)))), (-9055016450813583233LL))), (((/* implicit */long long int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) var_5))))));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6757314302138496600LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_10 + 4] [i_1] [i_10] [i_13]))))) ? (((unsigned int) arr_6 [i_10 - 2] [i_1] [i_0] [i_13])) : (min((((/* implicit */unsigned int) arr_6 [i_10 - 2] [i_13] [i_1] [i_13])), (var_0)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 19; i_16 += 2) 
        {
            {
                var_36 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [i_15] [i_15])) & (((/* implicit */int) arr_31 [i_15] [i_15])))) | (((/* implicit */int) arr_4 [i_15] [i_16]))));
                var_37 = ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (signed char i_17 = 1; i_17 < 17; i_17 += 2) 
                {
                    arr_58 [i_15] [(short)11] [i_16] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_9))), (((/* implicit */long long int) ((short) arr_2 [i_17])))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_15] [i_16] [i_16] [i_17] [(_Bool)1])) & (((/* implicit */int) var_2))))) & (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        for (short i_19 = 1; i_19 < 16; i_19 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) min((var_38), (((-9055016450813583233LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))))))));
                                var_39 = ((/* implicit */short) arr_18 [i_15] [i_16] [i_16] [i_17] [i_18] [i_19 + 3] [i_19]);
                                arr_64 [i_18] [i_18] = ((/* implicit */unsigned int) ((((arr_59 [i_17 + 2] [i_17 + 2] [i_17 + 2]) ? (((/* implicit */int) arr_59 [i_17 - 1] [i_17 + 1] [i_17])) : (((/* implicit */int) (signed char)-15)))) << ((~((~(((/* implicit */int) arr_53 [i_15] [i_16]))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */_Bool) min((730060056102914955ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_16] [i_16])) : (((/* implicit */int) (signed char)-32)))))));
                }
            }
        } 
    } 
}
