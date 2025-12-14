/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148531
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((var_6) - (((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((min((var_6), (((/* implicit */int) var_15)))) == (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_6))), (((/* implicit */int) var_9))))));
    var_19 ^= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */short) var_14)), (var_9)))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_7)))))), (var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-8320)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 2])))))));
                var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((-3957471192814047852LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)26301))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)134)), (var_11)))))) : (var_0)));
}
