/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18166
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
    var_14 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)10742)) ? (((/* implicit */int) (short)10738)) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) (_Bool)1))))));
    var_15 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158)))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-10743)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2924187815U)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (706321485909449621LL)))));
                var_18 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_8))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_13);
}
