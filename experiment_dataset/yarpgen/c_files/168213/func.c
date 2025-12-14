/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168213
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
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = (~(((/* implicit */int) var_6)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) -977389982)) ? (((/* implicit */int) arr_2 [i_0])) : (var_7))) : ((+(arr_4 [i_0])))));
            arr_7 [i_0] [i_1] = (~(((/* implicit */int) ((_Bool) (signed char)-37))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */_Bool) (signed char)37);
            var_17 |= arr_9 [i_0];
        }
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) arr_0 [(unsigned char)4]);
        var_19 = ((/* implicit */unsigned short) var_13);
    }
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) (!((_Bool)1)))))))));
}
