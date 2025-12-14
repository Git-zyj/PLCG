/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13092
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3102263519U)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) var_2))))) : (var_1)))));
    var_18 = ((/* implicit */short) min((max((149209387623168606LL), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_12)) : (4937889989731599560LL))))), (((/* implicit */long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(739050142369323895ULL)));
                    arr_7 [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) 2099239800)), (3102263519U)));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    } 
}
