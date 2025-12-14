/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116863
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) 1730192988))));
                                arr_16 [i_0] [i_1 - 4] [i_0] [(short)0] [i_4 - 1] = (!(((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (signed char)-64)), ((short)-1)))), ((-(((/* implicit */int) (signed char)-64))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [i_1] [8])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_0] [i_0] [i_0 + 1])) : (min((1660929953), (((/* implicit */int) (unsigned char)231)))))), ((~(((/* implicit */int) arr_9 [i_0 + 1]))))));
                    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [(short)13] [i_0])) ? (arr_5 [i_0 - 1] [i_1 - 2] [i_2]) : (((/* implicit */int) (unsigned char)231))))) ? (((unsigned int) arr_3 [13LL] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))))), (((/* implicit */unsigned int) ((_Bool) (!((_Bool)0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) 1621215775)) ? (-1660929959) : (((/* implicit */int) (_Bool)1))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
                            {
                                var_14 &= ((/* implicit */unsigned char) ((arr_18 [i_9 - 1]) ? (((/* implicit */int) ((_Bool) 9223372036854775793LL))) : (((/* implicit */int) arr_19 [i_6 - 2]))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_7] [i_9 + 1])))))));
                                var_16 = ((arr_11 [i_7] [i_5] [i_7] [i_8]) ? (arr_14 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8] [i_9 + 1]) : (arr_14 [i_5] [i_6] [i_7] [i_7] [i_8] [i_9 - 1] [i_9 - 1]));
                            }
                            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                            {
                                arr_34 [i_10] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_5 [4LL] [i_6] [i_5])))))), (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (2304540994975095423ULL) : (((/* implicit */unsigned long long int) arr_3 [5] [(unsigned char)15]))))));
                                var_17 = (~((~(arr_13 [i_6 - 2] [i_6 - 2] [i_6 - 1] [4U] [i_6 - 1]))));
                                arr_35 [14] [i_10] [i_8] [i_8] [8ULL] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1660929953))));
                            }
                            for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
                            {
                                arr_38 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                                arr_39 [(signed char)8] [i_6] [4] [i_8] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_24 [i_5] [i_6 - 1] [i_7] [i_8]), (arr_24 [i_11] [i_8] [i_7] [i_5])))) ? (((unsigned int) arr_11 [i_5] [i_5] [i_6 - 1] [i_11 + 1])) : (((/* implicit */unsigned int) min((-1660929954), (-546621638))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_40 [i_6 + 2] [i_6] [i_6] [i_6 + 2]), (arr_24 [i_6 + 2] [7U] [i_6 - 1] [i_6 + 2]))))));
                            arr_45 [i_5] = ((/* implicit */long long int) ((int) (unsigned char)24));
                            /* LoopSeq 1 */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_6 [i_6 - 1] [i_5] [i_12] [i_13]), (((((/* implicit */_Bool) (unsigned char)24)) ? (546621637) : (((/* implicit */int) (unsigned short)32704)))))))));
                                arr_48 [i_5] [i_14] [i_12] [i_13] [i_14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_6] [(unsigned char)1] [i_13] [9U])) ? (((/* implicit */int) arr_36 [i_14] [i_13] [(signed char)0])) : (((/* implicit */int) arr_36 [i_13] [i_12] [i_6 - 1]))))) ? ((+(((/* implicit */int) arr_36 [i_12] [i_6 + 2] [i_5])))) : (((/* implicit */int) min((((/* implicit */short) arr_36 [i_5] [i_6] [i_12])), (arr_46 [i_14] [i_13] [i_12] [i_12] [i_6] [i_5]))))));
                                arr_49 [i_5] [i_12] [i_13] [i_14] = ((/* implicit */short) arr_32 [i_14] [i_13] [i_12] [i_6] [i_5]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) var_6))))))));
}
