/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144339
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1452672464U)) ? (((/* implicit */int) ((((/* implicit */long long int) var_2)) == (9223372036854775807LL)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max(((unsigned char)48), (((/* implicit */unsigned char) (_Bool)1)))))))) : (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned char) ((unsigned short) var_13));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3849077036U)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)12274)))))))));
        var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_8)) - (min((min((var_15), (((/* implicit */unsigned int) (unsigned short)41178)))), (((/* implicit */unsigned int) (short)6610))))));
        var_22 = ((/* implicit */unsigned int) ((long long int) (+(-1658613079529157633LL))));
    }
}
