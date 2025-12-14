/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124715
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) ^ (((/* implicit */int) (signed char)94))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)0] [i_0])) ? (((/* implicit */int) var_13)) : (var_14))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55039)) || (((/* implicit */_Bool) (unsigned char)21)))))))) ? (((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)235)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [(unsigned short)18] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (short)-20518)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2 + 2] [1U] [i_4 - 1]))))))));
                                arr_12 [(signed char)8] = ((/* implicit */unsigned int) (unsigned char)11);
                                var_17 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_4] [i_3] [i_1] [5ULL]))))) && (((/* implicit */_Bool) max((0), (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) (unsigned char)234)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_13))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) | (arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_6] [i_7]));
                                var_20 = ((/* implicit */unsigned int) arr_5 [i_5 + 1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [(unsigned short)21]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_9))));
}
