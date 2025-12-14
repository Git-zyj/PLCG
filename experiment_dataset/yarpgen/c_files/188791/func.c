/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188791
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
    var_13 = ((/* implicit */_Bool) ((((((-117384515) != (var_5))) ? (-3860817641852441299LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (+(max(((-(((/* implicit */int) var_11)))), ((-(((/* implicit */int) arr_0 [i_0]))))))));
        var_15 |= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [15] [i_0]))), (((/* implicit */unsigned int) var_3)))), (2036410757U)));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (9432177454067324838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -2059366184)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_17 -= max((((/* implicit */unsigned long long int) (~(max((arr_7 [i_3] [i_3] [i_0] [i_3]), (((/* implicit */unsigned int) (short)32767))))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (var_0))));
                        var_18 = ((/* implicit */_Bool) arr_5 [i_0] [i_2]);
                        arr_9 [i_2] [i_1] = ((/* implicit */int) (~(var_7)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3275030789740029881LL)) ? (10309012960841831282ULL) : (((/* implicit */unsigned long long int) 2036410757U))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4] [(_Bool)1])) ? (arr_7 [i_4] [0LL] [0LL] [i_4]) : (arr_1 [i_4] [i_4]))))));
        var_21 |= ((_Bool) 2258556522U);
    }
    var_22 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-15142)) || (((/* implicit */_Bool) 2036410741U)))))));
}
