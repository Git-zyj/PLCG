/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107440
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [7U] = ((arr_0 [(_Bool)1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))));
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)22))))) - (((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (arr_0 [i_0] [(_Bool)1]))))))));
        arr_4 [i_0] [i_0] = var_5;
        arr_5 [i_0] = ((/* implicit */unsigned short) 2147483647);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1] = (~(min((((/* implicit */int) arr_2 [(unsigned short)13])), (min(((-2147483647 - 1)), (var_5))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (~(max((max((4294967295U), (((/* implicit */unsigned int) -2147483618)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (255))))))));
        arr_11 [i_1] = (unsigned short)63;
        var_11 = ((/* implicit */int) ((min((((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) arr_8 [i_1])) - (25453))))), (((/* implicit */int) (!(((/* implicit */_Bool) 25U))))))) == (((/* implicit */int) ((_Bool) (-(2147483647)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_14 [8] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) min((((_Bool) arr_13 [i_2])), ((!(((/* implicit */_Bool) arr_12 [i_2]))))))), (min((-2147483647), (((/* implicit */int) var_9))))));
        arr_15 [9] [i_2] &= ((/* implicit */int) 4U);
    }
    var_12 = ((/* implicit */unsigned short) var_7);
}
