/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118635
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
    var_20 *= ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 *= ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_17))))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (short)-31155)) != (((/* implicit */int) (signed char)-97))))), ((-((-(((/* implicit */int) var_2))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned short) var_8))))) ? (arr_4 [i_1]) : (arr_2 [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_7)))) : (max((arr_2 [i_1] [i_1]), (var_4))))) : (((((/* implicit */int) (unsigned short)16739)) + (((/* implicit */int) (short)-31137))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-31137)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (unsigned short)17169))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned short) (~(arr_2 [i_2 + 1] [i_2 + 1])));
        var_26 = ((/* implicit */unsigned short) ((signed char) arr_6 [i_2 - 2]));
        var_27 &= ((unsigned char) arr_5 [i_2 - 1]);
        var_28 = var_19;
    }
}
