/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139595
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (2147483647))), ((-(((/* implicit */int) arr_6 [i_1] [i_0]))))))) : (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) 2147483647)))));
                    var_20 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -2147483639)) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6483)))), (2810219598U)))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) (-((~(2526209407U)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
}
