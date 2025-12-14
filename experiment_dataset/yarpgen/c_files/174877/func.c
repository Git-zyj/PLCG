/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174877
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)243)), ((unsigned short)29020))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_6)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) var_8)))))));
        arr_7 [i_1] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((~(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) arr_5 [i_2]);
        var_16 &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))))));
    }
    var_17 = ((/* implicit */unsigned char) max((var_4), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37306))) | (1125633466359210847ULL))), (max((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
    var_18 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_13 [i_3] [(short)2] [i_4]))))) ? (((/* implicit */int) arr_14 [i_4])) : ((~(((/* implicit */int) (unsigned char)199)))))))))));
                var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) (+(var_3)))) - (max((var_12), (var_6))))));
                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)114))));
            }
        } 
    } 
}
