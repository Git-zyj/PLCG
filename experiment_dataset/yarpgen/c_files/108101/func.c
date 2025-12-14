/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108101
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) & (var_3))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_3 [i_0] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_2] |= ((/* implicit */long long int) (~(((((/* implicit */int) arr_6 [i_0] [i_1])) + (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))));
                    arr_10 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */long long int) -1600671372))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_2 [i_2])))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_2])) < (((/* implicit */int) var_18))))))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */long long int) var_14);
    var_23 = (+(((((/* implicit */_Bool) (unsigned short)60528)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2048))))) : (0LL))));
    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
}
