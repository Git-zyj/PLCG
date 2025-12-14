/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111500
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((max((((((/* implicit */int) var_12)) % (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (signed char)85)))))) << ((((~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))) + (128))))))));
        arr_2 [i_0] [7] = var_14;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */short) var_4);
        var_17 += ((/* implicit */int) arr_3 [12LL]);
        arr_5 [i_1] |= ((/* implicit */unsigned int) arr_3 [i_1]);
    }
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_6 [i_3]);
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max(((short)32767), ((short)3030))))));
                var_21 ^= ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
