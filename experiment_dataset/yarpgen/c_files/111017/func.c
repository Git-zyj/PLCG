/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111017
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((((/* implicit */long long int) ((unsigned int) var_8))) ^ (var_13))), (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)7343)), (max((arr_2 [i_0 - 3]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) > (((/* implicit */int) var_2)))))))));
                    var_16 ^= ((((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_0 - 2] [i_0] [i_0])))) << (((((/* implicit */int) arr_0 [i_0] [i_2])) - (25))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_7)))), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) min(((short)4848), (((/* implicit */short) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((+(var_3))))) : (((/* implicit */unsigned int) ((((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)29182)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
}
