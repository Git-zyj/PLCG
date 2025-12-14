/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176995
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : ((+(((var_3) / (((/* implicit */int) var_10))))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_9)) ^ (var_1))))))));
        var_15 ^= ((/* implicit */short) ((signed char) arr_1 [i_0]));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(unsigned char)4] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))));
                        var_18 ^= ((/* implicit */unsigned char) -645629381);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_3] [(signed char)0]))));
                        var_20 &= ((/* implicit */unsigned long long int) arr_7 [i_0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_21 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (11481298553863402884ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_4] [4U] [8])) && (((/* implicit */_Bool) 1930918548))))) : (((/* implicit */int) ((arr_6 [10] [(unsigned char)6] [i_5] [10]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [(unsigned char)3] [8] [i_6] [i_6] [i_6])))))));
                            arr_20 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */signed char) var_11);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_4])) << ((((+(((/* implicit */int) arr_15 [i_0] [9U])))) - (16536)))));
                arr_22 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */signed char) ((arr_3 [i_0] [i_4]) >= (((unsigned long long int) var_11))));
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(var_3)));
            }
        }
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_23 = ((/* implicit */signed char) arr_24 [(short)21]);
        var_24 ^= ((/* implicit */signed char) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) var_8))));
    }
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_30 [1ULL] = ((((/* implicit */_Bool) 1685151619U)) ? (((/* implicit */int) (short)-13368)) : (((/* implicit */int) (unsigned short)35385)));
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            arr_35 [3] [i_8] [i_8] = arr_29 [i_8] [i_8];
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    {
                        arr_44 [i_11] [i_9] [i_10] [(unsigned short)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_9] [i_8]))));
                        arr_45 [i_11] [13ULL] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_39 [i_8]) / (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_37 [i_8] [i_8] [(signed char)1] [i_11])) ? (arr_33 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), ((+(((unsigned long long int) var_4))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_25 &= ((/* implicit */unsigned long long int) 2609815660U);
            var_26 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) > (var_0))))))));
        }
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_27 ^= ((/* implicit */unsigned short) arr_40 [14] [i_8] [i_8] [i_13]);
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_0))));
            arr_52 [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_40 [8U] [i_8] [i_8] [8U])));
            var_29 ^= ((arr_34 [i_8] [i_8] [i_8]) << (((((arr_29 [3] [i_8]) - (((/* implicit */unsigned long long int) arr_34 [i_8] [(signed char)3] [i_13])))) - (14503387040081216560ULL))));
        }
    }
    var_30 ^= ((/* implicit */int) max((var_0), (((/* implicit */unsigned int) var_4))));
}
