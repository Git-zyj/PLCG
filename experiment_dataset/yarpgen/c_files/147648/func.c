/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147648
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
    var_11 -= ((/* implicit */unsigned char) var_5);
    var_12 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-128)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)128))))))) : (((unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))))));
    var_13 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_14 -= ((/* implicit */short) arr_1 [i_0]);
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) (short)8506)) ? (3011885962U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14992)))))));
        var_16 = var_1;
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_2] = ((/* implicit */_Bool) ((arr_9 [i_2 - 2] [i_2]) & (arr_9 [i_1] [i_2])));
                                arr_15 [i_1] [i_1] [(signed char)20] [i_4] [i_2] [i_3] = (~(((/* implicit */int) arr_11 [i_2 - 1] [20] [i_3] [i_4] [i_5] [i_5])));
                                var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) (short)-15875))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_3);
                    var_18 -= ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_3]))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned long long int) (-((~(3011885943U)))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (1283081348U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_6] [i_1]))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_6]))) & (var_8))) - (32782U)))));
                    arr_22 [i_1] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(1283081352U)))) : ((~(arr_6 [i_1] [i_1])))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) | (((int) var_3))));
        var_21 = (~(((/* implicit */int) arr_18 [i_1])));
    }
    /* LoopNest 2 */
    for (signed char i_8 = 4; i_8 < 13; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_5 [i_9] [i_9]))))), ((~((~(((/* implicit */int) (unsigned short)34336))))))));
                arr_29 [i_8 - 4] [i_8 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) var_7))))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : (var_4)))))) : (((/* implicit */int) ((arr_28 [i_8 - 3] [i_9]) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8 - 3]))))))));
            }
        } 
    } 
}
