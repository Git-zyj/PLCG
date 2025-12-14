/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182499
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
    var_20 = ((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (var_0))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56937)))));
    var_21 = ((/* implicit */unsigned short) min((max((var_3), ((~(var_5))))), (((((var_3) + (2147483647))) >> (((min((576460752299229184LL), (((/* implicit */long long int) (unsigned char)129)))) - (118LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((var_11) <= (((/* implicit */int) var_19)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((/* implicit */int) var_6))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((2040291277) % (((/* implicit */int) (signed char)-51))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) -182294882);
                arr_9 [9LL] [i_1] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((1058661114U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (287077674U))), (1058661114U)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-105)), ((unsigned char)0))))))) ? (((((/* implicit */long long int) var_12)) & (((var_0) | (((/* implicit */long long int) 1058661110U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) -516980084))))))));
}
