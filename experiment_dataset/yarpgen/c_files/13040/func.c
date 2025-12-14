/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13040
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1 - 2] [i_2]))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_14))));
                    var_22 = ((((/* implicit */_Bool) 3614650552U)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (unsigned short)30469)));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (61))) - (26)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) var_11)))));
}
