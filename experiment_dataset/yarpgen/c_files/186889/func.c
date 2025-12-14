/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186889
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-121)) || (((/* implicit */_Bool) 1674394688U)))), (((((/* implicit */int) (signed char)86)) < (1483210484))))))) | (max((((/* implicit */unsigned long long int) min(((signed char)-123), ((signed char)-122)))), (((((/* implicit */_Bool) 1483210484)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1483210476)))))))))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(13600683728516884219ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 6049721576676908963LL)) || (((/* implicit */_Bool) (signed char)-118))))) : (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13600683728516884223ULL))))) : (((((/* implicit */int) (signed char)-117)) ^ (((/* implicit */int) (signed char)-85))))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) - (17U))), (((((/* implicit */unsigned int) -1483210489)) + (3988647653U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_13));
}
