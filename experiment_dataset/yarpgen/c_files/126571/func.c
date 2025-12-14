/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126571
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min(((unsigned short)34052), (((/* implicit */unsigned short) (short)31025)))))));
    var_18 = ((/* implicit */short) -986209341);
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [8U])) ? (-1364158359) : (((/* implicit */int) arr_0 [i_0] [i_0])))) == (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0]))))))) + (((/* implicit */int) (short)18695))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((4279340986088264551ULL) << (((arr_4 [(short)13] [i_1]) + (185733278)))))) ? (((((arr_4 [i_0] [i_1]) + (2147483647))) >> (((arr_4 [i_0] [i_1]) + (185733295))))) : (((/* implicit */int) ((((/* implicit */int) (short)-20846)) >= (-1295283525))))));
            }
        } 
    } 
}
