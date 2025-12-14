/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148926
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
    var_17 &= ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_3 [i_2 + 4])) : (((/* implicit */int) arr_3 [2ULL])))))))), ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [(signed char)11])))))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) > (var_8))) || (((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) var_13))))))) * ((~((-(var_6)))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1 + 1] [i_1 + 3] [i_2])), (var_9))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))))) >> (((((((/* implicit */_Bool) max((var_10), (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) max((var_5), (-4627279752840600997LL)))))) - (2631174734793277985ULL)))));
    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))) / (max((((/* implicit */unsigned long long int) var_5)), (var_0)))))));
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(7746461095401803083ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (var_12))))))));
}
