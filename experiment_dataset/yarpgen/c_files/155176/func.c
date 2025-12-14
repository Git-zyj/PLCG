/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155176
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */signed char) max(((unsigned short)55809), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_3)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (unsigned short)49858)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = arr_1 [i_3 + 3];
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2048U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-29357))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29380)) ? (-4029537563613698982LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */signed char) ((_Bool) var_7));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (short)29380))));
}
