/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147546
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
    var_17 = ((/* implicit */short) 1525299227754562356ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = 1525299227754562352ULL;
                    var_19 -= ((/* implicit */long long int) 3478511865U);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_4 + 4])) || (((/* implicit */_Bool) (-(3478511865U))))));
                                arr_15 [i_0] = ((/* implicit */signed char) ((((long long int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((max((arr_11 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_3]), (((/* implicit */long long int) (unsigned short)65530)))) % (((((((/* implicit */_Bool) 1525299227754562356ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) >> (((max((2403878729443552591ULL), (((/* implicit */unsigned long long int) var_14)))) - (2403878729443552579ULL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
