/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12004
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
    var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)54)))) ? (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((int) (unsigned char)201))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) : (var_5)))) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) var_15)))) + (2147483647))) >> ((((~((~(-1412642672))))) + (1412642691)))));
    var_21 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(var_3)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_9))))), (1526660904U)))), (((((/* implicit */_Bool) (unsigned char)205)) ? (arr_2 [i_1] [i_1 + 4]) : (arr_2 [i_1] [i_1 - 1])))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((arr_5 [i_1 + 2] [i_1 + 2]) | (arr_2 [i_1 + 4] [i_1 + 4]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)2)))))));
                }
            } 
        } 
    } 
}
