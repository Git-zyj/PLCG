/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186205
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
    var_20 -= ((/* implicit */long long int) var_0);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(var_11))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))))) ^ ((~(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((-368051577239551690LL), (137438953471LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    arr_9 [i_0] = ((/* implicit */long long int) var_12);
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [(signed char)1])) : (((/* implicit */int) (signed char)21)))) : ((-(((/* implicit */int) arr_7 [(signed char)14] [i_1] [i_1])))))) ^ (((/* implicit */int) max((((/* implicit */signed char) arr_4 [12LL])), ((signed char)-1))))));
                    arr_10 [i_0 + 4] [i_0] [17] [22U] = ((/* implicit */unsigned int) arr_5 [i_2] [i_0] [i_0] [(unsigned char)23]);
                    var_24 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
}
