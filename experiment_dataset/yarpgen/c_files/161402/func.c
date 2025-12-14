/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161402
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) var_9);
                    var_13 = ((/* implicit */long long int) (+(min(((+(arr_0 [i_1]))), (max((13762260324460513694ULL), (13762260324460513692ULL)))))));
                }
            } 
        } 
    } 
    var_14 += var_3;
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */long long int) (((+(((/* implicit */int) var_10)))) == (var_11)))), ((+(((((/* implicit */long long int) var_11)) % (var_0))))))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)117))))) != (13762260324460513704ULL))))));
}
