/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157609
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
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) | (992)))) ? (((/* implicit */long long int) (-(var_11)))) : (((((/* implicit */_Bool) (short)-28674)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_5)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1904110488U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) ((9223372036854775807LL) >> (((((/* implicit */int) (signed char)-8)) + (43)))))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_6 [i_0] [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_21 = var_12;
}
