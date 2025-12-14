/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178933
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_10))));
        arr_3 [i_0] [i_0] = min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)51)), ((unsigned char)251)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_8)))))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_12 ^= arr_2 [i_1];
            var_13 = ((/* implicit */unsigned int) max((((unsigned long long int) 3693499071263761355ULL)), (((/* implicit */unsigned long long int) (unsigned char)9))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned char) ((signed char) var_10));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned short) min((((long long int) var_0)), (((/* implicit */long long int) ((signed char) var_4))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) var_10);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2])))))))));
    }
    var_16 = ((/* implicit */unsigned int) ((unsigned short) 3860307324U));
}
