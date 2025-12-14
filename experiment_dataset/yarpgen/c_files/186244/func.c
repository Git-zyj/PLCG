/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186244
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_10 -= ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) -260437614))));
                            var_12 += ((/* implicit */short) ((unsigned short) ((int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_4])) || (((/* implicit */_Bool) (signed char)-21))))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [10] |= ((/* implicit */long long int) var_2);
                        }
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_1 - 2] = ((/* implicit */short) -260437618);
                            var_13 -= ((/* implicit */short) (signed char)(-127 - 1));
                        }
                        var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_18 [i_0] [15ULL] [(unsigned char)14] [i_1] [(short)2] [i_0] [i_0]) / (((/* implicit */unsigned int) var_6))))) ? (var_5) : (((/* implicit */long long int) arr_14 [i_2] [i_1 - 1] [i_1] [i_1 - 2]))))));
                        arr_20 [i_0] [(signed char)21] [i_0] [(signed char)21] [i_0] [(signed char)21] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)127));
                    }
                    var_15 ^= ((/* implicit */signed char) ((int) ((long long int) arr_3 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) arr_10 [i_0 - 2] [i_1] [i_6] [i_0 - 2]);
                                var_17 ^= ((/* implicit */_Bool) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */int) ((signed char) arr_17 [i_8] [i_8] [i_8] [i_8] [20ULL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [(unsigned char)6]))))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_35 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) 694767043);
                    var_19 = ((/* implicit */signed char) min((arr_14 [i_8] [i_9 + 1] [i_8] [i_9 + 1]), (((/* implicit */int) var_2))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8] [i_9]))))) <= (((/* implicit */int) (!(var_7))))))) % (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (unsigned short)22079))))));
                }
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 4; i_12 < 19; i_12 += 4) 
        {
            for (unsigned short i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) max(((+(arr_22 [i_12] [i_11 + 1] [i_12 + 1] [i_13 - 1]))), (((/* implicit */unsigned long long int) ((unsigned short) var_7)))));
                    arr_44 [i_11] [i_12] [i_12] [i_11] = ((/* implicit */signed char) var_1);
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [(signed char)5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 262741101)))))))));
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        arr_47 [i_14] [i_12 - 1] [i_14] [i_14] = ((/* implicit */signed char) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_11] [i_14] [i_14] [2LL])))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) 260437613))) ? (((/* implicit */int) (short)-3348)) : ((+(var_6))))) ^ (((/* implicit */int) arr_43 [i_11] [i_11] [i_13] [i_14]))));
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) 704408947864554546LL)) < (18446744073709551615ULL)))));
                        var_25 += ((/* implicit */signed char) -1LL);
                        var_26 = ((/* implicit */long long int) var_4);
                        var_27 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)22079))))) : (((((-1952371765900333378LL) + (9223372036854775807LL))) >> (((260437623) - (260437572))))))), (((/* implicit */long long int) arr_51 [i_11 + 1] [i_12 - 1] [i_13 - 2] [i_13]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 19; i_16 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_9))))));
                        var_29 -= ((/* implicit */unsigned short) var_7);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_30 = ((/* implicit */long long int) var_3);
            arr_57 [i_17] [i_11] [(_Bool)1] = ((/* implicit */int) (((+(var_6))) >= (260437613)));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_6))));
        }
    }
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
    {
        var_32 ^= ((/* implicit */short) var_8);
        var_33 = ((/* implicit */long long int) max((((unsigned long long int) arr_28 [i_18 + 1])), (((/* implicit */unsigned long long int) arr_8 [i_18 + 1] [i_18 + 1] [i_18]))));
        arr_60 [i_18] = ((/* implicit */long long int) (_Bool)1);
        var_34 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [(short)10] [i_18] [i_18 + 1] [(short)10] [(short)10]))));
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_22 [(signed char)8] [i_18 + 1] [i_18 + 1] [i_18]))));
    }
    var_36 = ((/* implicit */unsigned long long int) ((1952371765900333378LL) - (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)65535)) >= (-260437603))))))));
}
