/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14854
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) var_3);
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0 - 1] [(unsigned char)3])), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) var_4)))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_3))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) var_1);
        var_14 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_1)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_9)))) : ((~((~(((/* implicit */int) arr_11 [i_3]))))))));
        arr_13 [i_3] [(unsigned short)4] = ((/* implicit */unsigned char) var_8);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)161))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_7))))) : (var_2)));
        arr_14 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_11 [i_3])))))));
    }
}
