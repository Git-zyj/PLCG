/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146166
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
    var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -6488845759076734536LL)) ? (6488845759076734533LL) : (-6488845759076734560LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2688719040U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31096))) : (-6488845759076734530LL))))))));
                var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))));
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_0 [19U])))) ? (arr_2 [i_0] [2LL]) : (((/* implicit */unsigned int) var_4))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_8))));
}
