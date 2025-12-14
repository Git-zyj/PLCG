/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133237
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (short)19818)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(_Bool)0] [i_0 - 1] [i_0] [i_0 + 2] [i_0])) ? (36028797018701824LL) : (-36028797018701824LL)))))));
                                var_17 = ((/* implicit */unsigned short) var_6);
                                arr_14 [i_0] [(short)7] [i_0] = ((/* implicit */unsigned long long int) var_0);
                                var_18 ^= arr_6 [i_2] [(_Bool)0] [i_2];
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)246)), (arr_1 [i_2])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_15);
}
