/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172713
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) (short)16546)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((var_17) - (4161088721U))))))))) || (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((signed char) var_18))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)10] [i_0])))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)22718))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)4] [i_0]))) == (var_19))))))));
        var_21 += ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) ^ (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)87)) && (((/* implicit */_Bool) (unsigned char)215)))), (((((/* implicit */int) (short)-29087)) >= (((/* implicit */int) (signed char)69))))))));
        var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-70)), ((unsigned short)0)));
    }
    var_23 = ((/* implicit */signed char) max((max((max((var_10), (((/* implicit */unsigned int) (unsigned char)215)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))) ? (((/* implicit */int) (signed char)35)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)208)))))))));
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (short)-21717);
        arr_6 [i_1] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 1] [i_1 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_16), (var_12))))) : ((+(var_10)))));
    }
}
