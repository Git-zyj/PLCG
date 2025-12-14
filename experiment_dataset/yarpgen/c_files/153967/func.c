/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153967
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
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27755))) < (2153675075U)))))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38399)) % (((/* implicit */int) (unsigned short)92))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((/* implicit */int) (short)7596)), ((+(((/* implicit */int) ((unsigned short) (unsigned char)4)))))));
    var_22 -= min((((/* implicit */unsigned int) (((+(((/* implicit */int) (short)-28798)))) > ((-(((/* implicit */int) var_18))))))), (min((min((4194303U), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) (unsigned char)7)))));
    var_23 = ((/* implicit */unsigned short) var_6);
    var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25527))))) ? (max((var_3), (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) 5848396092391621512LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))))));
}
