/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107027
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((16184690588109008434ULL), (18446744073709551615ULL))))) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_8)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)-8)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_2), (arr_4 [i_2] [i_2 + 2] [i_2]))))));
                    var_15 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((short) (unsigned char)252))) : (((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) var_11)) : (1709823735))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) >> (((((var_8) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (142))))) - (105338684542099LL)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
    var_17 = ((/* implicit */_Bool) var_3);
}
