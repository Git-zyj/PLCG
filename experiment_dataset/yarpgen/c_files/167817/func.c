/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167817
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) (unsigned short)50609);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1])) >= (arr_4 [i_0] [i_0] [i_1])))) & (((/* implicit */int) ((var_9) != (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 += ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (var_9)))) && ((((+(var_16))) != (((((/* implicit */int) var_13)) >> (((var_7) - (3394756153U)))))))));
}
