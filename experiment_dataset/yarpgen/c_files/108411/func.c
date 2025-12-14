/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108411
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
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    var_20 = ((/* implicit */_Bool) (unsigned char)12);
    var_21 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) max((((/* implicit */short) var_14)), ((short)4095)))) : (((((/* implicit */_Bool) (short)4104)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)4075)))))) & (((/* implicit */int) ((var_8) >= (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (short)-4097)) : (((/* implicit */int) (short)-4068)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4062)))))))), (var_10)));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)4046)) ? ((~(((/* implicit */int) (short)-4078)))) : (((/* implicit */int) arr_0 [i_0])))) << ((((((((-2147483647 - 1)) - (-2147483646))) + (26))) - (14)))));
                arr_7 [(_Bool)1] [(_Bool)1] &= (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [(unsigned char)15])), ((unsigned short)35431)))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [20LL]))))) : (((/* implicit */int) ((_Bool) arr_4 [i_1] [(unsigned char)5] [(short)0])))))))))));
            }
        } 
    } 
}
