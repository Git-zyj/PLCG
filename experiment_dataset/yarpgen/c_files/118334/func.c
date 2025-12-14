/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118334
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (2147483647)))) : (var_12)))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) || (((/* implicit */_Bool) (-(-4490990334024068202LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(var_16)));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [9ULL] [9ULL]))) & (((min((arr_0 [i_1]), (((/* implicit */long long int) var_14)))) + (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [(signed char)8] [(signed char)8]), (arr_4 [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))))), (var_1)));
}
