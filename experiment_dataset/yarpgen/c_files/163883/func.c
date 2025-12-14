/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163883
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
    var_14 += (short)-32749;
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-7), ((short)5853))))) : (var_3)))) ? ((~(2280386414U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((max((((/* implicit */unsigned int) arr_3 [i_1 + 2] [(short)8])), (var_11))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_1 - 3] [i_1] [i_1]))));
            arr_6 [2U] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [3U])) ? ((-(arr_0 [i_1 + 2]))) : (((((/* implicit */_Bool) var_13)) ? (1489395834U) : (1714846707U))))), (((unsigned int) (short)-14653))));
        }
        arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 1714846729U))) ? ((+(3579539569U))) : (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_4 [i_0] [i_0])));
        arr_8 [i_0] [i_0] = ((((unsigned int) arr_4 [i_0] [i_0])) | ((~(((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [15U]) : (arr_2 [i_0] [(short)17]))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (var_2)));
        arr_9 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1748078649U)) ? (2783173533U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10030)))))));
    }
}
