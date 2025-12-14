/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115544
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
    var_13 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 3] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6729777140221041220ULL)) ? (244300163442472327LL) : (((/* implicit */long long int) 268435440))));
                var_14 &= ((/* implicit */unsigned long long int) (~(min((arr_1 [i_1] [i_1 - 1]), (arr_1 [i_1] [i_1 - 3])))));
                arr_5 [i_1] = ((/* implicit */long long int) (_Bool)1);
                arr_6 [i_1] [i_0 - 1] [i_1] = ((/* implicit */long long int) (~(((unsigned long long int) max((var_4), (((/* implicit */unsigned long long int) var_9)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (_Bool)1);
}
