/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109827
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [1ULL] [(unsigned char)3] [7U] = ((/* implicit */short) (_Bool)0);
                                var_19 += ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) 1097364144128LL);
                    var_21 = ((/* implicit */unsigned char) var_6);
                    arr_15 [i_2 + 1] [i_0] [(signed char)5] [i_1 - 4] = ((/* implicit */int) var_14);
                }
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_1 - 3] [i_1 - 1] = ((/* implicit */unsigned long long int) var_14);
                    var_22 += ((/* implicit */signed char) var_0);
                }
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1 - 4] [i_0])))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [4LL] [i_1] [i_6 + 1])) ? (var_4) : (((/* implicit */long long int) arr_2 [i_6])))))));
                }
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned long long int) 3316597025937736231LL)) : (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_6 [i_7 + 1] [i_1] [i_0])))));
                                var_25 ^= ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned int) arr_17 [i_0] [(_Bool)0]);
                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1])) ? (arr_8 [i_1] [(_Bool)1] [i_1] [(unsigned char)0]) : (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) var_11);
                    var_29 = ((/* implicit */unsigned int) var_2);
                }
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (unsigned char)218);
                            arr_48 [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_44 [i_10] [(unsigned short)2] [i_10] [i_10]);
                            var_31 *= ((/* implicit */unsigned long long int) (unsigned char)222);
                        }
                    } 
                } 
            }
        } 
    } 
}
