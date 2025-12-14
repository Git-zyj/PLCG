/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17384
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = (!(((/* implicit */_Bool) (signed char)(-127 - 1))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (~((+(18446744073709551615ULL))))));
                    var_19 = arr_5 [i_0] [i_1] [(_Bool)1];
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) >= (arr_2 [i_1 + 1] [i_1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
    var_21 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)96), (((/* implicit */unsigned char) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3044131794U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (var_4)))));
}
