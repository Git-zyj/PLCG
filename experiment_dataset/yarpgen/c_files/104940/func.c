/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104940
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
    var_13 = ((/* implicit */int) var_2);
    var_14 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned char)13] [12LL] [5ULL] = (((+(((((/* implicit */_Bool) 3641366701U)) ? (653600571U) : (3641366703U))))) / ((((!(((/* implicit */_Bool) 1370937659U)))) ? (var_10) : (((/* implicit */unsigned int) ((var_6) >> (((3641366697U) - (3641366682U)))))))));
                    var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) arr_1 [i_1])) >= (var_10))) ? (((/* implicit */unsigned long long int) arr_1 [(signed char)7])) : (15097442015922236715ULL))) <= (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_2 [i_0 + 3])))));
                    var_16 = ((/* implicit */unsigned int) ((int) (~(arr_3 [i_0 + 1]))));
                }
            } 
        } 
    } 
}
