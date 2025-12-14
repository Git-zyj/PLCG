/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172386
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
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))) && ((!(((/* implicit */_Bool) var_14)))))) && (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))))))));
    var_17 = ((long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (signed char)24))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) min(((signed char)15), (arr_0 [i_0] [i_0 - 1])))))));
        var_19 = ((/* implicit */long long int) ((min((arr_1 [i_0 + 1] [i_0 - 1]), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_0 [i_0] [16U])), ((unsigned short)65535)))))) != (((6948165639452121630LL) + (((/* implicit */long long int) 386222597U))))));
    }
}
