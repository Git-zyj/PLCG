/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146441
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
    var_15 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [(unsigned short)1] = (~(((/* implicit */int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_5)))) == (((/* implicit */int) var_3))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) min((var_14), (((/* implicit */long long int) var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19424)) ? (var_14) : (((/* implicit */long long int) var_2))))) ? ((-(-479278152354983404LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (-1496509914))))))))))));
    }
}
