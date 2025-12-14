/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175755
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
    var_11 = ((/* implicit */short) var_0);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) max(((unsigned short)8441), (((/* implicit */unsigned short) (short)9069))))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)9161)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)6429)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)12))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 2])) : (arr_4 [i_1 - 2]))), (((/* implicit */unsigned long long int) 10U))));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (arr_5 [i_1 + 4]))) ? (arr_4 [i_1 - 2]) : (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 + 3])))));
        var_15 = ((/* implicit */unsigned short) 731178930);
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) 3676038607U))));
}
