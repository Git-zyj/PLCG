/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148997
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
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_5))))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((65504U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (short)14297)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65528)) : (-1)))) % (((((/* implicit */_Bool) var_2)) ? ((+(var_12))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
