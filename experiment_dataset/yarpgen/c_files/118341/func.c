/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118341
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)112)), (0ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)132)))) ^ (((/* implicit */int) (signed char)-21))))) : ((-9223372036854775807LL - 1LL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
            var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1]))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)57601)))))));
        }
    }
}
