/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174235
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
    var_12 = ((/* implicit */int) var_1);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 0U)))))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_9))) && (((/* implicit */_Bool) 1184999171))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_14 = ((/* implicit */unsigned int) ((((var_5) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_6)) : (var_5)));
    var_15 = -203337935;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [(unsigned char)14] [i_1] = ((/* implicit */_Bool) arr_3 [i_0]);
                arr_8 [(unsigned char)24] = ((/* implicit */signed char) -1134747749);
                arr_9 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) (signed char)-10)) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [15U])) : (1134747768)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_0])));
            }
        } 
    } 
}
