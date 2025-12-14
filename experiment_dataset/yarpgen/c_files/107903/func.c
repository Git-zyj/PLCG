/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107903
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), ((-(((/* implicit */int) arr_1 [i_1 + 2]))))));
                var_16 = ((/* implicit */short) ((-8581682131337007094LL) | (1159349233147716220LL)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max(((-(-3844554833620883195LL))), (((/* implicit */long long int) (_Bool)1)))))));
}
