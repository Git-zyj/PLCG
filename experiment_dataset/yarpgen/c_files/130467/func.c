/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130467
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15462))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_1))))))) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                    var_18 += ((/* implicit */short) (-(((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
}
