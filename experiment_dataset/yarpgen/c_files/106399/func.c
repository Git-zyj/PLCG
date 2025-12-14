/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106399
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
    var_13 *= ((/* implicit */_Bool) ((var_8) ? ((-(4))) : (max(((-(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) 2294041366U)))))))));
    var_14 = (short)7;
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))), ((~(((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (short)10029)))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_17 &= ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0 - 1] [i_0])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) arr_5 [i_1 + 2] [i_1 + 1]);
        arr_6 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_4)), ((short)7)))) % (((/* implicit */int) arr_5 [6] [i_1])))))));
        var_19 += ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)0)))));
        var_20 -= ((/* implicit */short) (+(((((/* implicit */_Bool) -1792936789)) ? (((/* implicit */int) (short)7)) : (-1215465106)))));
        arr_7 [i_1] [i_1 - 3] = ((/* implicit */int) ((_Bool) ((short) arr_1 [i_1 + 2])));
    }
}
