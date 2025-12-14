/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177695
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
    var_14 |= ((/* implicit */int) 2913265956850220772LL);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)-4876)) : (((((/* implicit */_Bool) var_0)) ? (503130022) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (var_2) : (((/* implicit */unsigned long long int) 2865136756U))))))))) : (var_9));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (((((/* implicit */unsigned long long int) (~(var_11)))) & (var_4))) : (var_4))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [(signed char)11] [i_2] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4879))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) min((907145994), (((/* implicit */int) (unsigned char)115))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)125))))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) arr_5 [10] [i_1] [i_0])) : (var_12))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) -1277259352);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)4876))))))))) : (var_7)));
}
