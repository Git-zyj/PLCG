/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17805
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -1))));
        arr_3 [i_0] = ((/* implicit */int) var_1);
        arr_4 [i_0] = ((/* implicit */int) (unsigned short)21625);
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [(short)8] = (~(((/* implicit */int) ((short) var_3))));
        arr_9 [i_1] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13)))), ((!(var_6))))), ((((!(((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) arr_5 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((((/* implicit */_Bool) ((int) -1))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2077681248))))) : (((/* implicit */int) (_Bool)1)));
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_2] [i_2])), (arr_5 [i_2])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_16 [i_2] [i_2] [i_2] = ((int) ((unsigned int) var_6));
            arr_17 [i_2] [0] = ((/* implicit */_Bool) ((unsigned short) arr_11 [i_3]));
            var_17 = ((/* implicit */short) arr_7 [16LL] [i_2]);
            arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2]);
        }
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_7))));
}
