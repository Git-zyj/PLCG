/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125917
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_4 [i_0] [i_0] [i_0])))) || ((!(arr_2 [i_0] [i_0]))))) ? ((((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) > (((/* implicit */int) (_Bool)1))))) : ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1 - 1]))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(var_1))))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max(((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)29)))))), (((/* implicit */int) (unsigned char)99)))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    var_13 |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) ^ (((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)29))))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((_Bool) var_8)))));
}
