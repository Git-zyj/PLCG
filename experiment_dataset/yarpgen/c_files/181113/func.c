/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181113
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) (~(arr_1 [i_0 - 2])));
        var_16 = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_0 - 3]));
        arr_3 [i_0 - 1] [i_0 - 3] = ((/* implicit */long long int) (-((-(arr_1 [i_0 - 2])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((-1972488059) + (2147483647))) >> (((var_3) + (7829169087446801772LL)))))), (((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10)))))) || (((/* implicit */_Bool) arr_1 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (~(arr_4 [i_2] [i_2])));
        arr_11 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))));
        arr_12 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    }
    var_19 = ((/* implicit */unsigned short) var_14);
}
