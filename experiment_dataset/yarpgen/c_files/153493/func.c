/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153493
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
    var_20 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) 0U)), (var_14))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)32768)))), (((/* implicit */unsigned int) (signed char)16)))))));
    var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (16U)))) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) 4294967280U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35184372088832LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967280U)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) min(((short)32), (((/* implicit */short) (signed char)-13)))))))) ? ((~(arr_1 [i_0]))) : (min(((-(20U))), ((+(16U))))))))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)4935)), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (arr_1 [i_0])))) + (((/* implicit */int) arr_0 [i_0]))))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), ((+(((/* implicit */int) arr_0 [i_0]))))));
    }
}
