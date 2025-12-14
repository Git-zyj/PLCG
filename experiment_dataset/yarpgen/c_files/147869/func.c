/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147869
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)38513)) >= (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61791)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3749))) : (var_3)))))))) >= (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] [11ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))))));
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 803047140U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (var_0)));
                }
            } 
        } 
        var_12 = ((((/* implicit */_Bool) var_3)) || (var_6));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_5))))));
    }
}
