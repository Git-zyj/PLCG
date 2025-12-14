/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127368
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_6 [i_2])))))) & (arr_5 [i_0] [i_1] [i_2] [(short)1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0])))))), (2259159433U)));
                                arr_16 [i_0] [21U] [i_4] [i_4] [17LL] [i_4] [17LL] = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) ((arr_11 [(unsigned short)15] [i_3] [i_1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                                arr_17 [i_0] [10ULL] [10ULL] [10ULL] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) var_11))))) != (((((/* implicit */_Bool) max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (8725724278030336ULL) : (((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_2] [i_4]), (((/* implicit */long long int) var_13)))))))));
                                var_15 ^= ((/* implicit */short) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-4096)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (18438018349431521285ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
