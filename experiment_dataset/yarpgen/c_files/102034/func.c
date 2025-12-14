/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102034
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
    var_11 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [(_Bool)0])), (209035224072290429LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (0ULL)))));
                arr_5 [i_0] = ((/* implicit */short) ((18446744073709551605ULL) << ((-(((/* implicit */int) arr_1 [i_1]))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) max((0ULL), (0ULL)))))))));
                var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_6)) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) > (18446744073709551603ULL))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 23ULL)) || (arr_1 [15])))) <= (((/* implicit */int) arr_3 [i_0] [i_1]))))) : ((+((-(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) : ((-(((((/* implicit */_Bool) var_4)) ? (18446744073709551603ULL) : (18446744073709551609ULL)))))));
}
