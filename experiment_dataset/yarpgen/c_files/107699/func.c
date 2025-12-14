/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107699
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
    var_19 &= ((/* implicit */signed char) ((var_1) ^ (((/* implicit */long long int) var_8))));
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) -1709921879515675070LL);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((~(arr_0 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))))))));
        arr_4 [(_Bool)1] |= ((/* implicit */short) ((max((((((/* implicit */_Bool) 1709921879515675069LL)) ? (((/* implicit */unsigned long long int) 1156028483012517872LL)) : (10102142862876716677ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0 - 1] [i_0])))))) >> (((((((((/* implicit */int) (short)-26325)) >= (1939253306))) ? ((((_Bool)1) ? (1709921879515675089LL) : (-1709921879515675085LL))) : (((/* implicit */long long int) -1043802386)))) + (1043802407LL)))));
        var_22 = ((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)61))));
    }
}
