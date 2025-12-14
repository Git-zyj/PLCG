/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123694
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)4)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (signed char)122)))) : (((/* implicit */int) (signed char)6))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((long long int) max((var_3), (((/* implicit */int) (signed char)-123))))) > (((long long int) ((17105682040160282484ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16168))))))));
}
