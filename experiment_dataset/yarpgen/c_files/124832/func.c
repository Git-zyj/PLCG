/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124832
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) min((var_6), ((unsigned char)227)))) >> (((((/* implicit */int) var_3)) - (22202))))) : (min((max((var_9), (((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) min(((unsigned char)223), (((/* implicit */unsigned char) var_14)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) var_14))))) ? (((/* implicit */int) min((arr_0 [i_1 - 4] [i_1 + 1]), (arr_0 [i_1 - 3] [i_1 - 3])))) : (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_9) : (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) max((((/* implicit */short) var_13)), (arr_4 [i_1] [i_0]))))))));
                var_20 = arr_4 [i_0] [i_1 - 1];
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0])) + (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)164))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (short)-2992)) : (((/* implicit */int) (short)2992))))))));
                var_21 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) >= (((/* implicit */int) arr_4 [i_0] [i_1 - 4]))))) | (((/* implicit */int) arr_4 [i_0] [i_1 - 3]))));
                var_22 = arr_0 [i_0] [i_1];
            }
        } 
    } 
}
