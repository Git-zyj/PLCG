/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182422
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))) < (((var_1) | (arr_3 [i_0])))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))))));
                arr_6 [4LL] [4LL] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) arr_2 [4] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [0] [i_0 - 1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (signed char)-76)) : (var_8)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2147483647)) : (var_13)))))) ? (var_13) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (1873776827)))))))));
}
