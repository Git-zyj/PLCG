/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186354
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [19ULL] [19ULL] = ((/* implicit */_Bool) arr_5 [i_0]);
                    var_16 &= ((unsigned short) ((arr_6 [i_0] [i_1] [i_2]) ? ((~(((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(short)8] [i_0])) == (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12617589299072130908ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (12617589299072130878ULL)))));
}
