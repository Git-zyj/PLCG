/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103606
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
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? ((-((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_6))));
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_0]))))));
                var_21 = ((/* implicit */unsigned short) min(((((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (short)-21334)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (short)32350)) / (((/* implicit */int) var_13)))))), (((/* implicit */int) arr_3 [i_0 + 1] [i_0]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1])))) - (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65535)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4249555159U) <= (var_17))))) : (18446744073701163008ULL)))));
}
