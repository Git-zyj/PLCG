/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141539
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0]))))), (min((min((var_3), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_19 += ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [(signed char)10]))))), (2170082519U)));
            }
        } 
    } 
    var_20 *= ((/* implicit */short) var_11);
}
