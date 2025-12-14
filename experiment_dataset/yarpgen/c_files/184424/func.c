/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184424
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_6))));
    var_16 = var_10;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (536870911U)))) && (((/* implicit */_Bool) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((unsigned char) 4294967286U))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967263U)) ? (((/* implicit */int) arr_1 [i_0] [(short)4])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (max((4294967286U), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65523)) << (((((/* implicit */int) (short)32750)) - (32742)))))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))), (var_1)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_7);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (~(((arr_7 [i_1] [i_1 - 1]) >> (13U)))));
            arr_8 [i_1] = arr_1 [i_1] [i_1];
        }
    }
    var_21 = var_7;
    var_22 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */unsigned long long int) var_0))));
}
