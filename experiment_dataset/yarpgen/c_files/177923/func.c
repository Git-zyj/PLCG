/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177923
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_2]), (var_1)))))))));
                    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_2]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (8814381821678776374ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) == (-5197239150634025513LL))))))) || (((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6))))));
    var_15 = ((/* implicit */short) var_7);
}
