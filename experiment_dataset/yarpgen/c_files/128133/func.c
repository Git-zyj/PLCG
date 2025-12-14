/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128133
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
    var_15 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23787))) - (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (min((var_14), (576460752301326336ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)0))))) == (min((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                var_16 = ((/* implicit */unsigned int) max((min((arr_0 [(signed char)7]), (((/* implicit */long long int) var_13)))), (max((((((/* implicit */_Bool) (short)-1)) ? (arr_0 [i_0]) : (arr_1 [(unsigned char)1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_1 [i_0]);
                                var_18 -= ((/* implicit */signed char) (-(var_10)));
                                var_19 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_2 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)29969)))))));
                                var_21 ^= (~(var_14));
                                var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_5] [6])) ? (((/* implicit */int) arr_15 [2ULL] [(signed char)8] [i_2] [i_5] [2ULL])) : (((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [12U] [12U] [(short)8]))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (arr_17 [i_1] [i_1]))))))))))));
                    arr_21 [i_0] = ((/* implicit */unsigned long long int) var_7);
                }
            }
        } 
    } 
}
