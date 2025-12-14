/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140418
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
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) >= (((((/* implicit */_Bool) (+(4828385219908290079LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_7))))) : (-4828385219908290066LL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_21 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
                arr_5 [i_0] [2U] [i_0] = (!(((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_1 [(unsigned short)0]))))) >= (9U))));
                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)27714))));
                var_23 += arr_0 [i_1];
            }
        } 
    } 
}
