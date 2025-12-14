/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180858
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
    var_15 = var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */unsigned long long int) max((-455684922), (((/* implicit */int) (signed char)-68))))) & (var_3))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)98)), (2722375218U)))) ? (((((/* implicit */_Bool) -1474112917908769460LL)) ? (((/* implicit */unsigned long long int) 771593874547550838LL)) : (562949951324160ULL))) : (min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_3 [21LL])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) max((((var_2) & (((arr_2 [i_1] [0LL]) << (((((/* implicit */int) var_9)) - (57907))))))), (((/* implicit */unsigned long long int) var_10))));
                                arr_17 [i_0] [i_1] [(unsigned char)18] [i_4] [i_1] &= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_11)) ? (min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_14)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) arr_1 [2U]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [16ULL] [i_2] [i_2] [i_5] [i_6] [i_2] = ((/* implicit */long long int) var_12);
                                arr_25 [i_2] [i_2] = ((/* implicit */int) ((min((((/* implicit */long long int) var_0)), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_19 [i_0] [i_1] [i_2] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_35 [i_8]);
                                arr_37 [i_9] [i_7] [6] [i_10] [i_11] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_27 [i_8])), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9])) || (((/* implicit */_Bool) arr_27 [i_8])))))));
                                arr_38 [i_7] [i_8] [i_9] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [(unsigned short)9]) == (var_4))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13)))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_10] [i_10] [i_10] [i_11]))) % (var_3)))));
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15634297393284053401ULL)) ? (((/* implicit */long long int) 1526632374)) : (9223372036854775807LL)));
                            }
                        } 
                    } 
                    arr_39 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((((/* implicit */_Bool) 1547002747U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15588))) : (14196053247970735237ULL))) : (((((/* implicit */_Bool) (unsigned short)46612)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7]))) : (var_2)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_12 = 2; i_12 < 17; i_12 += 2) 
    {
        for (short i_13 = 2; i_13 < 17; i_13 += 3) 
        {
            {
                arr_44 [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16867700991055952112ULL))));
                arr_45 [i_12] [(short)3] [i_13] = var_6;
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((min((var_14), (((/* implicit */long long int) (unsigned char)12)))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_12 + 2] [i_13]))))))))));
            }
        } 
    } 
}
