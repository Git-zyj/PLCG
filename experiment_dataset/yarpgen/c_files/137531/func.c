/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137531
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))))) ? (((((/* implicit */_Bool) var_1)) ? (max((2147483647), (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4))))))) : (var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) max((var_6), ((unsigned short)30195)))) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_4 [i_1] [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_0]))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])), (-357991379)))))), (((/* implicit */unsigned int) ((signed char) var_8))))))));
                var_12 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)17])) : (var_5)))))), (((arr_5 [i_1]) & (arr_5 [i_1])))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6796779278112603749ULL)) || (((/* implicit */_Bool) (unsigned short)35329))));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((var_2), (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)35340))))))) <= (((((((/* implicit */_Bool) (unsigned short)65517)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14593))))) / (var_7)))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)113)), (var_0)))) << (((((((/* implicit */_Bool) 224397645)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) - (44)))))) ? (((/* implicit */int) var_4)) : (671506661))))));
}
