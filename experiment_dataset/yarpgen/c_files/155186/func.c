/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155186
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) 2165712936U)) : (4570140243901166940ULL))) * (((/* implicit */unsigned long long int) (-(var_2))))));
                var_13 = ((/* implicit */long long int) max((var_13), (((long long int) min((var_8), (((/* implicit */int) var_5)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(var_9))), (var_2)))) ? ((~(((/* implicit */int) ((_Bool) var_8))))) : (((/* implicit */int) ((signed char) var_8)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((((-(var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                arr_11 [i_2] [i_2] [11] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(var_8)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (var_1)))));
                arr_12 [i_3] = ((/* implicit */unsigned long long int) ((int) (+((+(var_1))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) ((unsigned short) var_11)))))));
}
