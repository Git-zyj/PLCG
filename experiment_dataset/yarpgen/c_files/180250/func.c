/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180250
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
    var_18 *= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 1] [i_1])) >= (((/* implicit */int) (unsigned short)25563)))))))), (((((/* implicit */_Bool) var_15)) ? (arr_2 [(_Bool)1] [i_0] [i_0 + 1]) : (arr_2 [(signed char)8] [i_0 + 4] [i_0 + 3])))));
                var_20 += ((/* implicit */int) max(((unsigned short)33454), (((/* implicit */unsigned short) (_Bool)1))));
                var_21 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned short)10615)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1] [i_0 + 4] [i_0 + 4]) : (arr_2 [i_0] [i_0 + 1] [2U]))) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))) ? (min((var_17), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1)))))) : (((/* implicit */int) (signed char)75)));
                var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)12263)), ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((2929487836U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) - (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_15))) ? (max((1908824838), (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-86)))))))));
}
