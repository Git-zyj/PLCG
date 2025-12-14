/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159872
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 2] [i_2 + 1] [i_1] [i_4 + 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 262081954)), (arr_9 [i_0] [i_2] [i_3] [i_4])));
                                var_12 ^= ((/* implicit */unsigned short) ((short) ((((unsigned long long int) 2093820888667901841ULL)) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-40)), (4294967284U)))))));
                                arr_16 [i_0] [7] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */int) ((long long int) var_4));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2 + 1] = ((/* implicit */_Bool) var_10);
                    var_13 = var_4;
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_6), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((16352923185041649774ULL), (((/* implicit */unsigned long long int) (signed char)52))))))))));
}
