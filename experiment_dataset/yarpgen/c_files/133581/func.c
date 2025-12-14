/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133581
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((unsigned int) arr_9 [(signed char)13] [i_3] [(unsigned char)0])))))));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_4)))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [(signed char)9]))));
                    arr_12 [(short)2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_17))));
                    var_25 = min((((/* implicit */short) var_19)), (((short) 9452850079884999390ULL)));
                }
            } 
        } 
    } 
    var_26 ^= ((/* implicit */signed char) ((var_3) / (((/* implicit */long long int) ((((/* implicit */int) var_18)) * (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)130)))))))));
}
