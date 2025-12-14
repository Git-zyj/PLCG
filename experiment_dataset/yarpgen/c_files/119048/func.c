/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119048
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
    var_20 = ((/* implicit */long long int) (unsigned char)148);
    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (max((max((var_9), (((/* implicit */long long int) (signed char)31)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)52448)), (var_18))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (unsigned short)52421))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)52425))));
            }
        } 
    } 
    var_23 -= ((/* implicit */_Bool) max((max((((unsigned long long int) (short)-26850)), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967294U)) ? (((var_14) ? (25U) : (25U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_24 ^= ((/* implicit */short) var_19);
}
