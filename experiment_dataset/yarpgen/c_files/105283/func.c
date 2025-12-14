/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105283
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
    var_12 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-41)) >= (((/* implicit */int) (unsigned short)1220))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [(short)7]);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_13 = max((max((((long long int) var_6)), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(((/* implicit */int) var_6))))));
            arr_7 [5LL] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1])) || (((/* implicit */_Bool) (unsigned short)64291))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0]))) : (var_7))) >> (((((/* implicit */int) var_1)) - (78))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */long long int) arr_0 [i_1 + 1])) : (var_5))))));
            var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((arr_1 [i_0 + 3] [i_1]), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (var_4) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64320)))))))));
        }
        for (long long int i_2 = 4; i_2 < 16; i_2 += 2) 
        {
            var_15 *= ((/* implicit */unsigned int) ((((((arr_1 [i_0] [i_2]) < (5610062354441640218LL))) || (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11)))))) ? (arr_8 [i_0] [i_2 + 4]) : (((/* implicit */unsigned long long int) var_11))));
            var_16 = ((/* implicit */long long int) var_1);
            var_17 = (short)13949;
            var_18 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_0 [i_2]))))));
        }
    }
}
