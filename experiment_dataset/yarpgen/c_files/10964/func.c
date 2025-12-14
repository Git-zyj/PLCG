/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10964
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
    var_16 = ((/* implicit */unsigned char) (+(var_12)));
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) << (((((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_0) + (6502393872198277704LL))))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6)))))) - (134217705)))));
    var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) (~((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) -2147483639))))))) ? (((((/* implicit */_Bool) (+(3449717000723894931LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11835))))) : (((((/* implicit */_Bool) 419150075U)) ? (((/* implicit */unsigned long long int) -5)) : (16344640056633404539ULL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4026531840U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4068612192U)) ? (((/* implicit */int) var_15)) : (var_12)))) : (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((255195582812261036LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_2 [i_0] [i_0 + 3])) + (var_12)))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)960)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0])) ? (-660776600) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_1 [i_0]))))));
    }
}
