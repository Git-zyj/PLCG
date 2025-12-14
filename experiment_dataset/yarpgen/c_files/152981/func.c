/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152981
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
    var_15 = ((/* implicit */signed char) var_1);
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46829))) : (arr_2 [i_0 - 1] [i_0 - 1]))))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)0))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_9 [i_0] [i_3] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [13] [9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ^ (arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_3] [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 - 1]))) / (var_7)));
                                arr_17 [i_3] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 2] [i_3] [i_3 - 1] [i_3 + 1]))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [21ULL])) : (((/* implicit */int) (unsigned char)43)))) << (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_2] [i_3] [i_4] [i_5 + 1])) < (((/* implicit */int) arr_14 [i_0] [i_3] [i_4] [i_5])))))));
                                arr_18 [i_0] [(unsigned short)20] [i_2] [i_3] [i_3] [i_5 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-823))))) > (((var_13) ? (arr_5 [i_3 - 1] [10U] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    arr_19 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_3] [(short)10] [i_3 - 1]))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_3])) : (arr_6 [i_0] [i_3])))));
                    var_19 = ((/* implicit */unsigned int) ((arr_2 [i_0 + 1] [i_0]) >> (((/* implicit */int) var_2))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0 - 1])) ? (arr_7 [i_0 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0] [i_0 + 1])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_24 [i_0] [i_7] [i_7] = ((/* implicit */int) ((unsigned long long int) 9223372036854775807LL));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        arr_27 [i_0 - 2] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_14)))) ? (arr_26 [i_0] [i_7] [i_7 + 2] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 1] [i_7 + 2])))));
                        arr_28 [(_Bool)1] [i_7] [i_7 + 2] [i_7] [i_8] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)18692)) ? (arr_15 [i_7] [i_6] [i_7] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18684)))))));
                        arr_29 [i_7] [i_6] [i_7 + 2] [19ULL] = ((((/* implicit */int) (unsigned char)5)) + (((/* implicit */int) arr_3 [i_0] [i_6] [i_7])));
                    }
                }
            } 
        } 
        arr_30 [i_0] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-43))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18707)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18692)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2])) ? (347988519) : (((/* implicit */int) arr_20 [i_0 - 2] [i_0]))))) : (((unsigned int) var_10))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_22 = ((/* implicit */signed char) (+(((max((((/* implicit */unsigned int) var_11)), (arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_9] [i_9] [i_9]))))))));
        arr_34 [(short)14] [i_9] = ((/* implicit */short) min((((((((/* implicit */int) (unsigned short)64455)) / (((/* implicit */int) (signed char)(-127 - 1))))) / (((/* implicit */int) ((_Bool) arr_7 [i_9] [i_9] [(unsigned char)5]))))), ((+(((((/* implicit */int) arr_20 [i_9] [i_9])) / (((/* implicit */int) arr_14 [i_9] [(short)11] [i_9] [i_9]))))))));
    }
    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            arr_42 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_10 + 2] [i_10 + 3])) ? ((+(((/* implicit */int) arr_35 [i_10])))) : (((((/* implicit */int) arr_20 [i_10] [i_10 + 3])) * (((/* implicit */int) var_2))))));
            var_23 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_10 + 3] [i_10] [i_10] [i_10]))));
        }
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)173)) : (((((((/* implicit */_Bool) 347988519)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) << (((/* implicit */int) arr_13 [i_10] [i_10 + 2] [(signed char)14] [i_10 + 3] [i_10]))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 19; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                {
                    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)180)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((-347988520), (((/* implicit */int) (signed char)-113))))) : (((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_7 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46852))))))))));
                    arr_47 [i_10] [i_10] [i_12 - 1] [i_13] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    }
}
