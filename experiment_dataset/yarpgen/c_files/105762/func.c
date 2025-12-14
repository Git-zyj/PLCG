/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105762
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
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)-14667)) | ((-2147483647 - 1))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)24576)))) : (((/* implicit */int) ((unsigned short) (short)11957)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((long long int) arr_1 [i_0 - 4] [i_0]);
        arr_4 [i_0] = ((((((/* implicit */_Bool) 1662460981)) ? (((/* implicit */int) arr_0 [i_0 - 4] [(signed char)13])) : (((/* implicit */int) var_2)))) & (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */short) var_6);
        arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        var_14 = (-((-(((/* implicit */int) (short)11957)))));
        arr_14 [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11960)) ? (((/* implicit */unsigned long long int) -1662460980)) : (8125257132669358716ULL)));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2456236335U)) ? (5051550353518924311ULL) : (((/* implicit */unsigned long long int) 3502407809U))));
    }
}
