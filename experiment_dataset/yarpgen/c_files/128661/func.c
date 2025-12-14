/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128661
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) 125829120))))) > (((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)1)))) + (((/* implicit */int) min((var_12), ((unsigned char)96)))))));
                                var_17 |= ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_1 - 1] [i_1 - 1])))));
                                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_12 [i_2])))))))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [9U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((_Bool) var_9))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15497077382715892496ULL)) ? (15497077382715892482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51216)))));
}
