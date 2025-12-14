/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171702
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
    var_15 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) - (((/* implicit */long long int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) (unsigned short)39891)))) : (((((/* implicit */int) var_14)) + (((/* implicit */int) var_3))))));
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)65021)))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
        }
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_5 [i_2])))) | (((((/* implicit */int) (signed char)51)) >> (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_5 [i_2])))), (((/* implicit */int) ((unsigned short) arr_5 [i_2]))))))));
    }
    /* LoopSeq 1 */
    for (int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        var_22 = ((/* implicit */int) max((((unsigned short) ((int) arr_5 [i_3]))), (((/* implicit */unsigned short) var_8))));
        var_23 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) var_5)));
        var_24 = ((/* implicit */signed char) max((var_24), (((signed char) (+(((/* implicit */int) arr_6 [i_3 - 2])))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_3 - 1])) : (((((/* implicit */_Bool) (short)-22428)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_3]))))));
    }
}
