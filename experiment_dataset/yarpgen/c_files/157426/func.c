/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157426
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
    var_15 &= ((/* implicit */unsigned short) 0U);
    var_16 = ((_Bool) (~(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-26276))));
        var_17 = ((/* implicit */unsigned int) var_9);
        var_18 = ((/* implicit */unsigned short) max((arr_1 [i_0]), (min((max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (var_7)))))));
        var_19 += (-(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+(arr_1 [i_1])));
        arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))));
        var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) << (((253172739U) - (253172723U)))));
    }
    var_21 *= ((/* implicit */unsigned int) (+(max(((~(((/* implicit */int) (short)-23540)))), (((/* implicit */int) min((var_0), (((/* implicit */short) (_Bool)1)))))))));
}
