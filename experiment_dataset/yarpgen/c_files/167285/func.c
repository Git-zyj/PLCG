/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167285
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((unsigned long long int) ((short) var_8))))));
                    var_12 -= ((/* implicit */unsigned short) ((8ULL) * (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [(short)13] [(short)13]))))));
                }
            } 
        } 
    } 
    var_13 = ((8ULL) >> (9ULL));
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) var_3)), (var_5)))));
                    var_15 = ((/* implicit */unsigned char) (short)9428);
                    arr_13 [i_3] [i_3] [i_3] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)22)) >> (((/* implicit */int) var_4))))))));
                    var_16 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)9428)), (((min((((/* implicit */unsigned long long int) (unsigned char)137)), (4083763987254824462ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 10ULL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((arr_16 [i_6 + 1] [i_6]) / (arr_16 [i_7] [i_6]))) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)34)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                            {
                                arr_29 [i_6] [i_6] = var_2;
                                arr_30 [i_6] [i_6] [(signed char)13] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */short) (((~(((/* implicit */int) (signed char)-91)))) | (((((/* implicit */int) (unsigned char)137)) >> (((/* implicit */int) (signed char)11))))));
                            }
                            for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                            {
                                var_18 = var_6;
                                arr_33 [i_9] [i_7] [i_6] [i_11] [i_11] [i_6 - 1] [i_8] = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) var_1))))), (((/* implicit */long long int) ((short) ((var_8) ^ (var_6)))))));
                            }
                            var_19 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) var_2))))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6])) || (((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (short)19195))))))))) == (1124741924U)));
                /* LoopNest 3 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (unsigned int i_13 = 1; i_13 < 24; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_22 ^= ((/* implicit */int) arr_4 [i_6 + 1] [i_7 + 3] [i_12] [i_7 + 3]);
                                var_23 -= ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
