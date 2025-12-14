/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102203
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-8)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))))))) : (((unsigned long long int) var_12))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))));
    var_19 = ((/* implicit */unsigned short) (unsigned char)123);
    var_20 = ((/* implicit */unsigned int) (~(11065687062496298946ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = (!(((/* implicit */_Bool) var_7)));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
}
