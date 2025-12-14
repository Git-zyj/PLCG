/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114524
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (var_2))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)9])) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_9)))))) + (41)))));
            var_13 &= ((/* implicit */long long int) var_8);
        }
        arr_7 [(unsigned char)22] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), ((-(arr_0 [i_0])))));
        var_14 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) || (var_9))))))));
    }
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_6)), (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))))), (min((((/* implicit */long long int) min((var_3), (var_11)))), (var_4)))));
    var_16 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8))))));
}
