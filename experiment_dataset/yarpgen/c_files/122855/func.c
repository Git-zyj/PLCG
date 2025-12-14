/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122855
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
    var_10 &= ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (((((~((~(((/* implicit */int) var_6)))))) + (2147483647))) << (((max((0U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) - (74U)))));
        var_11 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) & (((/* implicit */int) var_6)));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_1] [i_1])) + (2147483647))) >> ((((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (1293097576U))))) - (3001869700U)))));
        var_12 ^= ((/* implicit */signed char) (~(min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_2 [i_1] [i_1]))))), ((~(((/* implicit */int) arr_1 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 + 2])) % (((/* implicit */int) arr_5 [(short)3] [i_1]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_1])))))));
            arr_10 [i_1] = ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) max((var_8), (var_8)))) : (((int) arr_2 [i_2 - 2] [i_2 - 2]))));
        }
    }
    var_14 = ((/* implicit */unsigned int) var_6);
}
