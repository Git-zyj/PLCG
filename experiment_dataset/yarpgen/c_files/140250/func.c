/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140250
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
    var_13 = ((/* implicit */unsigned char) ((min((max((((/* implicit */long long int) 1277768926)), (var_0))), ((~(var_2))))) != (var_3)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((max((-7993962322304678441LL), (((/* implicit */long long int) arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (7442481145072235811LL)))));
        arr_2 [4U] &= ((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))))) + ((+(((/* implicit */int) ((arr_0 [i_0] [21ULL]) != (var_12)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) var_2)) % ((-(arr_0 [i_0 + 1] [i_0 + 2])))));
        arr_4 [i_0] = min((4353133265071625781ULL), (15910222795973079234ULL));
    }
    var_15 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (9223372036854775807LL))) >> (((var_8) - (4777296949967381692ULL)))));
    var_16 = ((/* implicit */unsigned int) (_Bool)1);
}
