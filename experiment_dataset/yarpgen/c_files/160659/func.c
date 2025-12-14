/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160659
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
    var_17 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26557))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61803))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (13U) : (((/* implicit */unsigned int) (+(-1))))))));
                var_19 = ((/* implicit */int) max((var_19), ((((-(((/* implicit */int) (unsigned char)107)))) - (((/* implicit */int) (!((!(((/* implicit */_Bool) -1)))))))))));
                var_20 += ((var_3) >> (((((/* implicit */int) min((arr_1 [i_0] [i_1]), ((signed char)-122)))) + (122))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) var_8)))));
}
