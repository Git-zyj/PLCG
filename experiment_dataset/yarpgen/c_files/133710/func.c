/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133710
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), ((((!(((/* implicit */_Bool) 490245670)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((~(((long long int) var_11))))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -490245670))))), (-1659578312)));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) min(((short)-1471), ((short)-1457)));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) arr_0 [i_1]))))) ? ((+(-1126064986))) : (((/* implicit */int) (short)-1457))));
        var_16 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3608633926U)) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)-1435)))))) : (((long long int) (short)1436))));
    }
    var_17 = ((/* implicit */unsigned short) min((0U), (((/* implicit */unsigned int) var_6))));
}
