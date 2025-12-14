/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175849
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
    var_12 |= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11))))), (max((((/* implicit */int) var_5)), (var_4)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0] [10LL])) ? (16009961335251507595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3902))))) : (((/* implicit */unsigned long long int) var_9))))));
            var_13 = ((/* implicit */signed char) (unsigned short)3893);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) (~((-(var_9)))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) var_11);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_19 [i_2] [i_2] [(unsigned short)5] [i_2] [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61643)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_16 [i_0] [i_2] [i_3] [i_4] [i_5]))));
                            arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_2] [i_2]))));
                            var_15 = ((/* implicit */int) arr_15 [i_2] [i_3] [i_0 + 2] [i_4] [i_4]);
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_0] [i_0 + 3] [i_0 - 1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [6ULL] [6ULL] [7] [i_4] [i_5]))));
                        }
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_2]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_25 [(short)3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0 - 2] [i_0 + 3] [i_0 + 3])) / ((~(((/* implicit */int) var_11))))));
            arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3877)) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_6])) ? (((/* implicit */unsigned long long int) -6474663956529496979LL)) : (825696094727867844ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_17 += (unsigned short)61632;
                        arr_31 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [(signed char)1] [i_0] [i_6] [i_7] [i_7])) & (((/* implicit */int) arr_13 [i_0] [i_6] [i_7] [i_8] [i_7]))));
                        var_18 -= ((/* implicit */unsigned short) arr_2 [i_6] [i_6] [i_8]);
                        arr_32 [i_6] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) arr_12 [i_8] [i_7] [i_6] [10])))));
                    }
                } 
            } 
        }
        var_19 = (unsigned short)61643;
        var_20 = ((/* implicit */signed char) arr_24 [i_0 + 2] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        arr_37 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_36 [i_9]))));
        var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)247)))));
        var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_33 [i_9]));
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) <= (arr_36 [i_9])));
        arr_39 [i_9] = ((/* implicit */signed char) arr_33 [i_9]);
    }
}
