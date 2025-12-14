/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130379
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_0))));
    var_14 *= var_6;
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 16336306730033429099ULL)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_9))))))), (var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((16336306730033429099ULL), (((/* implicit */unsigned long long int) (unsigned char)52))))) ? (max((max((arr_8 [11] [(short)7]), (((/* implicit */unsigned long long int) (unsigned char)39)))), (arr_3 [i_0 + 2]))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 - 1]))));
                    arr_9 [i_1] [6LL] [i_2] = ((((/* implicit */_Bool) max(((short)-4147), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)76)));
                    var_17 *= min(((+(((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))));
                }
            } 
        } 
    } 
}
