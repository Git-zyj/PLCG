/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111389
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1]);
        arr_3 [i_0] [9] = ((/* implicit */_Bool) (-(var_7)));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((long long int) var_2));
        arr_7 [(unsigned short)1] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_4));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_9 [11ULL] [11ULL]) : (arr_8 [10ULL])))))));
        var_14 = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned long long int) (unsigned short)7690)), (arr_8 [i_2]))), (var_11))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_2])))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (arr_8 [i_2])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [13ULL])))));
    }
    var_15 ^= (-(var_11));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-13625), (((/* implicit */short) (_Bool)1)))))))))));
    var_17 = ((/* implicit */_Bool) var_7);
}
