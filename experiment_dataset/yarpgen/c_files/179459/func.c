/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179459
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
    var_10 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1017529912U)) ? (3277437384U) : (3277437388U))))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (1017529912U)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (var_9))))))) - (2750982630074900537ULL)))));
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_6)))) / (arr_1 [i_0 - 2] [i_0]))) / (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    var_13 += ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_0] [1LL] [i_0 + 2])) < (arr_1 [i_0] [7]))), (((((/* implicit */int) (signed char)-47)) != (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)24)), (arr_1 [i_0] [i_0 - 2])))) : (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)18))))));
    var_15 = ((/* implicit */unsigned long long int) (~((~(var_9)))));
}
