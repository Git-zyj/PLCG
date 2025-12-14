/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103707
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
    var_10 -= ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (unsigned char)160))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4]))));
        var_12 = (+(((int) arr_0 [i_0 + 2])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_2] &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */short) arr_4 [i_1]))))) < (((/* implicit */int) (_Bool)1))))), (((int) arr_8 [i_2]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_13 = ((/* implicit */short) (~((+(((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))));
                    var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) -153778752))));
                    arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2 + 2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [(unsigned char)5] [(unsigned char)5]))))) : (((/* implicit */int) arr_3 [i_1] [i_1]))));
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                }
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_16 = 134217727;
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2 + 2] [i_2] [i_2])) >= (((/* implicit */int) arr_16 [i_6] [i_2 - 2] [i_1 - 1] [i_6]))))) > (((/* implicit */int) ((((/* implicit */int) arr_16 [i_6] [i_2 + 1] [i_1 + 2] [i_6])) > (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [16] [i_2])))))));
                            var_18 = ((/* implicit */unsigned long long int) (~((~(2147483632)))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) ((unsigned long long int) 528482304)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-4986)) || (((/* implicit */_Bool) (unsigned char)38)))) || ((!(((/* implicit */_Bool) arr_13 [i_6] [(short)8] [i_4] [4U]))))))))))));
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_15 [i_2 - 2] [i_2 + 1] [i_1 + 1] [i_1 - 1])) ? (arr_15 [i_2 - 2] [i_2 + 1] [i_1 + 1] [i_1 - 1]) : (arr_15 [i_2 - 2] [i_2 + 1] [i_1 + 1] [i_1 - 1])))));
                            var_21 *= ((/* implicit */unsigned short) ((((arr_18 [i_1 + 1] [i_2] [i_1 + 2]) < (arr_18 [i_1 + 2] [i_2] [i_1]))) ? ((~(arr_18 [i_1 - 1] [i_2] [i_1 - 1]))) : ((~(arr_18 [i_1 + 1] [i_2] [i_1 - 1])))));
                            var_22 *= ((/* implicit */short) (signed char)-123);
                            var_23 *= min((arr_21 [i_5]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((arr_21 [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))), (var_4)))));
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_24 = arr_7 [i_8] [i_5] [i_1 + 2];
                            var_25 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((-448776428) | (arr_20 [i_1] [i_1] [18U] [i_5] [i_1]))) + (2147483647))) << ((((((~(((/* implicit */int) arr_22 [i_1 - 1] [i_2] [i_4] [i_5] [i_2])))) + (11068))) - (24)))))), (arr_17 [i_2] [i_2] [i_5] [i_2])));
                            var_26 = ((/* implicit */int) ((((((var_6) + (((/* implicit */unsigned long long int) var_1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) / (((/* implicit */unsigned long long int) (+(141460543))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_4] [i_1 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) arr_18 [i_2 - 1] [i_1] [i_2 - 1]))))) ? (((/* implicit */int) arr_16 [i_1] [i_1 - 1] [1] [i_1 - 1])) : (arr_18 [i_2 + 2] [i_1] [i_4])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_28 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_9] [i_5] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [12] [i_9])) >> (((var_8) - (1459804783U))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 13379281165494441455ULL)) ? (((/* implicit */int) ((arr_15 [i_9] [i_5] [i_2] [(short)2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60622)))))) : (((((/* implicit */_Bool) (short)4096)) ? (var_1) : (((/* implicit */int) arr_6 [i_1 + 2] [21U] [i_9]))))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((short) var_7)))));
                            var_31 |= ((/* implicit */unsigned char) -484049927);
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_31 [21ULL] [i_1] [i_4] [i_10] = ((/* implicit */int) min((min((arr_10 [i_1 + 1] [i_1 + 1] [i_10]), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [12ULL] [(short)22] [i_2] [i_10])) || (((/* implicit */_Bool) 5067462908215110160ULL))))))), (((short) (short)-4097))));
                        arr_32 [i_1] [i_10] [i_1] [i_10] [i_2 + 1] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_20 [14ULL] [i_1] [i_2] [i_2] [i_1]) >> (((-1107621790) + (1107621815)))))))))));
                    }
                    for (int i_11 = 1; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */long long int) 528482304)) : (6836952805204464751LL)))));
                        arr_35 [(short)15] [i_2] [i_1] [3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22959)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_20 [i_1] [i_1] [(signed char)11] [8U] [(unsigned char)20]), (((/* implicit */int) (short)28157))))) < (((unsigned long long int) arr_15 [i_1 + 2] [i_1 + 2] [i_4] [i_11])))))) : (var_0)));
                        arr_36 [i_1] [i_2 - 2] [i_1] [i_11 + 2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_2] [12] [i_11] [12])) || (((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_4] [i_11 + 3])))), ((!(((/* implicit */_Bool) -153778764))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_1] [i_2] [(short)8] [i_4] [i_11])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_8 [i_1]))))) : ((~((~(((/* implicit */int) arr_11 [i_1]))))))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 2380915908U)) ? (((/* implicit */unsigned long long int) -1624029630)) : (13379281165494441441ULL)))))));
                    }
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) ((int) ((min((arr_34 [i_2 + 1] [i_4] [i_2 + 1] [i_1]), (var_0))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 2] [i_1 - 1] [i_2 + 1] [i_12 + 2] [i_12] [i_1]))))));
                        var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */int) min((arr_19 [i_2] [(unsigned short)13] [i_2 + 1] [i_2]), (((/* implicit */short) arr_38 [i_2 - 2] [i_2 + 2] [i_2] [i_2] [i_2 - 2] [i_2 + 1]))))) + (min((((/* implicit */int) arr_19 [i_1] [3] [i_2] [(short)0])), (-991400939)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 3) 
                    {
                        for (short i_14 = 4; i_14 < 21; i_14 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_1] [(unsigned short)6] [(unsigned short)6] [i_14])) > (((arr_25 [(unsigned char)19] [i_1] [i_1] [i_2 + 1]) / (((/* implicit */int) arr_23 [i_1] [15] [i_13 + 1] [i_14]))))))) == (((/* implicit */int) (unsigned char)165))));
                                var_38 |= ((/* implicit */int) ((((((/* implicit */_Bool) min((4586006408034814256ULL), (((/* implicit */unsigned long long int) (unsigned char)37))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (-484049936))) == (((int) (!(((/* implicit */_Bool) (unsigned char)64)))))));
                                var_39 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_14] [i_2 + 2] [i_14])) ? (((/* implicit */long long int) (~((~(((/* implicit */int) arr_3 [i_1] [i_2]))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (short)-1))) | (2166716558758206865LL)))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_22 [i_1 - 1] [i_2] [17ULL] [(_Bool)1] [i_1]), (((/* implicit */short) arr_38 [i_1] [i_2] [i_4] [12] [i_1 + 1] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) 632989711)) : (((arr_34 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) << (((((((/* implicit */_Bool) 5067462908215110160ULL)) ? (15451185388816297228ULL) : (((/* implicit */unsigned long long int) 32752)))) - (15451185388816297221ULL)))))));
                }
                var_41 = (~(((min((((/* implicit */int) arr_11 [i_1])), (var_7))) / (var_7))));
            }
        } 
    } 
}
