/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151162
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
    var_13 = ((/* implicit */short) ((int) var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */short) (-(min((arr_5 [i_1 - 2]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-59)), (8391949893374387798LL))))))));
                    var_15 = ((/* implicit */long long int) 4294967289U);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-28)) ? (8391949893374387798LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (6U))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)153))) : (((((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) -901478722)))) + (((/* implicit */unsigned long long int) ((int) var_5)))))));
}
