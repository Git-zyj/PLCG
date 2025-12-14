/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102879
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
    var_14 = ((/* implicit */signed char) ((var_6) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (4611686018427387840ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) 13305665400629897716ULL)) ? (789171777U) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_15 -= ((/* implicit */long long int) (+((+(var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                var_16 -= ((/* implicit */unsigned int) min((min((arr_3 [i_0] [i_1]), (((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1])))))), (((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) (unsigned char)81)))) <= (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) : (var_3))))))));
                arr_5 [i_0] = ((/* implicit */long long int) var_9);
                var_17 = ((/* implicit */long long int) 4294967295U);
            }
        } 
    } 
}
