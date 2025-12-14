/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100450
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)22])) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -2962791969472661088LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38470)) ? (((/* implicit */int) (short)-3787)) : (-747084651))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27065))))))) : (((/* implicit */int) (unsigned short)8880))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [12U])), (14601408156516769970ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 2147483647)) : (15658432589393637000ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26225)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [18ULL])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_4 [i_0] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
    var_20 = ((/* implicit */unsigned short) var_12);
}
