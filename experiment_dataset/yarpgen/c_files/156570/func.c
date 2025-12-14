/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156570
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
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_17);
                    var_21 -= ((/* implicit */unsigned short) 1255361408U);
                    var_22 = ((/* implicit */int) max((var_22), (1963323594)));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [10U]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 3]))) | (0ULL)));
        arr_8 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [(_Bool)1]))) : (var_1)))));
        arr_9 [i_3] = ((/* implicit */unsigned char) 574699962U);
        /* LoopSeq 1 */
        for (int i_4 = 4; i_4 < 22; i_4 += 1) 
        {
            var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)216))));
            var_26 = ((/* implicit */short) ((unsigned char) (unsigned short)47414));
            arr_12 [i_3 + 4] [i_3 + 4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_17)) & (arr_10 [i_3] [i_4 - 4]))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)20803))));
                    var_28 ^= ((/* implicit */unsigned char) ((unsigned short) (unsigned char)0));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_5 + 2])) / (((/* implicit */int) arr_14 [i_5] [i_3] [i_5 + 2]))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (arr_16 [i_3] [i_5 + 2] [i_6])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (+(((var_17) - (((/* implicit */int) arr_15 [i_7] [i_7])))))))));
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((unsigned long long int) (_Bool)0)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_33 = ((/* implicit */unsigned char) max((var_33), ((unsigned char)0)));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_34 ^= ((/* implicit */unsigned char) var_9);
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3081)) ? (arr_20 [i_8 - 1]) : (arr_20 [i_8 - 1])));
                            var_36 ^= ((/* implicit */unsigned short) ((unsigned char) arr_23 [i_7 + 3] [i_9] [i_7 + 3]));
                            var_37 = ((/* implicit */long long int) ((arr_25 [i_8 - 1] [(short)4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44732))));
                        }
                    } 
                } 
            }
        }
        arr_32 [i_7 + 2] = ((/* implicit */_Bool) ((unsigned char) arr_23 [i_7] [i_7] [i_7 + 3]));
        var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_7 + 1])) >= (((/* implicit */int) arr_7 [i_7 + 4]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_12] [i_12])) - (arr_26 [i_12] [i_12] [i_12])));
        var_40 -= ((/* implicit */unsigned long long int) 4294967295U);
    }
}
