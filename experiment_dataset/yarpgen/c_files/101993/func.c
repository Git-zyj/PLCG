/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101993
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
    var_10 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)127))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_11 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((~(var_4))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [16LL] [i_2] [i_3])))))))), ((((!(((/* implicit */_Bool) (unsigned char)137)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157)))))));
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_6))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] &= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                var_13 |= ((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)17] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [15LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_13 [i_4])));
        var_14 = ((/* implicit */_Bool) ((max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) != (arr_13 [i_4])))))) & (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)131)) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_14 [i_4]))))))))));
        var_15 = ((/* implicit */signed char) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) * (arr_13 [i_4]))), (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_14 [i_4])))))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_5 + 2]))))));
        arr_19 [8U] = ((/* implicit */long long int) (~(arr_14 [i_5 - 2])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (signed char i_8 = 3; i_8 < 19; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */_Bool) arr_28 [4ULL] [(unsigned char)18] [i_8 - 2] [i_7] [i_8 + 1] [i_8 - 2]);
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_8 - 1] [i_10 + 3])) - (((/* implicit */int) arr_1 [i_8 + 2] [i_10 + 2]))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_21 [1ULL])) - (var_5))) - (arr_5 [i_7]))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((short) arr_29 [i_9] [i_7] [i_8] [i_9] [(signed char)0]));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((arr_29 [i_7] [i_11 - 1] [i_8] [i_9] [18]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_7]))))));
                        }
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [12ULL] [i_7] [i_9] [(signed char)10] [i_8])))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) arr_0 [i_8 - 1] [(_Bool)1])))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8 - 2] [i_8 + 2])) ? (((/* implicit */int) arr_3 [i_8 - 2] [i_8 + 2])) : (((/* implicit */int) arr_28 [i_8] [i_8 + 2] [i_7] [i_7] [i_8 + 1] [i_7])))))));
                        var_24 = (i_9 % 2 == 0) ? (((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))) ? (((((/* implicit */int) (unsigned char)135)) >> (((arr_11 [i_9] [i_9] [i_7] [i_9] [i_6]) - (1634470447))))) : (((/* implicit */int) arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_8] [0LL])))) : (((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))) ? (((((/* implicit */int) (unsigned char)135)) >> (((((arr_11 [i_9] [i_9] [i_7] [i_9] [i_6]) - (1634470447))) + (1166644204))))) : (((/* implicit */int) arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_8] [0LL]))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_6] [(short)15] [i_6]))));
    }
    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        arr_38 [3ULL] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((arr_21 [i_12]), (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_1)) : ((-(arr_34 [20U] [i_12] [i_12] [i_12] [i_12] [14U])))))));
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_4))) < (((((/* implicit */_Bool) arr_28 [2ULL] [i_14] [i_14] [i_15] [4ULL] [i_15])) ? (arr_5 [i_15]) : (var_5))))))) != (((((((/* implicit */_Bool) (unsigned char)110)) ? (var_4) : (((/* implicit */unsigned int) var_1)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [8U] [10ULL] [i_14] [i_15])) ? (((/* implicit */int) var_3)) : (arr_8 [i_12] [i_13] [i_14] [i_15])))))))))));
                        var_27 = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        } 
    }
}
