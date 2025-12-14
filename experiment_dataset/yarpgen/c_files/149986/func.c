/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149986
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
    var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) (((+(var_10))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (11968589375657200055ULL))))))))));
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((var_9) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))), (((((/* implicit */_Bool) 1462906439010849241ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */signed char) arr_4 [i_0] [i_1 - 1]);
                var_15 |= ((/* implicit */_Bool) max((var_0), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) / (min((514209320U), (4070963776U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_16 = (!(((/* implicit */_Bool) 514209341U)));
                var_17 = ((/* implicit */unsigned char) arr_5 [i_2] [i_2]);
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) < (min((arr_5 [i_3] [i_2]), (((/* implicit */unsigned long long int) var_10))))));
                var_19 += ((((/* implicit */_Bool) (signed char)-53)) ? (1669382959236096062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
}
