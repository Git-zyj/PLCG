/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143062
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
    var_18 &= ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((13778415014505386644ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_10))))))));
    var_19 = min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))) - (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_4)) - (10508)))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (1901115007)))) >> (((((/* implicit */int) ((unsigned char) var_14))) - (40)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) var_17))))), (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned char)112))))))) ? (((arr_3 [i_0]) ^ (arr_3 [i_0]))) : (((((-1901115023) - (((/* implicit */int) arr_2 [i_1])))) - (((arr_3 [i_0]) ^ (-1901115015)))))));
                    var_20 = ((/* implicit */unsigned long long int) var_12);
                    arr_8 [i_0] [i_0] [8U] = ((/* implicit */unsigned long long int) ((int) ((long long int) -3707332492495262941LL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) min((0), (1901115008)))) : (var_17))), (((/* implicit */long long int) min((-2140457433), (2140457433))))));
}
