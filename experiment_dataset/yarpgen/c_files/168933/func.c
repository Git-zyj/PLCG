/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168933
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 &= ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (5376136583377570703LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [8LL] [4LL] [8LL]))))) % (arr_0 [i_0])))) != (var_4)));
                    var_17 = ((/* implicit */_Bool) -455589568);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [(short)8] [i_4 + 2] [i_0])) == (((/* implicit */int) arr_10 [i_0] [0LL] [i_0] [(unsigned short)7]))));
                                var_19 = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    var_20 = arr_0 [i_0];
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_21 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_6 + 1] [(unsigned char)4] [(unsigned char)4])) >> (((((520570014) + (((/* implicit */int) arr_4 [i_0] [i_0])))) - (520567994)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_6 + 1] [(unsigned char)4] [(unsigned char)4])) >> (((((((520570014) + (((/* implicit */int) arr_4 [i_0] [i_0])))) - (520567994))) + (18966))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) != (((/* implicit */int) arr_13 [i_0] [(unsigned short)11] [i_0] [i_0]))));
                                arr_19 [8LL] [8LL] [i_0] [0LL] [2] [0LL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_6 + 2] [i_3] [2ULL] [i_6 + 1] [0ULL])) / (((/* implicit */int) arr_18 [i_0] [i_0] [i_6 + 2] [i_6 + 2] [11ULL] [i_6 - 1] [i_6 + 2]))));
                                var_23 ^= ((/* implicit */short) (-(2424406039680507895ULL)));
                                var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5376136583377570704LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (-179948936))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [(unsigned short)1] [i_1] [i_3] [6LL] [i_3]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_25 [(signed char)7] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(14LL)));
                                var_26 = ((/* implicit */unsigned int) var_4);
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((long long int) ((3975511000U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9])))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (+(var_12)));
}
