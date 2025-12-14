/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152313
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4405057913795504823LL)) ? ((+((-(-4405057913795504824LL))))) : (((/* implicit */long long int) 918602780U))));
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_3] [(signed char)16]))))) % (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3]))))) & (((arr_0 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? ((+(((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                var_15 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0])))))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (var_4)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-123))))) & ((~(((((/* implicit */_Bool) -2740755482853857937LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_7)))))));
}
