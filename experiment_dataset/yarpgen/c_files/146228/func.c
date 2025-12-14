/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146228
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
    var_16 -= ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */unsigned char) max((((unsigned short) 3062870144678579417ULL)), ((unsigned short)65535)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)12] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)30)), (arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) ((5329501842720688839ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))) ? ((~(264202063004906518LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)75)))))));
                var_18 |= ((/* implicit */short) arr_3 [2ULL] [2ULL]);
            }
        } 
    } 
}
