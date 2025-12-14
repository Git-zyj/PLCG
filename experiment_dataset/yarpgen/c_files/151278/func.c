/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151278
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) != (((/* implicit */long long int) (((~(var_2))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) != (((/* implicit */int) var_0))))))))));
    var_13 = ((/* implicit */signed char) max((var_10), (((unsigned long long int) min((((/* implicit */unsigned long long int) var_0)), (var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [20U])))))) ? (((((/* implicit */_Bool) 22U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) (~((-(4294967288U)))));
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)254)) ? (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_1] [i_0])))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0]))) : (arr_5 [i_2] [i_1] [i_1] [i_2])))) ? (arr_1 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) min((4294967295U), (var_9)));
                        var_18 = ((/* implicit */unsigned short) min((((((arr_9 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [3U] [(unsigned short)16] [i_2])) : (((/* implicit */int) arr_3 [i_0])))) / (((/* implicit */int) ((_Bool) var_6))))), (((/* implicit */int) (short)254))));
                    }
                    for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0] [(unsigned char)21] [i_4 - 3])) ? (((/* implicit */unsigned int) var_2)) : (arr_8 [i_0] [i_0] [i_0] [(short)23] [15U] [i_4 - 3])))) ? (arr_8 [i_2] [17ULL] [(_Bool)1] [i_1] [(signed char)0] [i_4 - 2]) : (max((arr_8 [i_4] [i_1] [10ULL] [i_1] [i_0] [i_4 + 1]), (arr_8 [1LL] [1LL] [i_2] [i_0] [i_2] [i_4 - 3])))));
                        arr_16 [i_0] [(_Bool)1] [i_2] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_4] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_1] [i_1]))) : (var_10)))))));
                        var_19 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (max((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0])), (3LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-254)) ? (((/* implicit */int) arr_12 [i_0])) : (var_2)))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 - 2] [3U])))));
                            var_21 = ((/* implicit */signed char) (-(min((arr_8 [i_6 + 2] [i_6] [i_6] [i_6 + 2] [(_Bool)1] [i_6 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_6])) : (var_11))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_1] [i_7 - 2] [i_0] [i_0] [i_0] [i_7] = arr_19 [i_7 - 2] [i_7] [i_7 - 1] [i_7] [i_7 - 2] [i_7];
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_13 [i_0] [i_1] [i_5] [i_7]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_5] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)12))))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            var_23 &= ((/* implicit */unsigned short) 33554431U);
                            var_24 = ((/* implicit */unsigned short) ((arr_17 [i_2] [i_5] [12U]) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_1] [i_5] [6] [i_0])) ? (arr_20 [i_5] [i_5] [i_2] [i_5] [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_1])))))));
                        }
                        arr_28 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */signed char) (_Bool)0);
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_25 ^= ((/* implicit */_Bool) (~(max((arr_20 [(unsigned short)20] [i_0] [i_1] [i_0] [(unsigned short)20]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_25 [4U])), (var_8))))))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_34 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_30 [i_1] [i_1] [(unsigned char)7])));
                            var_26 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) arr_14 [i_0] [i_9] [i_2])) : (((/* implicit */int) arr_21 [i_9] [i_2] [i_1] [i_9])))), (((/* implicit */int) arr_29 [i_2] [i_8] [i_2] [i_1] [i_0]))));
                            arr_35 [i_0] [i_1] [i_1] [9ULL] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned char) ((short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_8] [i_8] [i_10])) ? (((/* implicit */int) arr_17 [1ULL] [(signed char)7] [i_2])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_18 [i_2]))));
                            arr_40 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_10] [(signed char)1] [i_2] [i_1] [i_1] [i_0])) ? (arr_38 [i_2] [i_8] [i_2] [i_1] [i_1] [i_0]) : (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_28 |= var_1;
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_8] [i_8] [i_10])) ? (arr_38 [5] [i_1] [5] [i_1] [i_1] [i_1]) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_2] [i_2] [i_1] [i_8] [(unsigned char)16]))) : ((+(14261648984746802345ULL)))));
                            var_30 *= ((/* implicit */short) arr_25 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_11] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_4 [i_2]);
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_2] [3] [i_2] [i_2]))));
                            arr_46 [i_1] = ((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_2] [i_2] [i_8] [i_11]);
                        }
                        var_32 ^= ((/* implicit */short) (-(max((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1])), (4294967271U)))));
                        arr_47 [i_0] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */int) ((_Bool) ((_Bool) arr_25 [i_1])));
                    }
                    var_33 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_38 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) var_4)) : (arr_38 [i_0] [i_1] [i_1] [(short)14] [i_2] [i_2]))));
                }
                var_34 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))))))), ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) min((((/* implicit */int) (short)32236)), (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) (short)254)) : (((/* implicit */int) (short)32704)))))))));
}
