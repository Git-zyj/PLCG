/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106145
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_1))))));
        var_15 = ((/* implicit */int) arr_3 [i_1] [i_1]);
        arr_6 [i_1] = (+(arr_4 [i_1] [i_1]));
    }
    for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
    {
        arr_9 [2U] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [4U])) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-100)))))))) ? (((((arr_4 [i_2 - 2] [i_2 - 3]) + (9223372036854775807LL))) << (((((arr_4 [i_2 - 1] [i_2 + 1]) + (5776717967070159538LL))) - (30LL))))) : (((arr_4 [i_2 - 2] [i_2 - 1]) | (((/* implicit */long long int) var_0))))));
        var_16 = ((/* implicit */int) (-(11765203840200513501ULL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_17 = (+(arr_11 [i_3]));
        var_18 = ((/* implicit */short) ((((/* implicit */int) (short)28644)) > (((/* implicit */int) (signed char)-100))));
    }
    var_19 = ((/* implicit */int) ((((var_5) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -961572319)) ? (3560841124U) : (((/* implicit */unsigned int) 67100672))))))) ? (((((var_5) + (((/* implicit */unsigned long long int) var_12)))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) ^ (var_2)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) != (var_2))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5)))))));
}
