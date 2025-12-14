/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106168
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) var_1);
                            var_19 |= ((/* implicit */short) 10863228463032944279ULL);
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)49)) ? (7205565388106948473ULL) : (10863228463032944271ULL)));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0)) <= (18446744073709551603ULL)));
            }
        } 
    } 
}
