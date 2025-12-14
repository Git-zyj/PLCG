/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125661
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
    var_15 = ((/* implicit */signed char) max((var_15), (var_6)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = (((!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_2])))) ? (max(((~(var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16967546052988172288ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1])) - (67)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (signed char)-1)))) : (max((1959082101), (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
}
