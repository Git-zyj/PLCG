/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177306
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-21191)) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-21856)) : (((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */short) ((unsigned short) min((var_9), (((short) (short)2956)))));
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-18722))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)2952))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) 1204877952U)) ? (345767574U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6350))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_2 [i_0] [i_0] [i_1]))));
        }
        for (short i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            var_19 &= max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [0U])), (var_0)))) ? (arr_7 [6U] [(unsigned short)10]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22320))))))), (((/* implicit */unsigned int) arr_8 [(short)2])));
            arr_9 [i_0 + 1] [i_0] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_0])) ? (((/* implicit */int) (short)2956)) : (((/* implicit */int) (short)21519))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2962))) : (3327675240U)));
        }
        arr_10 [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_3 [i_0] [i_0 + 2])))), (((/* implicit */int) ((3327675247U) < (arr_7 [i_0] [i_0 + 1]))))));
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2529039677U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32749)), (2985848756U))))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) % (arr_2 [i_0 + 1] [i_0 + 2] [(short)2]))) : (((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (unsigned short)22017)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1891392501U)))) : (min((2985848756U), (((/* implicit */unsigned int) var_0))))))));
        arr_12 [i_0] [i_0] = arr_6 [i_0] [(unsigned short)5] [i_0];
    }
}
