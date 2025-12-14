/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127434
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
    var_17 = min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) -1309305516921393891LL))))) ? (var_0) : (max((var_15), (3715668598U))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) 7209138530906636028ULL);
        var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_1 [i_0 + 1]), (var_11)))) != (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_20 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 + 1] [(unsigned char)2])), (var_16))))));
    }
}
