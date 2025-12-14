/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175304
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) arr_0 [i_0])));
        arr_4 [(unsigned short)16] = ((/* implicit */unsigned char) 536870912U);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_1])))) > (((/* implicit */int) ((signed char) arr_6 [i_1])))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((unsigned int) var_11));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_14 [(unsigned short)10] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) min(((unsigned short)64671), (((/* implicit */unsigned short) arr_6 [i_2])))));
            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))));
        }
    }
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)13)), (var_4)));
}
