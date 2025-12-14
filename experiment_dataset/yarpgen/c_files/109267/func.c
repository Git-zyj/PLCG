/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109267
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
    var_17 = ((/* implicit */short) 13225218673283176668ULL);
    var_18 -= ((/* implicit */int) (signed char)-123);
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)14))))))), ((+(3510977424U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((long long int) 13225218673283176667ULL)))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_2);
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (var_9))))));
            }
        } 
    } 
}
