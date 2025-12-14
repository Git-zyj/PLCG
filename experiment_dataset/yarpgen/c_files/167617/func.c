/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167617
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
    var_20 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((_Bool) max((arr_3 [i_1 + 2] [i_0] [(short)4]), (((/* implicit */long long int) var_2)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))), ((+(((/* implicit */int) (short)22576))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_10 [i_3] [i_3]), (((/* implicit */unsigned int) arr_6 [i_0] [2ULL] [(signed char)21]))))) & (9223372036854775807LL)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((((/* implicit */unsigned long long int) 3924675908600261475LL)) | (arr_1 [i_4]))) : (((/* implicit */unsigned long long int) ((var_7) ^ (arr_9 [i_0]))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)11])) ? (min((((/* implicit */unsigned long long int) 9223372036854775789LL)), (arr_1 [i_0]))) : (min((arr_1 [i_0]), (arr_1 [i_1])))));
                                arr_11 [i_4] [i_3] [i_3] [0] [i_0] = min((min(((+(((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)8] [i_4])))), (((int) var_2)))), (((/* implicit */int) (unsigned char)246)));
                            }
                        } 
                    } 
                } 
                arr_12 [12U] [i_1] = ((/* implicit */int) var_13);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (short i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) arr_2 [i_6]);
                var_25 = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)9)) << (((5552907252605202945LL) - (5552907252605202939LL)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (((((((/* implicit */_Bool) var_4)) ? (1990621202U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32749)))))));
}
