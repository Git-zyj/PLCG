/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106629
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_0)))))) + (var_2))));
    var_17 = ((/* implicit */int) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_1)) : (var_8))))), ((+(-1461427437))));
                var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_14))))));
                var_20 = ((/* implicit */unsigned char) var_2);
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) > (((((/* implicit */int) (_Bool)1)) >> (((var_15) - (10482535628507115697ULL))))))))));
                var_22 = var_12;
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (max((142989288169013248LL), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)-63))) != (((((/* implicit */_Bool) var_5)) ? (-1461427458) : (1461427453))))))));
}
