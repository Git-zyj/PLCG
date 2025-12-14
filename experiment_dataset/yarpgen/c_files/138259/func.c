/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138259
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
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (signed char)-90))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1]);
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((var_1) || (((/* implicit */_Bool) (signed char)90)))) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) min(((signed char)-90), ((signed char)113)))))), (((/* implicit */int) (unsigned short)12225)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-114);
                var_21 = ((/* implicit */long long int) (signed char)-90);
            }
        } 
    } 
}
