/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16134
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
    var_15 = ((/* implicit */unsigned int) (~(var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_8)), ((-(arr_1 [(unsigned char)16] [i_0 - 2]))))) == (((/* implicit */int) max((((/* implicit */short) (!(arr_0 [i_0] [i_0])))), ((short)22862))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3260233216003379953LL)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (1125899906842623ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((251830370), (((/* implicit */int) var_7)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (0)))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((arr_3 [i_0]), ((!(((/* implicit */_Bool) -9223372036854775800LL))))));
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_2 [i_0 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_4))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_21 = ((/* implicit */int) ((((arr_6 [i_3] [i_3] [i_3]) + (9223372036854775807LL))) << (((((unsigned int) arr_6 [i_3] [i_3] [i_3])) - (2286310674U)))));
        var_22 = ((/* implicit */int) var_12);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4])))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_4]))));
    }
    var_24 = ((/* implicit */long long int) ((1445764263770200240ULL) ^ (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_1))))))));
    var_25 = ((/* implicit */short) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14))))));
    var_26 = var_4;
}
