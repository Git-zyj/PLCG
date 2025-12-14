/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109512
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8265)) ? (((/* implicit */long long int) 2467292457U)) : ((+(((long long int) 3347006565686894130ULL))))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((1068721189339513797ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((unsigned long long int) 1068721189339513797ULL)) : (var_11))) >> (((((/* implicit */int) var_9)) - (57438)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_5 [i_0])));
                var_19 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0])), ((-(((/* implicit */int) var_9))))))), (max((((/* implicit */long long int) arr_2 [i_0])), (arr_1 [5U] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31417)) << (((-220617870342391850LL) + (220617870342391857LL)))));
}
