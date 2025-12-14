/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18167
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
    var_17 ^= ((/* implicit */unsigned short) var_13);
    var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 12025831062829506767ULL)) && (var_6))) ? (var_8) : (((((var_14) + (2147483647))) >> (((var_12) - (766105490U)))))))), (var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = (i_0 % 2 == 0) ? (((/* implicit */short) (~((((((+(arr_4 [i_0] [i_1] [13ULL]))) + (2147483647))) >> ((((~(arr_3 [i_0] [i_0]))) - (222995168U)))))))) : (((/* implicit */short) (~((((((+(arr_4 [i_0] [i_1] [13ULL]))) + (2147483647))) >> ((((((~(arr_3 [i_0] [i_0]))) - (222995168U))) - (368902019U))))))));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)252))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min(((-(var_5))), ((~(((/* implicit */int) var_15))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) var_13)))))));
}
