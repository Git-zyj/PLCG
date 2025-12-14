/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180231
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -114333285))))), (min((var_7), (var_0))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))))))));
                    var_17 = ((int) min((((/* implicit */int) (signed char)-1)), (arr_0 [i_0])));
                    var_18 += ((/* implicit */long long int) ((unsigned long long int) ((7900183609731178786ULL) <= (((1463681940254313189ULL) | (((/* implicit */unsigned long long int) var_0)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (-(4294967295U)));
}
