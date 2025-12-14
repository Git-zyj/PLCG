/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175797
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
    var_19 = (-(min((min((var_13), (var_2))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)-17)), (12900341034021616178ULL))), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */long long int) var_10)) : (var_8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((long long int) (_Bool)1)) > (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2962016152114411905ULL));
            }
        } 
    } 
}
