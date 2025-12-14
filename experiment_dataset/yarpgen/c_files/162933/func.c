/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162933
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((arr_0 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])) <= (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)73)) ? (min((((long long int) arr_1 [i_1])), (((/* implicit */long long int) min((4294967295U), (17U)))))) : (((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_4)))))));
                arr_8 [i_1] [i_1] [6LL] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-88)) ? (-1) : (((/* implicit */int) ((unsigned char) 18446744073709551607ULL))))), (((/* implicit */int) (unsigned char)127))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_8);
}
