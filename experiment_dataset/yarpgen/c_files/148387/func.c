/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148387
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((+(max((arr_1 [i_0]), (((/* implicit */long long int) var_1)))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65534)), (200019566U))))));
        arr_4 [(short)10] = arr_2 [i_0] [i_0];
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned short) var_10)))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) (unsigned char)101)) | (arr_0 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)84))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [(short)10] [i_1] = ((/* implicit */unsigned short) (((~(min((((/* implicit */unsigned long long int) 2145386496U)), (7921630256952315474ULL))))) + (((/* implicit */unsigned long long int) (~(arr_6 [i_1]))))));
        var_15 *= ((/* implicit */short) arr_6 [i_1]);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)243)) + (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_5 [i_1] [15]), (((/* implicit */unsigned short) var_7))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158)))))))) : ((+(-1LL))))))));
    }
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
