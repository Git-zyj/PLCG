/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152574
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
    var_17 = ((/* implicit */unsigned char) -227123653);
    var_18 = ((/* implicit */unsigned long long int) (-((+(var_3)))));
    var_19 |= ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_7))))))), ((unsigned char)0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+(((((((/* implicit */int) (unsigned short)31)) ^ (((/* implicit */int) var_6)))) << ((((~(((/* implicit */int) var_8)))) + (233)))))));
                var_20 = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((int) (signed char)29))))))))));
}
