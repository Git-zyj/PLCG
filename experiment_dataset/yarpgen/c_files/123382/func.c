/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123382
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0 + 2]) ? ((~(7678922917871613416LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_4 [(short)10] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 3])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2])))))) ^ (var_12)));
        arr_9 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_16 [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_2]))))) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_2] [i_1])) : (((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_2] [(unsigned short)8])) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            arr_19 [i_1 - 3] [i_2] [i_1 - 3] [2U] [i_5 + 2] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-30662)), (max((max((var_12), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) var_1)))))))));
                            arr_20 [(unsigned char)4] [i_1] [i_3 - 2] [i_3 - 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_1 - 1] [i_4] [i_3 + 1])) + (((/* implicit */int) arr_6 [i_1]))));
                            arr_21 [i_5] [i_4] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */long long int) ((((int) (short)-30662)) >= (((/* implicit */int) (short)6082))));
                        }
                    }
                } 
            } 
            arr_22 [10] [i_2] [i_2] = max((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_18 [i_1 + 2] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 1] [i_1 - 3])));
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            arr_34 [i_1] [i_1] [i_6] [i_7] [i_8] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((min((((/* implicit */long long int) (_Bool)1)), (arr_33 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [(short)15] [i_7]))) << (((((/* implicit */int) (unsigned short)36820)) - (36767)))))) : (((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (_Bool)1)), (arr_33 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [(short)15] [i_7]))) + (9223372036854775807LL))) << (((((((/* implicit */int) (unsigned short)36820)) - (36767))) - (53))))));
                            arr_35 [i_2] [(short)6] [i_7] [i_6] [i_8] [i_1] = ((/* implicit */long long int) (unsigned short)45049);
                            arr_36 [i_8] [i_7] [i_8] [i_2] [i_1] |= ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (var_11))))));
                            arr_37 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_6] [i_7]);
                            arr_38 [i_1] [i_2] [i_2] [3] [(short)1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1 - 3] [i_2]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_43 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 2])) >> (((((/* implicit */int) arr_32 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 2])) - (39714)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)31593)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_1] [i_9])))))), (arr_23 [i_9] [i_9] [i_1] [i_1])))));
            arr_44 [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_15 [i_9] [i_9] [i_9] [i_1] [i_9] [i_1 + 1])), (((((_Bool) arr_41 [i_9] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-10340))) / (1011768908120385684LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21330)) ^ (((/* implicit */int) arr_27 [i_1 - 3] [i_9] [i_9] [i_9])))))))));
            arr_45 [i_9] [(short)16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_1 - 1] [i_9] [(unsigned char)12] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30671))) : (max((((/* implicit */unsigned int) arr_15 [i_1 - 1] [i_9] [i_1 + 1] [i_1 + 1] [i_9] [i_1 - 1])), (var_3)))));
            arr_46 [i_1] [i_9] &= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_18 [i_1 + 2] [i_1 - 3] [i_1 - 2])) - (((/* implicit */int) arr_15 [i_1] [i_9] [i_1] [i_9] [i_9] [i_9]))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_51 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)7722)), (-2064796325)));
            arr_52 [(unsigned short)12] = ((/* implicit */unsigned long long int) ((arr_31 [(unsigned char)0] [(unsigned char)0]) > ((-(arr_42 [i_1 - 1])))));
            arr_53 [i_1] [i_1] [i_10] = ((/* implicit */short) arr_24 [i_1 + 1]);
        }
    }
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-19531)))))));
}
