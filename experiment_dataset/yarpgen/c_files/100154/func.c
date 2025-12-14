/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100154
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [(unsigned char)4]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_3)))), (max((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)16383)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_1 [i_0]))))))));
            var_21 = ((/* implicit */unsigned long long int) ((_Bool) 0));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))));
            arr_10 [i_0] = ((/* implicit */_Bool) ((signed char) var_18));
        }
        arr_11 [i_0] = ((/* implicit */_Bool) ((signed char) ((long long int) arr_6 [i_0] [i_0] [i_0])));
    }
    var_22 = ((/* implicit */_Bool) var_2);
}
