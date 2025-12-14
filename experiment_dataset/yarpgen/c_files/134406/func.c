/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134406
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
    var_15 *= ((/* implicit */signed char) (-(var_6)));
    var_16 = ((/* implicit */int) (~((((-(var_9))) << (((((/* implicit */int) var_7)) - (17977)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((((/* implicit */int) (unsigned short)16238)) - (16238)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) -8447332884771715523LL))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : ((~(((/* implicit */int) ((arr_0 [i_1] [i_1]) < (11066844647411754476ULL))))))));
        var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_13)))))));
    }
    var_20 = ((/* implicit */signed char) var_13);
}
