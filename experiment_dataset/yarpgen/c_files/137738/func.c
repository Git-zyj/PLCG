/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137738
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
    var_13 = ((/* implicit */short) (+((+(min((((/* implicit */unsigned int) (unsigned short)41648)), (4294967295U)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((min((-1210640592), (((/* implicit */int) (unsigned short)12634)))), (((/* implicit */int) max((((arr_1 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= (var_4))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) != (4978785888030397889ULL)))))))))));
    }
}
