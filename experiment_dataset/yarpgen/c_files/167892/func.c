/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167892
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
    var_20 = ((/* implicit */short) var_9);
    var_21 = ((/* implicit */unsigned long long int) (-(((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 949159815U)) && (((/* implicit */_Bool) (signed char)112)))))) : (4077781881U)))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (unsigned short)59945;
                    arr_9 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_0 [i_1])))), ((!(var_18)))))), (max((((/* implicit */unsigned long long int) (!(var_16)))), (((((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17637324794617461056ULL))))));
                }
            } 
        } 
    } 
}
