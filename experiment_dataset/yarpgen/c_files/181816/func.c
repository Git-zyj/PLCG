/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181816
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12526)) && (((/* implicit */_Bool) (short)-30774))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)789)) << (((((/* implicit */int) (short)-789)) + (809)))));
                arr_6 [8U] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) var_14)) <= (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)55)) && (((/* implicit */_Bool) (unsigned char)225)))) || (((/* implicit */_Bool) ((unsigned int) var_7)))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (_Bool)1);
    var_19 = ((/* implicit */_Bool) ((long long int) var_16));
}
