/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174619
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
        var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (var_14)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4611686014132420608LL)))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        for (short i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_18 [i_5] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)55095)) ^ (((/* implicit */int) (unsigned short)4411)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_2] [i_3] = (i_2 % 2 == 0) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)1] [i_3] [i_7])) >> (((((/* implicit */int) arr_17 [i_2 - 4] [i_2 - 4] [i_6 - 1] [i_2] [i_7 + 3] [i_7 + 2] [i_2 - 4])) - (53)))))), (arr_16 [i_1] [7LL] [i_1] [i_1] [(unsigned short)4]))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)1] [i_3] [i_7])) >> (((((((/* implicit */int) arr_17 [i_2 - 4] [i_2 - 4] [i_6 - 1] [i_2] [i_7 + 3] [i_7 + 2] [i_2 - 4])) - (53))) + (173)))))), (arr_16 [i_1] [7LL] [i_1] [i_1] [(unsigned short)4])));
                                arr_25 [i_6] [i_7] [i_1] [i_1] [4U] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((arr_22 [i_7 - 2] [i_7] [i_6] [i_6 - 1]) + (9223372036854775807LL))) >> (((arr_22 [i_7 - 2] [i_6 - 1] [i_6] [i_6 - 1]) + (6740385362764863112LL))))) << (((((/* implicit */int) min((var_6), (var_6)))) - (67)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) max((((long long int) var_13)), (((/* implicit */long long int) arr_0 [i_8]))))) ? (((((/* implicit */int) arr_1 [i_8])) | (arr_29 [i_8] [(short)2] [i_8]))) : ((~((((_Bool)1) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_3)))))));
                    var_21 = ((/* implicit */unsigned short) arr_0 [i_10]);
                    arr_34 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (unsigned short)37841);
                    arr_35 [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_29 [18] [i_9] [i_8])) : (var_2)))));
                }
            } 
        } 
    } 
}
