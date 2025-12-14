/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138300
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_11);
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1 + 2]);
            arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 3] [i_0])));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((arr_9 [i_2] [i_2]) - (7703151793516306239LL))))))));
        var_20 -= ((/* implicit */short) (~(min((((/* implicit */long long int) (_Bool)1)), (1787080599386516809LL)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */long long int) ((int) (_Bool)1))), ((~(arr_9 [i_2] [i_2]))))))));
    }
    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) 1787080599386516818LL)))) - (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1787080599386516807LL)))), (max((((/* implicit */long long int) (short)8402)), (-8309447586706378081LL)))))));
        var_22 -= ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned short)20), (((/* implicit */unsigned short) (short)-8415)))))));
    }
}
