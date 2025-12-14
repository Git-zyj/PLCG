/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129014
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
    var_14 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_13))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) var_10))))))))));
    var_15 &= var_10;
    var_16 = ((/* implicit */long long int) (+(max((var_9), (((/* implicit */unsigned int) max((var_6), (var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [(short)6] = ((/* implicit */short) max((min((((/* implicit */int) (signed char)64)), (arr_0 [i_0 + 1] [i_0 + 2]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_2);
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (-((~(2711323414U)))));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) * (arr_4 [i_0 + 1] [i_0 + 1] [(short)18])))) && (((/* implicit */_Bool) min(((short)-6207), (((/* implicit */short) (signed char)-32)))))));
            }
        } 
    } 
}
