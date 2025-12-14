/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101143
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
    var_12 += ((/* implicit */_Bool) var_8);
    var_13 ^= ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 &= ((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))) >= (3907010281U));
                                var_15 = ((/* implicit */unsigned char) (signed char)-10);
                                var_16 += ((unsigned int) (signed char)85);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)-110), (((/* implicit */signed char) (_Bool)1))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-24)))) : (((/* implicit */int) (unsigned char)84))));
                }
            } 
        } 
    } 
}
