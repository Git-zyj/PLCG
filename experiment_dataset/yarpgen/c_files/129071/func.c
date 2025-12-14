/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129071
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
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_17 -= ((((var_10) >> (((arr_2 [3]) - (15986405904849829107ULL))))) > (((arr_1 [(signed char)2]) << (((arr_0 [(signed char)0]) - (4162180674U))))));
        var_18 = ((/* implicit */long long int) (+(arr_1 [i_0])));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), ((~((~(((/* implicit */int) (unsigned short)65531)))))))))));
}
