/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187748
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
    var_12 -= var_3;
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) != (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)224)), ((short)-31579)))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36782))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_1])) ? (((/* implicit */int) (unsigned short)28754)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) ((((/* implicit */int) (unsigned char)127)) << (((((/* implicit */int) var_10)) - (225)))))))))));
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((unsigned int) arr_4 [i_0] [3U] [(unsigned char)2])) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))));
                var_16 = ((/* implicit */unsigned char) var_6);
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5491142707994628823LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32779)))))))) : (((((/* implicit */_Bool) (-(3774533922U)))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
