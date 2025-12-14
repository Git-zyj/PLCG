/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13285
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((long long int) arr_2 [i_0 + 3])) >> (((min((arr_2 [i_1]), (arr_2 [i_0 + 2]))) - (112645783)))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (max((((((/* implicit */_Bool) (signed char)-121)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))), ((-(-14LL))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min((arr_1 [i_0]), (((/* implicit */unsigned short) ((short) arr_7 [i_1] [i_1])))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((12LL), (39LL)))) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) (unsigned short)22092)))))));
                                var_15 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0 - 2] [i_1] [(short)3] [i_4 + 3])) >= (((/* implicit */int) arr_9 [i_0 - 1] [(unsigned short)19] [i_2] [i_4 + 1])))))));
                                var_16 = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 3] [(signed char)12] [i_0 - 1])));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [3LL] [3LL] [i_0 + 2])) ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? (((/* implicit */int) arr_4 [16LL] [i_1] [i_0 + 1])) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_1);
}
