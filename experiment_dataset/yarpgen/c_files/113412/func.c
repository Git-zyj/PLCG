/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113412
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) > (((((arr_3 [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)228)))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0] [i_1 + 2]))), (((unsigned int) (unsigned char)228))))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)175)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned char)68))))), (((min((((/* implicit */unsigned int) var_1)), (var_3))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned char)74))))) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned char)179))) ? (((/* implicit */int) min((var_11), ((unsigned char)30)))) : (((/* implicit */int) min(((unsigned char)30), ((unsigned char)184)))))) : (((/* implicit */int) var_6))));
    var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)196), (max(((unsigned char)234), (var_11))))))));
}
