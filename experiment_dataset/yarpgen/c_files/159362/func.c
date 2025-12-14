/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159362
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)51))));
    var_20 = ((/* implicit */long long int) (signed char)-55);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 |= ((int) var_5);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) / (1449577306U)))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) arr_3 [i_0]))))));
        }
        arr_6 [i_0] [i_0] |= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_7 [i_0] &= ((/* implicit */short) (+(max((((/* implicit */long long int) max((1449577306U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))), (min((((/* implicit */long long int) arr_3 [i_0])), (arr_2 [i_0])))))));
    }
}
