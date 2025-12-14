/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184872
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
    var_10 = ((/* implicit */short) max((((/* implicit */int) (((~(33553408U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_9)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) var_1);
                    var_11 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [20LL] [i_2]))) : (((/* implicit */int) arr_1 [i_1] [i_0])))));
                    var_12 += ((/* implicit */long long int) (~(((/* implicit */int) max((var_4), (((/* implicit */short) var_6)))))));
                }
            } 
        } 
    } 
    var_13 = var_5;
    var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_7))))), (var_9))), (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) ((short) var_4)))))));
}
