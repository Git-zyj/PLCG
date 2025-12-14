/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169880
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) % (var_14)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((var_11) - (((/* implicit */int) var_8))))) > ((-(var_7))))))) % (var_6))))));
                            var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-60)) >= (((/* implicit */int) (short)-24353)))) ? (((((var_6) % (((/* implicit */unsigned long long int) var_16)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (var_7)))))) : (((((/* implicit */unsigned long long int) 4289305316U)) + (17806634765438597494ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ^ (((var_4) + (((/* implicit */unsigned long long int) var_11))))))) ? (((((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */unsigned int) var_11))))) % (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) var_0)))))) : (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
