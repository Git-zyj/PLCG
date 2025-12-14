/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141917
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
    var_12 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */signed char) arr_0 [i_0]);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0 + 1] [i_1 - 1])))) : (((arr_1 [i_0 + 1] [i_1 + 1]) >> (((((/* implicit */int) var_9)) - (25953)))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [10LL])) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0 + 2] [(short)8])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) > (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [(signed char)21]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))) : (8722225886976923157LL))))))));
                    arr_6 [i_0 + 1] [10] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 2])))), (((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 2]))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [5LL] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 2]))) : (((arr_1 [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_2])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (arr_1 [i_0] [i_0 - 1])))))));
                }
            } 
        } 
    } 
}
