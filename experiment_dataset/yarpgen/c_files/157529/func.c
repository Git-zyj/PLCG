/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157529
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
    var_10 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)10485)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - (19ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((1829113574), (-1088869826)));
        arr_4 [i_0] [i_0] = (-(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) - (5538299215562267433LL))), (((/* implicit */long long int) (unsigned char)29)))));
        var_11 = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (2853759740U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2745512869U)) ? (3603906208524568997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41)))))))))));
    }
}
