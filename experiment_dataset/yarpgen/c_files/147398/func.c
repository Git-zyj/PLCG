/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147398
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) var_17))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((short) var_16);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))), ((((-(((/* implicit */int) arr_3 [(short)3])))) % (((/* implicit */int) (short)-11206))))));
            var_22 += ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_0), (arr_8 [i_0] [i_0] [(short)2])))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_0])) ? (((/* implicit */int) max((var_14), (var_4)))) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_0]))))));
        }
        var_23 -= ((short) max((var_6), (arr_2 [i_0] [i_0])));
        arr_11 [i_0] = var_1;
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)5474)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-16384)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_25 = var_8;
        var_26 += ((/* implicit */short) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_12 [(short)6]))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-422))))) ? ((~(((/* implicit */int) arr_13 [i_3] [i_3])))) : (((/* implicit */int) arr_13 [(short)4] [i_3]))));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((((((/* implicit */_Bool) (short)-12930)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) max((var_6), ((short)(-32767 - 1))))))))));
        var_29 = ((/* implicit */short) (~(((/* implicit */int) (short)24317))));
        var_30 = var_14;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_31 = (short)(-32767 - 1);
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) var_13)))))))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)192)))))))));
    }
}
