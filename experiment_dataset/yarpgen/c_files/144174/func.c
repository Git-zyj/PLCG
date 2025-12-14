/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144174
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) min((var_17), (var_6)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (short)32767))))))));
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (unsigned short)24108)) : (((/* implicit */int) (short)-32767))))));
        var_22 = ((/* implicit */unsigned long long int) ((16141705096814528488ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? ((-(((/* implicit */int) (unsigned char)48)))) : (839757935))))));
        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58978)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24668))) : (arr_0 [i_0])))) ? (((long long int) 3871400924U)) : (((var_15) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (2521735803876960418ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (15665558345199416681ULL)))))));
        var_24 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_25 = ((/* implicit */unsigned short) (unsigned char)48);
    var_26 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))) != (2781185728510134934ULL)))));
    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_6)) : (7718218286704314001ULL))))) ? (((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16012))))), (((12867746291906773869ULL) * (((/* implicit */unsigned long long int) var_15))))))));
}
