/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181967
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min(((~((~(((/* implicit */int) arr_0 [i_0])))))), (16776704)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)192))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (arr_1 [i_0])))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223370937343148032LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2568938702U)))) + (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) ((_Bool) (unsigned char)186))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)186)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) var_8);
                                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [9LL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_1] [i_5] [i_6]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (19U)))));
                                arr_23 [i_0 - 1] [i_1] [i_0] [i_6] [i_7] = (((_Bool)1) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned char)180)));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5981293290485410369LL)) ? (((/* implicit */int) (unsigned char)69)) : (((((/* implicit */_Bool) 10993277482114039507ULL)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (short)16256))))));
                }
                var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1])), (((int) (unsigned short)15548))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)58)) / ((-2147483647 - 1)))));
}
