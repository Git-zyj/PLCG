/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170288
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (signed char)-119)), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_0 [11U] [i_1])))))));
                    arr_6 [6LL] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)65520)), (max((((/* implicit */long long int) (signed char)-8)), ((-(var_1)))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */long long int) ((_Bool) (signed char)-7));
}
