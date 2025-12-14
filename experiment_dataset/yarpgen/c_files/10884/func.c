/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10884
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
    var_20 += ((/* implicit */long long int) 1935288244519972629ULL);
    var_21 *= var_14;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] = (-(((((/* implicit */_Bool) var_12)) ? (8651188877405897458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((-(arr_1 [i_0] [i_0 - 1]))) : (((/* implicit */long long int) (~(arr_4 [i_0])))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 0LL))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24703))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3136577340U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)24703))))) : (1597040245844098804ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_9))) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(signed char)21])) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)29900))) : (arr_2 [11ULL])));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U)))))));
}
