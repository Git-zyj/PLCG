/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102963
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (0U) : (4294967281U)))) ? (((unsigned int) arr_3 [i_1] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4294967274U)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -2147483642)) : (4294967282U)))), (((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 1]))) ? ((-(((/* implicit */int) (unsigned char)83)))) : (((/* implicit */int) arr_1 [i_1]))));
                arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_14 = min(((unsigned char)134), (((/* implicit */unsigned char) (_Bool)1)));
}
