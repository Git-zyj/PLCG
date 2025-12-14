/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119697
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
    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) var_11)) / (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 115909711)) && (((/* implicit */_Bool) 1401906164974685723ULL)))) ? (min((arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 1]), (var_6))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)42)), (8740137327096379869LL))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (((!(var_2))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14849880132481256817ULL)) && (((/* implicit */_Bool) (signed char)54))))) : (((/* implicit */int) var_11)))));
                var_15 = ((/* implicit */short) min((((unsigned long long int) arr_3 [i_0 - 3] [i_1] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_7)))))))));
            }
        } 
    } 
}
