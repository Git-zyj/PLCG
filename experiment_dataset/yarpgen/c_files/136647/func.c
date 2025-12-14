/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136647
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
    var_19 = ((/* implicit */unsigned int) min((-7199283028890352598LL), (-7199283028890352598LL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned char) -7199283028890352598LL));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)255)) * (((/* implicit */int) arr_6 [i_1]))))) : ((+(1662492560U)))))), ((+(((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_3])) & (arr_5 [i_3] [i_0])))))));
                                var_21 = ((/* implicit */signed char) min((min((arr_1 [i_3 + 1] [i_3 + 1]), (((/* implicit */long long int) arr_13 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 2])))), (((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 1])) ? (arr_1 [i_3 + 1] [i_3 - 1]) : (arr_1 [i_3 - 1] [i_3 + 2])))));
                            }
                        } 
                    } 
                } 
                var_22 = min((var_17), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_9)), (arr_8 [2U]))), (((/* implicit */unsigned short) ((unsigned char) -7199283028890352598LL)))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_11 [i_0] [i_1] [i_5] [i_6] [i_6]), (arr_11 [i_6] [i_1] [i_5] [i_1] [12U]))))));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [10LL] [i_0] [i_1] [i_5] [10LL])) + (((/* implicit */int) (unsigned short)0)))) + (var_0)))) : (((((/* implicit */_Bool) (unsigned short)255)) ? (3740361404U) : (var_1)))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_5] [i_0]))) : ((+(arr_4 [i_5] [i_1] [i_0])))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) var_9)), (var_17))))), (min((((/* implicit */long long int) ((((/* implicit */int) (short)21682)) << (((((/* implicit */int) (unsigned char)205)) - (201)))))), (((arr_9 [(short)2] [(short)5] [i_5] [i_6] [(short)2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-13140))))))))))));
                            arr_22 [11U] [6ULL] [i_0] [i_6] = ((/* implicit */unsigned short) arr_1 [i_5] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((var_0), (((/* implicit */int) (unsigned char)10))));
    var_27 = ((/* implicit */unsigned long long int) var_2);
}
