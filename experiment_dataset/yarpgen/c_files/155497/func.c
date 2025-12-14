/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155497
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
    var_17 = ((/* implicit */signed char) ((unsigned int) var_4));
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (((((((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (min((((/* implicit */int) var_10)), (arr_1 [i_1]))) : ((-(((/* implicit */int) (signed char)15)))))) + (2147483647))) >> (((((/* implicit */int) (short)511)) - (489)))));
                    var_20 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 2621701878472178027LL)))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-16)) && (((/* implicit */_Bool) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) var_4)) : (var_12)))) ? (((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))) : (((((var_7) + (2147483647))) >> (((/* implicit */int) (short)21))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))), (arr_1 [i_0])));
                }
            } 
        } 
    } 
}
