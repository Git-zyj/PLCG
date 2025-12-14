/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15928
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
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((var_11) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) var_3)))));
                                arr_13 [i_0] [(unsigned short)6] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) 4269145051U);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_2)))) : (((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) << (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_1 [i_0] [i_0])))))));
                var_17 *= ((/* implicit */unsigned int) var_7);
                arr_14 [(unsigned char)6] [(unsigned char)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) : (13380258885082952198ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((short) var_0));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_13)), (14155199930497663034ULL))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_5] [(unsigned short)7] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (18446744073709551603ULL))))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 16; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [i_7] [i_7] [i_7] [1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [(short)14] [(short)14] [i_6] [i_6] [i_6])) || ((!(((/* implicit */_Bool) arr_27 [i_9 - 2] [i_8] [i_7] [(_Bool)1] [i_5]))))))) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-97)) || (((/* implicit */_Bool) (signed char)-97)))))));
                                arr_30 [i_5] [i_7] [i_7] [(unsigned char)18] [i_7] = (!(((/* implicit */_Bool) arr_21 [i_7] [i_6] [(short)15] [i_9])));
                                var_20 -= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((unsigned long long int) arr_16 [i_5])) ^ (min((((/* implicit */unsigned long long int) var_15)), (arr_17 [i_9 + 4] [i_9 - 2]))))))));
                            }
                        } 
                    } 
                } 
                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_6])) ^ (((/* implicit */int) arr_16 [i_5])))) >> (((arr_23 [i_6] [2LL] [2LL] [2U]) - (1272852380U)))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_5] [8LL] [(unsigned short)0]))))), ((~(var_15))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5] [i_5] [(_Bool)1] [i_5])) << (((((/* implicit */int) arr_16 [i_5])) + (37)))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) 4294967295U);
}
