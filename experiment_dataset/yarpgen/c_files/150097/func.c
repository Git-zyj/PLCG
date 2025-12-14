/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150097
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (((unsigned short) var_4))));
    var_18 = ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (var_8)))))) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (max((261888U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))))) ? (arr_2 [i_0]) : (min((((/* implicit */unsigned long long int) 4294705407U)), (((arr_5 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((2294039110U), (((/* implicit */unsigned int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            }
        } 
    } 
}
