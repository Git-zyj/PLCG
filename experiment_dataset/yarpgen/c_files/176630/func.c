/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176630
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
    var_17 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) ((short) arr_1 [i_0]))))) + (2147483647))) >> ((((+(((/* implicit */int) arr_0 [i_0])))) - (8483)))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_0 [i_1 + 2])))));
                    arr_9 [i_0] [10] [10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((_Bool) var_4)))));
                }
            } 
        } 
        var_19 += ((/* implicit */unsigned char) var_11);
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) (short)32765)), (((/* implicit */long long int) (signed char)-118))))) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))));
}
