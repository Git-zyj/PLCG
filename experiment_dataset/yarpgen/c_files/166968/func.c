/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166968
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) < (((/* implicit */int) var_3))));
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2223784260U))) > (((/* implicit */unsigned int) max((arr_4 [i_0] [i_0]), (var_7))))));
                var_16 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                var_17 = (((!(((/* implicit */_Bool) -8878648787909563850LL)))) ? (-3170502568104036985LL) : (((/* implicit */long long int) ((int) var_4))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_18 = arr_5 [i_2] [i_2];
        arr_8 [i_2] = ((/* implicit */unsigned char) var_12);
        var_19 *= ((/* implicit */unsigned int) var_1);
    }
}
