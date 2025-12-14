/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185534
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
    var_16 = var_2;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2])) ? (2233785415175766016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9718)))))) ? (min((arr_8 [i_2 + 1] [i_2] [i_2 + 3] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2] [(_Bool)1] [7LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3580973))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) 3580954);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((min((-3580973), (3580966))), (((/* implicit */int) ((signed char) -3580979)))))), (min((2359021274960502271LL), (((/* implicit */long long int) (unsigned char)16)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) -4019958908329349485LL))));
}
