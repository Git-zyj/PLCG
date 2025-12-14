/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13577
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
    var_10 = ((/* implicit */unsigned short) 13396601426115775262ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) / (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))))))) ? (max((min((((/* implicit */unsigned long long int) (unsigned char)202)), (16465954829897365135ULL))), (((/* implicit */unsigned long long int) (signed char)92)))) : (((/* implicit */unsigned long long int) -330805214)));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) * (var_7)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((9918330937814608158ULL), (((/* implicit */unsigned long long int) (unsigned char)202))))) && (((/* implicit */_Bool) (-(16148020786592525118ULL))))))) : (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) * (((/* implicit */int) var_1))));
}
