/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15003
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
    var_12 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) -4724641116287466546LL))) == (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_3 [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) 0LL)) : (min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (short)21652))))) ? (((/* implicit */int) (short)21636)) : (((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((short)-21656), ((short)8192))))))));
}
