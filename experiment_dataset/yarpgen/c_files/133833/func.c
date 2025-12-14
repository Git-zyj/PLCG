/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133833
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
    var_18 -= ((/* implicit */long long int) var_5);
    var_19 += ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11)))));
                arr_5 [(unsigned short)6] [i_0] [i_0] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15947)) ? (39501043150079369LL) : (((/* implicit */long long int) 155914121U))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1 + 4] [i_1 + 3] [i_1]) : (arr_0 [21LL] [i_1 + 2]))))) : (arr_2 [i_0 - 1] [(unsigned char)10] [i_1 + 1]));
                var_21 = ((/* implicit */long long int) arr_1 [i_1]);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1 + 3]))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61270)))));
                var_22 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
}
