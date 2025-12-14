/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17161
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) -1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-21)) || ((!(((/* implicit */_Bool) var_17)))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) -5691008760090371126LL))))) || (((/* implicit */_Bool) arr_0 [i_1 - 1]))))));
                arr_6 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(var_0)))), (arr_0 [i_1 - 2]))))));
            }
        } 
    } 
}
