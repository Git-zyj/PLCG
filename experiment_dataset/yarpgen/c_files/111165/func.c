/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111165
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */signed char) (+((+(arr_0 [i_0 - 1])))));
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (247387742U) : (arr_3 [i_1] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_0 - 1])))) : ((+(var_7))))) : (((/* implicit */long long int) (~(((arr_3 [(_Bool)1] [i_0 - 1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((1014653885452901188LL), (((/* implicit */long long int) max((4047579553U), (var_11))))));
                arr_7 [i_0] [(short)8] [i_1] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26543)) ? (((/* implicit */int) (short)28067)) : (((/* implicit */int) (unsigned char)229))))), (((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5670)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (short)-27162))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) (unsigned char)197)))))));
}
