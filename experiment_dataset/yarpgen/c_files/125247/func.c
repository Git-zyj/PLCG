/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125247
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
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2954074271186510051LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)51231))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))) : (arr_4 [i_1])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-((+((+(((/* implicit */int) (signed char)33))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_11))))))));
    var_16 = ((/* implicit */short) (-((-((+(var_12)))))));
}
