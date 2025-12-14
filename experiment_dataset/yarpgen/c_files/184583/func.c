/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184583
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 9880268021038723277ULL))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)30336)) ? (-1228800052141829474LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30336))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (arr_5 [i_0]))))));
            }
        } 
    } 
    var_18 = min((((long long int) 137438951424LL)), (((/* implicit */long long int) ((_Bool) min((-1), (((/* implicit */int) (unsigned short)30339)))))));
    var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (var_6) : ((-(var_10))))));
}
