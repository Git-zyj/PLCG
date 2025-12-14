/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120902
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
    var_17 -= (~(max((((/* implicit */unsigned long long int) var_11)), (var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_2 [i_0 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                    var_19 ^= ((/* implicit */unsigned short) var_8);
                    var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_21 = ((/* implicit */short) var_15);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((signed char) var_2));
    var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((65970697666560LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))))))), (((/* implicit */long long int) var_8))));
    var_24 = ((/* implicit */short) var_3);
}
