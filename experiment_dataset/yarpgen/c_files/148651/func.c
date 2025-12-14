/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148651
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
    var_11 = ((/* implicit */signed char) max((var_11), (var_1)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) max((((signed char) (signed char)127)), (max((var_8), (var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)76))))))));
                    var_12 *= ((/* implicit */unsigned char) max((arr_7 [i_2] [i_1] [i_2] [i_1]), (((signed char) ((((/* implicit */_Bool) (unsigned char)200)) && (((/* implicit */_Bool) var_2)))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4)))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [(unsigned char)5] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) min((var_1), (arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
}
