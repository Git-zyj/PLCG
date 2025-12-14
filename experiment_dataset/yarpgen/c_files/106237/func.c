/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106237
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
    var_16 ^= ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_9))) || (((/* implicit */_Bool) (~(max((var_3), (((/* implicit */unsigned long long int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) 2689696443U);
                    var_19 = ((/* implicit */unsigned int) arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 2]);
                    var_20 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-3250620515271763788LL)))), (max((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3 - 4] [0U] [i_2])) | (var_4))), (arr_10 [i_0] [i_3] [i_0] [i_3] [i_0] [i_4])))), (((((/* implicit */_Bool) 1424166156U)) ? (1424166130U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                                var_22 = ((/* implicit */unsigned int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                    {
                        arr_15 [14U] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8951346237075535138ULL))));
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) : (arr_3 [i_1] [i_2])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_8)));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                    {
                        arr_18 [i_6] [i_6] [i_6] &= ((/* implicit */int) arr_4 [(_Bool)1] [i_1]);
                        /* LoopSeq 3 */
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_24 ^= max(((-((~(var_5))))), (((((/* implicit */_Bool) min((arr_3 [(signed char)18] [i_1]), (((/* implicit */long long int) arr_19 [i_6] [i_6] [17ULL] [i_6] [i_7 + 2] [i_2] [i_7]))))) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [9LL] [9LL] [i_0] [i_0 - 1] [i_0] [i_0])), (((long long int) arr_9 [i_0] [i_0]))));
                        }
                        for (int i_8 = 1; i_8 < 18; i_8 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_22 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0 + 1]);
                            var_26 = max((((((/* implicit */long long int) 2870801139U)) / (arr_4 [i_8 - 1] [i_0 + 4]))), (((/* implicit */long long int) min((arr_21 [i_0] [i_0 + 4] [18LL] [i_8 + 1] [i_0] [i_8] [i_8]), (arr_21 [i_0 + 3] [i_0 + 1] [i_2] [i_8 + 1] [i_0] [i_8] [i_8])))));
                            var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0]))) / (2689696441U))), (((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_1] [i_6] [i_0 + 2] [i_8 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [(_Bool)1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0 + 4] [i_9 + 2])) : (((/* implicit */int) (short)-15205))));
                            var_28 = ((/* implicit */short) var_14);
                            var_29 &= ((/* implicit */unsigned int) (+(((var_6) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) / (arr_9 [i_0 + 4] [i_9 - 2])));
                            var_31 = ((((unsigned int) arr_14 [(signed char)2] [i_9])) / (arr_21 [i_0 + 2] [i_9 + 1] [i_9] [i_9] [i_0] [i_9] [i_9 + 2]));
                        }
                        var_32 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                        var_33 = ((/* implicit */short) var_3);
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 4; i_10 < 16; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_34 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))));
                                arr_38 [i_0] [i_1] [i_0] [i_11] [i_12] = ((/* implicit */short) (((~(((var_2) * (((/* implicit */unsigned long long int) arr_12 [i_0])))))) < (((/* implicit */unsigned long long int) ((((var_11) ^ (((/* implicit */long long int) var_5)))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_7)))))))));
                                arr_39 [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_6)))) || (((_Bool) 1605270852U))));
                            }
                        } 
                    } 
                } 
                arr_40 [(unsigned char)0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2870801187U))));
                var_35 = ((/* implicit */unsigned int) 5490008867203851763ULL);
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned int) ((var_4) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10)))) || (((/* implicit */_Bool) var_4)))))));
}
