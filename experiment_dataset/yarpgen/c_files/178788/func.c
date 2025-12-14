/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178788
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
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_11)))) ? (0ULL) : (((/* implicit */unsigned long long int) 2252470881U))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1]))));
            var_22 += ((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_1]));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
            var_24 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2380602312U)))));
        }
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
        var_26 = ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) var_6)) : (var_13));
    }
    var_27 = max((((/* implicit */unsigned int) var_10)), (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)245)) <= (((/* implicit */int) var_1))))), (max((var_9), (((/* implicit */unsigned int) var_16)))))));
}
