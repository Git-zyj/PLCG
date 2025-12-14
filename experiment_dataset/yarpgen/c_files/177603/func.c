/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177603
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
    var_20 ^= (!(((/* implicit */_Bool) min((-8011393604762249635LL), (-8011393604762249635LL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((var_19) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (8011393604762249614LL))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-14953)))) : (var_19)));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) 8011393604762249634LL))))))));
                var_24 ^= ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_18))))));
                arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1012490153)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (4398045462528LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            }
        }
        arr_8 [i_0] = ((/* implicit */short) -1LL);
    }
}
