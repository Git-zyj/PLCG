/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165904
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = var_16;
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((min((((((/* implicit */_Bool) 16801558987181367869ULL)) ? (16801558987181367869ULL) : (0ULL))), (((((/* implicit */_Bool) 7756183305983099952ULL)) ? (7756183305983099949ULL) : (arr_2 [14ULL]))))), (((((/* implicit */_Bool) max((var_8), (var_14)))) ? (10690560767726451664ULL) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (14107996142474950184ULL)))))))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_12)) ? (var_6) : ((+(min((2ULL), (var_4))))));
}
