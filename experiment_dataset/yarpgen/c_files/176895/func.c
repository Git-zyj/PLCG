/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176895
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_15)))) && ((!(((/* implicit */_Bool) var_13))))))) : (((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)213)))))));
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned char)126)))))));
    var_19 = ((/* implicit */unsigned short) var_15);
    var_20 = ((/* implicit */unsigned long long int) 1341872564);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) arr_1 [i_0 - 3]);
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((13727408808356502634ULL), (var_1)))) ? (min((-6307070023447610565LL), (6307070023447610571LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16))))));
    }
}
