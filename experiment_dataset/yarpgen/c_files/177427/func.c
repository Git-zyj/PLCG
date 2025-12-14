/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177427
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)))) ? (((unsigned int) var_3)) : ((+(var_3)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [1] = ((/* implicit */unsigned long long int) (signed char)-95);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3356544076912971791LL))))) ? (((/* implicit */long long int) arr_0 [i_1] [i_0])) : (max((((((/* implicit */_Bool) 4294967280U)) ? (-3356544076912971791LL) : (arr_3 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [14U])) ? (((/* implicit */int) (short)-26846)) : (((/* implicit */int) var_6)))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) ((((/* implicit */int) (short)26874)) > (((/* implicit */int) (short)26874)))))) != (var_4)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-26874)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)83)) <= (2147483647)))) : ((+(((/* implicit */int) (signed char)103)))))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) (signed char)-103)) ? (7705046455477961254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned char) var_1)))) : (var_5)));
}
