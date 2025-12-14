/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169125
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_1])))) != (var_5)));
                arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(4294967295ULL)))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [(_Bool)1] [i_1])), ((short)-5261)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (-691044564)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (18446744069414584321ULL)));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_7))));
    var_15 = (!(((((/* implicit */_Bool) max((2065622082U), (var_9)))) && (((/* implicit */_Bool) var_8)))));
}
