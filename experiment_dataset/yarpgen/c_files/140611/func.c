/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140611
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
    var_13 &= ((/* implicit */short) min(((~((~(var_6))))), (((/* implicit */long long int) var_2))));
    var_14 = ((/* implicit */int) (signed char)-36);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (short)32766);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) / ((~(((/* implicit */int) arr_1 [(short)15])))))) == (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1784285971)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (var_2)))) : (((((/* implicit */_Bool) (signed char)122)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32760)))))))) ? (((((unsigned long long int) var_12)) >> (((var_9) - (332288161U))))) : (var_1)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) == (var_9)))) >> (((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)66))))) % (max((var_1), (var_0))))) - (4160453556606034492ULL)))));
}
