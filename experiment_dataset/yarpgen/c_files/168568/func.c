/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168568
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
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >> (((/* implicit */int) min((((_Bool) var_9)), (((_Bool) (unsigned short)17038)))))));
    var_19 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((unsigned char) (unsigned char)201)))))));
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) max((var_13), (var_5)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_16)))))), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)201))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(var_1))))));
                    arr_7 [i_1] [i_2] = (short)-31571;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 2417156603U))))))));
}
