/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15909
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_6)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_7)))) && (((/* implicit */_Bool) var_4))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0] [i_0]))))) ? (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 1] [i_0])), (arr_0 [i_1 - 3]))));
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_3 [i_1])), (((unsigned short) arr_1 [i_1])))), (((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_1))))))));
                arr_6 [i_1 + 3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0]))) & (max((((/* implicit */long long int) var_8)), (2147483647LL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (_Bool)1))));
}
