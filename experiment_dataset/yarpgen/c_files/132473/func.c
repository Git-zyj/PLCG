/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132473
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -6578184538235812401LL)), (16715614885558579341ULL))))))), (1731129188150972274ULL)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 2409964832U)) : (-6578184538235812401LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((1731129188150972274ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */unsigned int) -1958247249)) | (var_16))))))));
        var_18 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (short)-2396))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (16715614885558579343ULL) : (var_1)))))))) + ((-(((((/* implicit */_Bool) -3428910248294940158LL)) ? (9013521522131751362LL) : (((/* implicit */long long int) 2567580678U))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))))) ? (6578184538235812411LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))) <= (((((/* implicit */_Bool) 16715614885558579341ULL)) ? (4225284757U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))))))));
    }
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_16)), (min((min((var_7), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) var_14))))));
}
