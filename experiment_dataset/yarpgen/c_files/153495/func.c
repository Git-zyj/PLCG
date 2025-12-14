/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153495
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_5) < (var_5))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)39294)) : (((/* implicit */int) (unsigned short)39294)))) : (((/* implicit */int) max(((unsigned short)36172), (((/* implicit */unsigned short) var_3))))))))));
        var_14 += ((max((((/* implicit */long long int) (unsigned short)29353)), (max((((/* implicit */long long int) 3707816907U)), (arr_2 [i_0] [(unsigned char)1]))))) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) <= (((/* implicit */int) (short)32387))))));
    }
    var_15 += ((/* implicit */unsigned long long int) var_3);
}
