/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100739
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_3] [i_1]), (((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_0 + 1]))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)567))))), (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_3] [i_3] [i_3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64428))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0 - 3] [i_2])))))))))));
                            var_16 = ((/* implicit */unsigned long long int) (signed char)64);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))));
                                var_18 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (unsigned short)1108)))));
                                arr_11 [i_1] [7ULL] [i_1] [i_3] = var_1;
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((unsigned long long int) (unsigned char)232)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152)))));
                                arr_12 [i_0] [i_0] [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])))) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_7 [(signed char)14] [i_1] [i_2 + 1] [(_Bool)0] [i_4] [i_1]))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_1]);
                                var_20 = ((((/* implicit */_Bool) (signed char)-57)) ? (3893408625U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2] [i_3]))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)64)) ? (((var_4) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_7))))));
                                var_22 += ((/* implicit */unsigned short) arr_10 [i_2 + 1] [i_5] [i_2] [i_5] [i_1]);
                            }
                            for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                            {
                                arr_19 [i_3] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_2 + 1] [i_2] [(short)0] [i_2 + 1] [i_2] [(signed char)12] [i_2 + 2]), (arr_17 [i_2 - 1] [i_2] [8LL] [i_2 + 3] [i_2] [(signed char)12] [i_2 + 3])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_0] [i_1] [(unsigned short)2] [i_3] [i_0] [i_2] [i_3])), (((unsigned short) (_Bool)0)))))));
                                arr_20 [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (short)-31174))));
                            }
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] = ((/* implicit */long long int) (~(var_8)));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [(_Bool)1] [i_0] [i_0 + 2] [(short)8] [i_0 - 2])))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)19)) + (((/* implicit */int) (short)5995))))), (((long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-31161)) ? (((/* implicit */int) (unsigned short)49920)) : (((/* implicit */int) arr_2 [i_0] [(_Bool)1])))) / (((/* implicit */int) (unsigned short)65529))))))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((signed char) arr_6 [i_1] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_25 &= ((/* implicit */long long int) var_0);
    var_26 *= ((/* implicit */_Bool) (~((+(((long long int) var_2))))));
}
