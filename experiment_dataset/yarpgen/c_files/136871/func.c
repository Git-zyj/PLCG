/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136871
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
    var_19 = ((/* implicit */int) 4294967295U);
    var_20 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) 4294967273U);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8862))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56680)))))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 3U))));
        var_22 = ((/* implicit */signed char) var_2);
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_23 = ((/* implicit */int) var_3);
        var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56667))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8864))))));
        var_25 = ((/* implicit */short) (unsigned short)27816);
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) -670948105);
        arr_9 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)37719)) : (((/* implicit */int) (signed char)110)))) / (((/* implicit */int) max(((unsigned short)60666), (((/* implicit */unsigned short) var_5))))))))));
        var_26 |= ((/* implicit */signed char) var_13);
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_27 = ((/* implicit */int) var_13);
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)27821)))))) : (var_2)));
    }
    var_28 = ((/* implicit */long long int) (unsigned char)248);
}
