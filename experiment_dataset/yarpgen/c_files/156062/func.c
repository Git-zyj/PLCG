/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156062
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -5425976455909978075LL))) < ((-(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                    var_21 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18)))) < (((/* implicit */int) ((((/* implicit */int) (short)29646)) < (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : (var_19))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (signed char)85);
}
