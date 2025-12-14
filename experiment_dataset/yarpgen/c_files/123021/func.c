/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123021
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
    var_20 = min((((((/* implicit */_Bool) (unsigned short)65529)) ? ((+(var_4))) : (max((-1356210633), (((/* implicit */int) var_7)))))), (((/* implicit */int) (signed char)79)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
                var_21 += ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)-65)) + (((/* implicit */int) ((unsigned char) (signed char)-92)))))));
            }
        } 
    } 
    var_22 = var_16;
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 41958926)) & (3992919795345143929LL)));
    var_24 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */int) (unsigned short)9498)) > (((/* implicit */int) (unsigned char)8)))), (var_14))));
}
