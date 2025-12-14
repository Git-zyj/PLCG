/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104444
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
    for (long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9064)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((((/* implicit */int) (unsigned short)2)) / (((/* implicit */int) (unsigned short)35872))))))) && (((/* implicit */_Bool) ((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (arr_3 [i_0 + 1] [i_1] [i_1]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_16 [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) (_Bool)1))));
                                arr_17 [8LL] [i_1] [i_2] [i_1] [i_4] [8LL] &= ((/* implicit */long long int) var_8);
                                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) << ((((~(arr_2 [i_1] [i_4]))) - (2566224109U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_0 + 2] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_10 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217727LL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)35885))))) ? ((-(arr_12 [i_0] [i_1] [i_3] [i_4]))) : (((/* implicit */long long int) arr_10 [i_0 + 1]))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_3] [i_0] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) >= (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) < ((~(arr_8 [i_0]))))))));
                                arr_21 [i_0] [i_0] [(short)8] [i_3] [(short)8] [i_5] = (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])));
                            }
                            var_20 = ((/* implicit */short) ((((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            /* LoopSeq 3 */
                            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17314)) % (((/* implicit */int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_0] [i_1] [i_0] [i_3] [i_6]) || (arr_14 [(short)6] [i_1] [i_2] [i_3] [i_3])))))));
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_15);
                                var_22 = ((/* implicit */_Bool) min((var_22), ((!(((((/* implicit */int) min(((short)-12699), (var_17)))) == (((/* implicit */int) arr_4 [i_0 + 2] [i_3] [i_0 + 1]))))))));
                                var_23 = ((/* implicit */short) 0U);
                            }
                            for (int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                            {
                                var_24 = (-(((((134217728LL) + (134217727LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [(signed char)2] [i_1] [i_7] [i_3] [i_7]))))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7395)) ? (((/* implicit */int) (unsigned short)29659)) : (((/* implicit */int) ((short) -1LL)))))) ? (((/* implicit */int) (short)-24928)) : (((/* implicit */int) (unsigned short)29668)))))));
                                var_26 = ((/* implicit */short) arr_5 [i_0]);
                            }
                            for (int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                            {
                                arr_32 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_1))) % (((/* implicit */long long int) ((/* implicit */int) (signed char)61))))) >> (((((/* implicit */int) arr_30 [i_1])) + (96)))));
                                var_27 &= ((int) (((_Bool)1) || (((/* implicit */_Bool) arr_9 [i_3]))));
                            }
                            arr_33 [i_0] [i_3] [i_1] [2LL] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) (-(((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_7))))) & (((((arr_8 [i_3]) + (9223372036854775807LL))) >> (((arr_2 [i_1] [i_0]) - (1728743131U)))))))))) : (((/* implicit */int) (-(((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_7))))) & (((((arr_8 [i_3]) + (9223372036854775807LL))) >> (((((arr_2 [i_1] [i_0]) - (1728743131U))) - (2576434127U))))))))));
                            /* LoopSeq 2 */
                            for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                            {
                                arr_36 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_9))))) - (((long long int) min((arr_12 [i_9] [i_2] [i_1] [i_0 - 1]), (((/* implicit */long long int) (signed char)61)))))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) % (-1413028257)))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_1))))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_29 [i_0 + 3] [i_0] [i_3] [i_3] [i_0] [i_0]), (((/* implicit */short) ((arr_8 [2LL]) < (arr_23 [i_0] [i_1] [i_1] [i_1] [i_3] [i_9] [(short)2])))))))))))));
                            }
                            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                            {
                                arr_40 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-(max((((arr_12 [i_10] [i_10] [i_10] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (arr_31 [i_0])))));
                                var_29 ^= ((((/* implicit */_Bool) (short)1792)) ? (4341955249476497924LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)61))));
                                var_30 = ((/* implicit */int) ((signed char) (short)32767));
                                var_31 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))) | (var_6))) & (((/* implicit */long long int) ((/* implicit */int) (!(var_15)))))));
                                arr_41 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2518285048259065859LL) << (((((/* implicit */int) (short)5)) - (5)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)25416))))) : (((((/* implicit */unsigned int) arr_10 [(signed char)8])) / (arr_5 [i_1])))))) ? (((/* implicit */int) ((_Bool) ((arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_10]) % (var_1))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0 + 3] [i_0 - 1])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))))))));
}
