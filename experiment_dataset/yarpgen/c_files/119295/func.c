/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119295
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
    var_19 = ((/* implicit */long long int) ((var_17) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 15243251885159622015ULL))) ? (((long long int) (unsigned short)28529)) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) var_18)), (3203492188549929600ULL)))))));
                var_21 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)36197))));
                var_23 = ((/* implicit */signed char) var_18);
                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (var_12) : (arr_0 [i_0] [i_1]))), (min((min((var_1), (((/* implicit */long long int) arr_3 [i_1] [i_0])))), (((/* implicit */long long int) ((282523100135612746LL) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
}
