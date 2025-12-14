/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160249
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_1 [i_1] [i_0]))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((_Bool) (short)-316)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1])))) <= (((/* implicit */int) var_8))));
        }
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_0)))), (((((/* implicit */_Bool) arr_5 [i_0] [12])) ? (((/* implicit */int) arr_3 [2U] [2U])) : (((/* implicit */int) var_4)))))))));
        var_15 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (short)324)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-316)) - (arr_2 [i_0])))) : (16465786507582720432ULL))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = arr_7 [i_2];
        var_16 = ((/* implicit */int) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) var_9))))));
    }
}
