/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155388
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_2]);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_0 [i_0 - 1] [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_1 + 1]) && (((/* implicit */_Bool) arr_4 [i_0])))))) : (arr_3 [i_0] [i_0])));
                    var_21 = ((/* implicit */long long int) ((min(((~(-1122122719021649983LL))), (((/* implicit */long long int) (+(var_15)))))) >= (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
                    var_22 |= ((/* implicit */int) var_6);
                    var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_2]))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (arr_3 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31768)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_19)))))))));
}
