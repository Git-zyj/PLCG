/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136678
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [(_Bool)1] [9LL])))))))) > (((((((/* implicit */_Bool) var_12)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_0)))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) arr_3 [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) var_2)), (var_6))))) & (((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (signed char)127)) : (-2147483640)))) | (var_11)))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [0ULL] [i_1]))) >= (var_11)))), (((unsigned short) var_9))))) >> (((((/* implicit */int) (signed char)-118)) + (118)))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */_Bool) var_4);
    var_15 &= ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned short) var_11);
}
