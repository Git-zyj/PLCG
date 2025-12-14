/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128299
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
    var_13 = ((((unsigned int) (~(var_7)))) - (((/* implicit */unsigned int) 338749533)));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)152)), ((unsigned short)56)))) ? (min((max((((/* implicit */long long int) (unsigned short)13748)), (8198469288632273440LL))), (((/* implicit */long long int) ((var_1) == (4294967295U)))))) : (((long long int) (unsigned char)152))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_8);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1] [i_2])), (arr_3 [i_0]))))))) - ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65480))) : (var_1)))))));
                }
            } 
        } 
    } 
}
