/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114635
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) max((arr_0 [i_0]), (var_8)))))) > ((((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)980)))))))));
        var_19 = ((/* implicit */signed char) max((max((min((var_7), (((/* implicit */unsigned int) var_10)))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (var_5)));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)92)), (max((var_2), (((/* implicit */int) var_4))))))), (var_17)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) min((var_1), (arr_4 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2])) < (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1]))))));
            var_22 *= ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_16)))))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_5 [i_1])))) >> (((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_6))))) - (24450))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_2])))))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_8))));
        }
        var_24 = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) 0))));
        arr_8 [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)0)), (var_17)));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) : (var_5)))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_17)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
}
