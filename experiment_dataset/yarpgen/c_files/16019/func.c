/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16019
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
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24721))))) ? ((~(((/* implicit */int) (signed char)119)))) : (((/* implicit */int) var_1))))) / (((((((/* implicit */_Bool) var_4)) ? (-5286250090857625014LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_11))) >> ((((+(((/* implicit */int) (unsigned short)25682)))) - (25628)))))) ? (3459857206404230031LL) : (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99))))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) (+((+(arr_5 [i_1] [7LL] [(signed char)2])))));
        }
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)20))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_4 [i_1] [i_1] [i_1])))));
    }
}
