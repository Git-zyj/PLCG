/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100499
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
    var_16 |= ((/* implicit */unsigned short) var_1);
    var_17 -= var_10;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3185678027U)))))) >> (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_12)))))))));
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_4])), (arr_2 [i_3])))) / (var_5)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((var_15), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (6540099766825338540ULL))))))))));
}
