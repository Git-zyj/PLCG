/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126822
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (arr_0 [i_0]) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) -8749848174405742292LL)) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) arr_0 [i_0 - 1]))));
        var_16 = ((/* implicit */long long int) var_7);
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) var_1);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_17 = ((/* implicit */_Bool) min((min((arr_3 [i_1]), (((/* implicit */int) arr_9 [i_2] [i_1] [i_1])))), (max((((((/* implicit */_Bool) arr_9 [(unsigned short)5] [(unsigned short)5] [1ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))));
            arr_10 [i_2] &= ((/* implicit */unsigned int) arr_6 [i_2]);
        }
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)252)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) : ((((_Bool)0) ? (((((/* implicit */int) (unsigned char)236)) % (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (_Bool)1))))));
    }
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2)))))))) : (((/* implicit */int) var_12))));
}
