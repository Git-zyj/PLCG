/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127642
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
    var_11 = ((/* implicit */signed char) var_3);
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_2)) / (16733444141076371434ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) % (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [0ULL])) ? (var_4) : (arr_3 [i_1 - 1] [i_1] [i_2]))))));
                    var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (arr_1 [i_0]))))));
                }
            } 
        } 
    } 
}
