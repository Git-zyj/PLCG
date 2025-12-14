/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161106
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
    var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (15652839767996581189ULL))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_12 = ((/* implicit */_Bool) ((((arr_7 [(short)7] [i_1] [(signed char)13] [i_2 + 1]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 2])) ? (arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0] [i_2] [i_0] [i_0]))) + (4631191042421304LL)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)9] [i_2])))))));
                    arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_2);
}
