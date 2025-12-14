/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126070
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)65519)), (6466794354870753697LL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25316)) ? (var_9) : (((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1])), (604983144U))), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) max((min((var_4), ((unsigned short)36136))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)93))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (+(var_9)));
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)25316)))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_1))))))));
}
