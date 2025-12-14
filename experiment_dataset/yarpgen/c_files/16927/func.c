/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16927
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_11 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))) != (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                arr_11 [i_0] [i_1] [(signed char)0] [i_2] [20LL] [i_2] [i_4] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))) ^ (((((/* implicit */unsigned long long int) var_6)) + (var_10)))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_5))))) | (var_2)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_6);
}
