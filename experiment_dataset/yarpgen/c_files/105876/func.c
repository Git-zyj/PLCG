/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105876
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
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12040))) * (0ULL)));
    var_15 = var_12;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_2] [11ULL])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_2])))))) : (((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (unsigned char)8)) : (var_5)))));
                    arr_11 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)16);
                    var_16 = ((/* implicit */unsigned long long int) var_7);
                    var_17 -= ((/* implicit */unsigned int) (unsigned char)28);
                    var_18 = ((/* implicit */signed char) (short)7998);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))));
}
