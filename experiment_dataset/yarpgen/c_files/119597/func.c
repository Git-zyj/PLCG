/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119597
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = (short)-22926;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 |= ((((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (11557246006004280564ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11557246006004280565ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (6889498067705271043ULL)))) : (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 7452243276646648714ULL)) ? (((/* implicit */int) (_Bool)1)) : (1645470912)))));
        var_20 = ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((short) var_7))) : ((~(((/* implicit */int) ((short) var_3)))))));
}
