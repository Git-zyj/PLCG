/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115385
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
    var_12 = ((/* implicit */_Bool) 1048575);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1])))))))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) << (((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_0)) - (96))))) - (524026)))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)181);
        var_14 = ((unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_9 [i_2])) : (-1048594))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_8))))))) ? (((((var_5) + (((/* implicit */unsigned int) 2147483647)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (~(min((min((arr_7 [i_2]), (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))));
    }
    var_16 = (~(((/* implicit */int) var_7)));
}
