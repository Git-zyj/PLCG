/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186827
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 268435456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max(((-(3242287366U))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (3242287371U)))))));
    var_12 = ((/* implicit */unsigned short) ((short) var_9));
    var_13 &= min((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))), (((4294967287U) << (((var_3) - (3226820576U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3242287392U)))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (var_8))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) (short)-30990);
                arr_5 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) * (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1])))));
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3369186907373442954ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)(-32767 - 1)))));
            }
        } 
    } 
}
