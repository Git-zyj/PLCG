/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150503
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
    var_16 = var_3;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (16169165805069897451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10043))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) ^ (arr_1 [i_0] [i_0 + 3])))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1998371383U)) == (min((8550187711972461121ULL), (((/* implicit */unsigned long long int) -1539176221567964039LL))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -1468075681883267445LL)) ? (72057594035830784ULL) : (((/* implicit */unsigned long long int) 1125899906842616LL))));
        var_19 += ((/* implicit */long long int) var_13);
        arr_3 [(signed char)5] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 3]);
    }
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1468075681883267448LL)) ? (1998371372U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50902)))))) ? (((((/* implicit */_Bool) (unsigned short)25504)) ? (((/* implicit */long long int) 465769417U)) : (-1468075681883267449LL))) : (min((-1468075681883267470LL), (((/* implicit */long long int) var_7)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((3556819491601720592LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
}
