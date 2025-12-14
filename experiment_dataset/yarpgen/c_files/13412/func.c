/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13412
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((var_0), (((unsigned char) arr_2 [(unsigned char)10]))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (short)17825))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 += ((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
}
