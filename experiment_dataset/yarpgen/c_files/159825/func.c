/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159825
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)27432)) : (((/* implicit */int) (short)-19200))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_1 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)29956))))) ? ((~(((/* implicit */int) arr_0 [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0])))))), (((/* implicit */int) ((short) var_5)))));
            var_11 = ((/* implicit */short) (-(((/* implicit */int) (short)-19201))));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((/* implicit */int) var_6)))))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((short) (short)-835)))))));
            var_13 *= ((/* implicit */short) ((((((/* implicit */_Bool) (short)842)) ? (((/* implicit */int) (short)-27999)) : (((/* implicit */int) (short)0)))) / (((/* implicit */int) ((((/* implicit */_Bool) (short)834)) || (((/* implicit */_Bool) var_3)))))));
        }
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_14 += ((/* implicit */short) (((+(((/* implicit */int) arr_10 [i_3] [i_3])))) >> (((((/* implicit */int) ((short) max(((short)-5507), (var_1))))) - (2546)))));
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)30546)) : (((/* implicit */int) (short)-27424))));
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((~((~(((/* implicit */int) (short)-19200)))))) - ((~(((/* implicit */int) max((arr_10 [i_4] [i_4]), (arr_6 [(short)7] [(short)4])))))))))));
        var_16 -= ((/* implicit */short) (-((-(((/* implicit */int) arr_1 [i_4 + 1] [i_4 + 1]))))));
    }
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27439)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-15859)))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) var_8))));
}
