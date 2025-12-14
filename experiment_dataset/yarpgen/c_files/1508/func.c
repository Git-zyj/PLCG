/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1508
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [8U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((968998119U), (((/* implicit */unsigned int) (short)0))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-17354)) : (-33554432)))) : (arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (-33554439) : (((/* implicit */int) (signed char)-23))))) ? (1556064670) : ((-(((/* implicit */int) var_2)))))))));
                var_11 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_5)) ? (1438141722U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9U] [(_Bool)1] [i_1]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) (signed char)-1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */int) (signed char)1)) - (((/* implicit */int) var_6)))))) - (((/* implicit */int) var_8))));
}
