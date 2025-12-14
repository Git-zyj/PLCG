/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155749
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */int) (-(((unsigned long long int) 1711387777))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (18446744073709551615ULL)))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                    }
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [6ULL] [i_1] [6ULL] [i_0]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_12);
    var_23 = ((/* implicit */unsigned short) var_14);
    var_24 = var_7;
}
