/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135964
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
    var_16 = ((/* implicit */unsigned short) min(((+(var_1))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_12))), (((int) var_12)))))));
    var_17 = (+(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_4)) : (742833105))));
    var_18 = (-(((int) min((var_11), (((/* implicit */long long int) var_0))))));
    var_19 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) var_2)), (var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */_Bool) (-(arr_1 [i_0 + 2] [i_0 - 2])));
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_0] [(signed char)4]))))) ? (((/* implicit */unsigned int) (-(arr_1 [i_0 - 2] [i_0 + 2])))) : (min((((/* implicit */unsigned int) var_2)), (13664355U)))));
            }
        } 
    } 
}
