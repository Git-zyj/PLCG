/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144784
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [(_Bool)1] [i_0] [i_0] [i_2] |= ((/* implicit */_Bool) var_15);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_19 -= ((/* implicit */unsigned short) arr_4 [(signed char)13]);
                        arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) -1490944449509663793LL)))));
                        var_20 = ((/* implicit */signed char) (unsigned short)65535);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-57)))) % (((/* implicit */int) (unsigned short)1))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            var_22 = arr_12 [i_0] [i_0] [i_0] [i_1];
                            arr_21 [i_0] [i_1] [i_2] [(unsigned char)6] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)5))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            arr_24 [(unsigned char)10] [i_0] [i_2] [i_1] = ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) -4)) : (1490944449509663816LL))));
                            arr_25 [i_6] [i_6] [i_1] [i_1] [i_1] [6ULL] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2]))));
                        }
                        arr_26 [i_0] [(unsigned short)15] [(unsigned short)7] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((arr_4 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [i_2] [10LL] [i_2] [i_4])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) arr_22 [i_1] [i_2] [i_1])) : (((/* implicit */int) var_1))));
                        arr_29 [11ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_7]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4))))))));
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned short) max((var_9), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_2] [i_8] [i_0]))))))));
                            arr_35 [i_0] [i_8] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
                            arr_36 [i_1] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */int) (-(((arr_28 [i_8] [i_2] [(short)8]) & (arr_28 [i_2] [i_8] [i_9])))));
                            arr_37 [i_1] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_1] [(unsigned char)15] [i_8] [7ULL]) - (arr_31 [i_1] [i_9] [i_9] [i_9])))) ? (((/* implicit */long long int) ((unsigned int) arr_31 [i_1] [i_1] [i_1] [3LL]))) : (min((arr_31 [i_1] [4LL] [i_8] [i_9]), (arr_31 [i_1] [i_1] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) -797137841);
                            arr_42 [i_1] [16] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */long long int) arr_5 [i_0] [2ULL] [i_2])) - (arr_7 [6U] [i_1] [i_0])))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                        }
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((long long int) max((arr_18 [i_0] [(signed char)2] [(signed char)2] [i_8]), (arr_18 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */unsigned char) var_3);
    var_30 = ((/* implicit */_Bool) var_14);
    var_31 &= ((/* implicit */short) min((((unsigned long long int) ((unsigned short) -797137818))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4122338722U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1)))))));
}
