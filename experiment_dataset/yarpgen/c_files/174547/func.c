/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174547
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1563)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6)))))));
        arr_5 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_20 -= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 = (+((-2147483647 - 1)));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = (~(((/* implicit */int) arr_6 [i_1])));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1860484740U)) ? (((/* implicit */int) (unsigned short)18250)) : (((/* implicit */int) (unsigned short)63985)))) <= (((/* implicit */int) (((~(var_4))) < (((/* implicit */int) ((_Bool) 361865875U)))))))))));
        arr_10 [i_1] = (~((~((~(((/* implicit */int) (unsigned short)27739)))))));
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_10)))), (((int) var_7))))))))));
    var_25 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)172)) <= (183331139)));
    var_26 -= ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) var_17)))))));
}
