/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175379
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((((/* implicit */int) (unsigned short)1)) & (((/* implicit */int) ((short) (~(((/* implicit */int) arr_6 [i_0] [13U] [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (4294967295U))) - (arr_1 [16])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) ((max((((16783835161041938593ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (4294967295U)))))) & (((/* implicit */unsigned long long int) max((((int) (unsigned short)18217)), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) != (arr_1 [i_1])))))))));
                                arr_17 [i_0] [(unsigned short)0] [17U] [(unsigned short)12] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1662908912667613022ULL)))) ? (((16376U) >> (((-1266540050) + (1266540054))))) : (((var_16) >> (((-1817371457744508341LL) + (1817371457744508354LL)))))))))))));
    var_22 = (!(((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (unsigned short)47319)))));
    var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(579118670)))) ? (((((/* implicit */_Bool) (short)-22210)) ? (((/* implicit */unsigned long long int) -702809707)) : (16783835161041938603ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (4774956166909301339ULL))))) / (((/* implicit */unsigned long long int) (+((-(var_8))))))));
}
