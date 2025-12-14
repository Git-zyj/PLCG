/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106938
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */long long int) (~(0U)))) : (-1023321956241499017LL)))), (((((/* implicit */_Bool) (~(arr_0 [i_2] [(_Bool)1])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [(signed char)11] = arr_6 [i_0] [(unsigned char)20] [i_1] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))), (min((var_10), (((/* implicit */unsigned int) var_0)))))));
}
