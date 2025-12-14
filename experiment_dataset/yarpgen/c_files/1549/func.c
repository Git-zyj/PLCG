/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1549
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_6)), (var_1))) != (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_2))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    arr_6 [i_0] [(unsigned short)19] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) 0)) > (6007003357870441058LL))), ((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                    arr_7 [i_1] [i_1] [(signed char)18] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(arr_5 [i_0] [i_0] [i_0])))), (min((min((((/* implicit */long long int) arr_0 [i_0])), (var_6))), (((/* implicit */long long int) (~(arr_5 [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        arr_11 [i_3] = (!(((/* implicit */_Bool) (~(arr_8 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 1])))));
                        arr_12 [(signed char)3] [7ULL] [i_1] [i_1] [i_0] [i_0] |= -553062616;
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (-((~(var_1))))))));
                            arr_19 [i_1] [i_0] = ((/* implicit */long long int) (-(arr_9 [i_2 + 1])));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1] = ((/* implicit */long long int) min((max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) (signed char)-26))))), (var_7))), ((~(((int) -9223372036854775801LL))))));
                            arr_25 [12ULL] [i_1] [13] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_2 - 1] [i_2] [i_2] [i_2])) ? (arr_16 [i_6 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_1]) : (arr_16 [i_6 - 1] [i_2 + 1] [i_2] [0U] [i_2])))));
                            arr_26 [i_0] [3U] [i_2] [3U] [3ULL] [i_2] [i_2] = ((/* implicit */int) ((long long int) var_2));
                            var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (var_3))) + (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
                        }
                        arr_27 [i_0] [i_1] |= ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]);
                        arr_28 [i_2] [21ULL] = ((/* implicit */_Bool) ((((arr_16 [15ULL] [15] [i_2] [i_4] [i_2]) == (((/* implicit */long long int) var_7)))) ? (((/* implicit */int) (signed char)94)) : (min((((/* implicit */int) arr_23 [i_4 + 1] [i_2 + 1])), (((((/* implicit */int) arr_10 [13LL] [i_1] [i_1] [i_4 + 1])) / (var_7)))))));
                    }
                    for (int i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) arr_18 [i_2 + 2] [i_1] [(short)14] [i_1] [i_1]);
                        var_14 ^= ((/* implicit */unsigned short) (-((~(((13) | (553062616)))))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(9)));
                        arr_38 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) 9223372036854775778LL);
                    }
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        arr_42 [(unsigned short)6] [(signed char)4] [i_0] [(signed char)4] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                        arr_43 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((-553062616) + (2147483647))) << (((var_5) - (3557332220287918043ULL))))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_30 [i_0] [i_1] [(short)2] [i_8] [i_10 - 1] [i_8])))))));
                        var_16 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_31 [i_0] [i_0] [i_8] [i_10 - 1]))))));
                        arr_44 [i_1] [i_1] [i_1] [20] |= ((/* implicit */signed char) (~(((((((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2978))) : (6553279829366175347LL))) + (9223372036854775807LL))) << (((((((((/* implicit */int) (signed char)-51)) - (arr_8 [i_0] [13U] [i_0] [(unsigned short)6] [i_0]))) + (1601993400))) - (38)))))));
                        arr_45 [i_8] [i_1] [i_8] [i_10] [i_0] = ((/* implicit */short) var_8);
                    }
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) arr_23 [i_11] [i_8]);
                        var_18 = ((/* implicit */int) (~(min((9223372036854775781LL), (((/* implicit */long long int) -18))))));
                        arr_50 [i_0] [(signed char)0] [i_0] [(signed char)0] [(signed char)0] [(signed char)0] = min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 553062594)))))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_8])), (15748360165785190530ULL)))) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [18U] [i_8]))))) < (((/* implicit */int) ((((/* implicit */int) arr_35 [i_0])) != (((/* implicit */int) arr_35 [i_0])))))));
                    arr_51 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-82))))) < (((((/* implicit */long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)9] [i_0]))))))) & (var_6)))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_8] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_32 [i_0] [2ULL] [i_0] [i_0] [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [1U] [i_0])), (288230376151711744ULL)))));
                    var_21 = ((/* implicit */unsigned long long int) ((arr_18 [10U] [i_0] [i_8] [i_0] [i_8]) << (((arr_17 [(unsigned short)18] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]) - (2392161914U)))));
                }
                var_22 |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_1] [(unsigned char)6])))) ? ((~(((/* implicit */int) var_8)))) : (((int) var_4)))));
                var_23 = ((/* implicit */unsigned long long int) var_4);
                var_24 = min((((/* implicit */long long int) ((((arr_39 [(short)14] [i_0] [(short)14] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7))))))), ((-(arr_37 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
    {
        arr_56 [i_12] [i_12] = (+(arr_9 [i_12 - 1]));
        var_25 = ((/* implicit */signed char) var_1);
    }
    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 18; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                {
                    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)77)) > (((/* implicit */int) (signed char)-63)))))))), (max(((-(var_1))), (((/* implicit */unsigned long long int) arr_5 [i_14 + 1] [i_14 + 1] [i_14 + 1]))))));
                    var_27 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_59 [(signed char)14] [i_14 - 1])))));
                    var_28 = ((/* implicit */unsigned long long int) arr_60 [i_14]);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) min((arr_13 [(unsigned short)5]), (((/* implicit */unsigned long long int) (+(arr_34 [i_13]))))));
        var_30 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_15 [i_13])) ? (((/* implicit */unsigned long long int) arr_63 [i_13])) : (arr_13 [(unsigned char)13]))))) | (min((((/* implicit */unsigned long long int) ((signed char) (signed char)108))), (arr_13 [21U])))));
    }
}
